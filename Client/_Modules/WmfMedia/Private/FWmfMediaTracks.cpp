// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 57

// FWmfMediaTracks @ 14ea95960

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FWmfMediaTracks * __thiscall FWmfMediaTracks::FWmfMediaTracks(FWmfMediaTracks *this)

{
  code *pcVar1;
  bool bVar2;
  FWmfMediaAudioSamplePool *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar4;
  undefined8 *puVar5;
  FWmfMediaTracks *pFVar6;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaSamples__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 == (FWmfMediaAudioSamplePool *)0x0) {
    pFVar3 = (FWmfMediaAudioSamplePool *)0x0;
  }
  else {
    lpCriticalSection = ::operator_new(0x60);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
      puVar5 = (undefined8 *)0x0;
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection[1].LockCount = 0;
      lpCriticalSection[1].RecursionCount = 0;
      puVar4 = ::operator_new(0x10);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar5 = puVar4;
      }
      lpCriticalSection[1].SpinCount = (ULONG_PTR)puVar5;
      lpCriticalSection[1].LockSemaphore = puVar5;
      lpCriticalSection[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    puVar5 = (undefined8 *)0x0;
    *(LPCRITICAL_SECTION *)pFVar3 = lpCriticalSection;
    puVar4 = ::operator_new(0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = 1;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
      *puVar4 = &
                ___7__TReferenceControllerWithDeleter_VTStorage___TMediaObjectPool_VFWmfMediaAudioSample__V__TMediaPoolDefaultObjectAllocator_VFWmfMediaAudioSample______U__DefaultDeleter_VTStorage___TMediaObjectPool_VFWmfMediaAudioSample__V__TMediaPoolDefaultObjectAllocator_VFWmfMediaAudioSample_______SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      puVar4[2] = lpCriticalSection;
      puVar5 = puVar4;
    }
    *(undefined8 **)&pFVar3->field_0x8 = puVar5;
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InRawPtrProxy.Object != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0xe3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FWmfMediaTracks *)(*pcVar1)();
      return pFVar6;
    }
  }
  this->AudioSamplePool = pFVar3;
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue)._padding_ = 0;
  (this->AudioSampleQueue)._padding_ = 2;
  (this->AudioSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::
        _vftable__for__TMediaSampleSink<IMediaAudioSample>__;
  (this->AudioSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::
        _vftable__for__TMediaSampleSource<IMediaAudioSample>__;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->AudioSampleQueue).CriticalSection,4000);
  (this->AudioSampleQueue).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSampleQueue).Samples.ArrayNum = 0;
  (this->AudioSampleQueue).Samples.ArrayMax = 0;
  (this->AudioSampleQueue).MaxSamplesInQueue = -1;
  (this->AudioSampleQueue).FlushCount = 0;
  (this->AudioSampleQueue).NumDroppedSamples = 0;
  (this->AudioTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioTracks).ArrayNum = 0;
  (this->AudioTracks).ArrayMax = 0;
  (this->CaptionSampleQueue)._padding_ = 0;
  (this->CaptionSampleQueue)._padding_ = 0;
  (this->CaptionSampleQueue)._padding_ = 0;
  (this->CaptionSampleQueue)._padding_ = 2;
  (this->CaptionSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
        _vftable__for__TMediaSampleSink<IMediaOverlaySample>__;
  (this->CaptionSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
        _vftable__for__TMediaSampleSource<IMediaOverlaySample>__;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->CaptionSampleQueue).CriticalSection,4000);
  (this->CaptionSampleQueue).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptionSampleQueue).Samples.ArrayNum = 0;
  (this->CaptionSampleQueue).Samples.ArrayMax = 0;
  (this->CaptionSampleQueue).MaxSamplesInQueue = -1;
  (this->CaptionSampleQueue).FlushCount = 0;
  (this->CaptionSampleQueue).NumDroppedSamples = 0;
  (this->CaptionTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CaptionTracks).ArrayNum = 0;
  (this->CaptionTracks).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Info).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Info).Data.ArrayNum = 0;
  (this->Info).Data.ArrayMax = 0;
  (this->SourceUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceUrl).Data.ArrayNum = 0;
  (this->SourceUrl).Data.ArrayMax = 0;
  (this->MediaSource).RawPointer = (IMFMediaSource *)0x0;
  (this->MediaStreamSink).RawPointer = (FWmfMediaStreamSink *)0x0;
  this->MediaSourceChanged = false;
  (this->MetadataSampleQueue)._padding_ = 0;
  (this->MetadataSampleQueue)._padding_ = 0;
  (this->MetadataSampleQueue)._padding_ = 0;
  (this->MetadataSampleQueue)._padding_ = 2;
  (this->MetadataSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
        _vftable__for__TMediaSampleSink<IMediaBinarySample>__;
  (this->MetadataSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
        _vftable__for__TMediaSampleSource<IMediaBinarySample>__;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->MetadataSampleQueue).CriticalSection,4000);
  (this->MetadataSampleQueue).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataSampleQueue).Samples.ArrayNum = 0;
  (this->MetadataSampleQueue).Samples.ArrayMax = 0;
  (this->MetadataSampleQueue).MaxSamplesInQueue = -1;
  (this->MetadataSampleQueue).FlushCount = 0;
  (this->MetadataSampleQueue).NumDroppedSamples = 0;
  (this->MetadataTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataTracks).ArrayNum = 0;
  (this->MetadataTracks).ArrayMax = 0;
  (this->PresentationDescriptor).RawPointer = (IMFPresentationDescriptor *)0x0;
  this->SelectedAudioTrack = -1;
  this->SelectedCaptionTrack = -1;
  this->SelectedMetadataTrack = -1;
  this->SelectedVideoTrack = -1;
  this->SelectionChanged = false;
  this->bVideoTrackRequestedHardwareAcceleration = false;
  this->VideoSamplePool = (FWmfMediaTextureSamplePool *)0x0;
  (this->VideoHardwareVideoDecodingSamplePool).Object =
       (FWmfMediaHardwareVideoDecodingTextureSamplePool *)0x0;
  (this->VideoHardwareVideoDecodingSamplePool).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VideoSampleQueue)._padding_ = 0;
  (this->VideoSampleQueue)._padding_ = 0;
  (this->VideoSampleQueue)._padding_ = 0;
  (this->VideoSampleQueue)._padding_ = 2;
  (this->VideoSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
        _vftable__for__TMediaSampleSink<IMediaTextureSample>__;
  (this->VideoSampleQueue)._padding_ =
       (longlong)
       &TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
        _vftable__for__TMediaSampleSource<IMediaTextureSample>__;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->VideoSampleQueue).CriticalSection,4000);
  (this->VideoSampleQueue).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoSampleQueue).Samples.ArrayNum = 0;
  (this->VideoSampleQueue).Samples.ArrayMax = 0;
  (this->VideoSampleQueue).MaxSamplesInQueue = -1;
  (this->VideoSampleQueue).FlushCount = 0;
  (this->VideoSampleQueue).NumDroppedSamples = 0;
  (this->VideoTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoTracks).ArrayNum = 0;
  (this->VideoTracks).ArrayMax = 0;
  (this->CachedDuration).Ticks = 0;
  this->SessionState = Closed;
  this->Session = (FWmfMediaSession *)0x0;
  (this->NextMinSequenceIndex).bIsSet = false;
  return this;
}

// ~FWmfMediaTracks @ 14ea97d70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::~FWmfMediaTracks(FWmfMediaTracks *this)

{
  FWmfMediaAudioSamplePool *pFVar1;
  FWmfMediaTextureSamplePool *pFVar2;
  FScriptContainerElement *pFVar3;
  IMFPresentationDescriptor *pIVar4;
  FWmfMediaStreamSink *pFVar5;
  IMFMediaSource *pIVar6;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaSamples__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  Shutdown(this);
  pFVar1 = this->AudioSamplePool;
  if (pFVar1 != (FWmfMediaAudioSamplePool *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&pFVar1->field_0x8);
    ::operator_delete(pFVar1,0x10);
  }
  this->AudioSamplePool = (FWmfMediaAudioSamplePool *)0x0;
  pFVar2 = this->VideoSamplePool;
  if (pFVar2 != (FWmfMediaTextureSamplePool *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&pFVar2->field_0x8);
    ::operator_delete(pFVar2,0x10);
  }
  this->VideoSamplePool = (FWmfMediaTextureSamplePool *)0x0;
  DestructItems<FWmfMediaTracks::FTrack,int>
            ((FTrack *)(this->VideoTracks).AllocatorInstance.Data,(this->VideoTracks).ArrayNum);
  pFVar3 = (this->VideoTracks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
  ~TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
            (&this->VideoSampleQueue);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VideoHardwareVideoDecodingSamplePool).SharedReferenceCount.ReferenceController);
  pIVar4 = (this->PresentationDescriptor).RawPointer;
  if (pIVar4 != (IMFPresentationDescriptor *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  DestructItems<FWmfMediaTracks::FTrack,int>
            ((FTrack *)(this->MetadataTracks).AllocatorInstance.Data,(this->MetadataTracks).ArrayNum
            );
  pFVar3 = (this->MetadataTracks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
  ~TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>
            (&this->MetadataSampleQueue);
  pFVar5 = (this->MediaStreamSink).RawPointer;
  if (pFVar5 != (FWmfMediaStreamSink *)0x0) {
    (**(code **)(*(longlong *)pFVar5 + 0x10))();
  }
  pIVar6 = (this->MediaSource).RawPointer;
  if (pIVar6 != (IMFMediaSource *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pFVar3 = (this->SourceUrl).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Info).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  DestructItems<FWmfMediaTracks::FTrack,int>
            ((FTrack *)(this->CaptionTracks).AllocatorInstance.Data,(this->CaptionTracks).ArrayNum);
  pFVar3 = (this->CaptionTracks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
  ~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
            (&this->CaptionSampleQueue);
  DestructItems<FWmfMediaTracks::FTrack,int>
            ((FTrack *)(this->AudioTracks).AllocatorInstance.Data,(this->AudioTracks).ArrayNum);
  pFVar3 = (this->AudioTracks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::
  ~TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>
            (&this->AudioSampleQueue);
  this->_padding_ = (longlong)&___7IMediaTracks__6B_;
  this->_padding_ = (longlong)&___7IMediaSamples__6B_;
  return;
}

// operator() @ 14ea98820

/* WARNING: Enum "Type": Some values do not have unique names */

EWorkItemResult __thiscall
`FWmfMediaTracks::FlushSamples'::__l2::<lambda_1>::operator()
          (void *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,T_HRESULT param_3,
          FBaseWorkItemState *param_4)

{
  longlong lVar1;
  LPCRITICAL_SECTION p_Var2;
  
  p_Var2 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x128);
  if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(p_Var2);
    if (6 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    (**(code **)(*(longlong *)(*(longlong *)this + 0x18) + 0x18))();
    (**(code **)(*(longlong *)(*(longlong *)this + 0xa0) + 0x18))();
    (**(code **)(*(longlong *)(*(longlong *)this + 0x188) + 0x18))();
    (**(code **)(*(longlong *)(*(longlong *)this + 0x248) + 0x18))();
    *(undefined4 *)(*(longlong *)this + 0x2f0) = 0;
    *(undefined4 *)(*(longlong *)this + 0x2f4) = 0;
    if (*(char *)(*(longlong *)this + 0x2ec) != '\0') {
      *(undefined1 *)(*(longlong *)this + 0x2ec) = 0;
    }
    LeaveCriticalSection(p_Var2);
    lVar1 = *(longlong *)(*(longlong *)this + 0x2e0);
    p_Var2 = (LPCRITICAL_SECTION)(lVar1 + 0x18);
    if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(p_Var2);
      if (*(char *)(lVar1 + 0x100) != '\0') {
        *(undefined1 *)(lVar1 + 0x100) = 0;
      }
      LeaveCriticalSection(p_Var2);
      if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
        (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
      }
      return Done;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddStreamToTracks @ 14ea9b4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ea9ca98) */
/* WARNING: Removing unreachable block (ram,0x00014ea9c7f7) */
/* WARNING: Removing unreachable block (ram,0x00014ea9c459) */
/* WARNING: Removing unreachable block (ram,0x00014ea9d79c) */
/* WARNING: Removing unreachable block (ram,0x00014ea9caaa) */
/* WARNING: Removing unreachable block (ram,0x00014ea9c46b) */
/* WARNING: Removing unreachable block (ram,0x00014ea9c809) */
/* WARNING: Removing unreachable block (ram,0x00014ea9d7ae) */
/* WARNING: Removing unreachable block (ram,0x00014ea9cabd) */
/* WARNING: Removing unreachable block (ram,0x00014ea9c47e) */
/* WARNING: Removing unreachable block (ram,0x00014ea9c81c) */
/* WARNING: Removing unreachable block (ram,0x00014ea9d7c1) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::AddStreamToTracks(FWmfMediaTracks *this,uint param_1,bool param_2,FString *param_3)

{
  IMFPresentationDescriptor *pIVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  ForAnyElementType FVar6;
  TIntPoint<int>_u_0 TVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  TRangeBound<float> TVar10;
  _GUID _Var11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  UWmfMediaSettings *pUVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  FWmfMediaTextureSamplePool *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  IMFMediaType IVar24;
  TIntPoint<int>_u_0 TVar25;
  longlong lVar26;
  uchar auVar27 [8];
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_638 [32];
  longlong *local_5e0;
  uint local_5d8;
  char local_5d4;
  bool local_5d3;
  FSharedReferencer<1> local_5d0;
  FScriptContainerElement local_5c8;
  longlong *local_5c0;
  uint local_5b8;
  int local_5b4;
  uint local_5b0;
  undefined8 local_5a8;
  IMFMediaType local_5a0;
  FScriptContainerElement *local_598;
  TRange<float> local_588;
  FScriptContainerElement *local_578;
  FString local_570;
  TIntPoint<int>_u_0 local_560;
  TIntPoint<int>_u_0 local_558;
  uint local_550;
  uint local_54c;
  uint local_548;
  FString *local_540;
  wchar_t *local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  int local_524;
  int local_520;
  undefined4 local_51c;
  undefined4 local_518 [2];
  FText *local_510;
  FWmfMediaTracks *local_508;
  longlong *local_500;
  undefined4 local_4f8;
  float fStack_4f4;
  undefined4 local_4f0;
  float fStack_4ec;
  ulonglong local_4e8 [2];
  undefined4 local_4d8;
  float fStack_4d4;
  undefined4 uStack_4d0;
  float fStack_4cc;
  ulonglong local_4c8;
  ulonglong local_4c0;
  FString local_4b8;
  ulonglong local_4a8;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  TSharedPtr<FCulture,1> local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FText local_300;
  FTextFormat local_2f0;
  FText local_2e0;
  FText local_2d0;
  FText local_2c0;
  _GUID local_2b0;
  _GUID local_2a0;
  longlong *local_288;
  IMFMediaType local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  IMFMediaType local_210;
  ForAnyElementType local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  int iStack_1e8;
  int iStack_1e4;
  uint uStack_1e0;
  _GUID local_1dc;
  float local_1cc;
  TRangeBound<float> TStack_1c8;
  undefined4 uStack_1c0;
  float fStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  uint uStack_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  IMFMediaType local_1a0;
  ForAnyElementType local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  IMFMediaType local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  _GUID local_c8;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_638;
  pFVar31 = (FScriptContainerElement *)0x0;
  iVar33 = 0;
  local_5d8 = param_1;
  local_5d4 = param_2;
  local_540 = param_3;
  local_508 = this;
  ::FString::PrintfImpl(&local_4a0,L"Stream %i\n");
  iVar14 = local_4a0.Data.ArrayNum + -1;
  if (local_4a0.Data.ArrayNum == 0) {
    iVar14 = iVar33;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_4a0.Data.AllocatorInstance.Data,iVar14);
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  local_5c0 = (longlong *)0x0;
  local_524 = 0;
  if (((this->PresentationDescriptor).RawPointer == (IMFPresentationDescriptor *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawPointer != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                          ,0x9f,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  pIVar1 = (this->PresentationDescriptor).RawPointer;
  iVar14 = (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,param_1,&local_524,&local_5c0);
  if (iVar14 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_390,iVar14);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
    }
    ::FString::AppendChars(param_3,L"\tmissing stream descriptor\n",0x1b);
    bVar12 = false;
  }
  else {
    if (local_524 == 1) {
      if (((this->PresentationDescriptor).RawPointer == (IMFPresentationDescriptor *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
      pIVar1 = (this->PresentationDescriptor).RawPointer;
      iVar14 = (**(code **)((longlong)*pIVar1 + 0x120))(pIVar1,param_1);
      if ((iVar14 < 0) && (5 < (byte)LogWmfMedia._0_1_)) {
        WmfMedia::ResultToString(&local_380,iVar14);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
        }
      }
    }
    local_5d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((local_5c0 == (longlong *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return (bool)uVar13;
    }
    iVar14 = (**(code **)(*local_5c0 + 0x110))(local_5c0,&local_5d0);
    if (iVar14 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_370,iVar14);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
        }
      }
      ::FString::AppendChars(param_3,L"\tno handler available\n",0x16);
      bVar12 = false;
    }
    else {
      if ((local_5d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
      iVar14 = (**(code **)((local_5d0.ReferenceController)->_padding_ + 0x40))
                         (local_5d0.ReferenceController,&local_2b0);
      if (iVar14 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_360,iVar14);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.Data.AllocatorInstance.Data);
          }
        }
        ::FString::AppendChars(param_3,L"\tfailed to determine MajorType\n",0x1f);
        bVar12 = false;
      }
      else {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::MajorTypeToString(&local_350,&local_2b0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.Data.AllocatorInstance.Data);
          }
        }
        WmfMedia::MajorTypeToString(&local_340,&local_2b0);
        ::FString::PrintfImpl(&local_490,L"\tType: %s\n");
        iVar14 = local_490.Data.ArrayNum + -1;
        if (local_490.Data.ArrayNum == 0) {
          iVar14 = iVar33;
        }
        ::FString::AppendChars(param_3,(wchar_t *)local_490.Data.AllocatorInstance.Data,iVar14);
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        iVar14 = memcmp(&local_2b0,&MFMediaType_Audio,0x10);
        if (((iVar14 == 0) || (iVar14 = memcmp(&local_2b0,&MFMediaType_SAMI,0x10), iVar14 == 0)) ||
           (iVar14 = memcmp(&local_2b0,&MFMediaType_Video,0x10), iVar14 == 0)) {
          iVar14 = (**(code **)(*local_5c0 + 0x38))(local_5c0,&MF_SD_PROTECTED,&local_520);
          if (iVar14 < 0) {
            local_520 = 0;
          }
          local_5c8 = (FScriptContainerElement)(local_520 != 0);
          if (local_520 != 0) {
            ::FString::PrintfImpl(&local_480,L"\tProtected content\n");
            iVar14 = local_480.Data.ArrayNum + -1;
            if (local_480.Data.ArrayNum == 0) {
              iVar14 = iVar33;
            }
            ::FString::AppendChars(param_3,(wchar_t *)local_480.Data.AllocatorInstance.Data,iVar14);
            if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_480.Data.AllocatorInstance.Data);
            }
          }
          local_54c = 0;
          if ((local_5d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar13 = (*pcVar2)();
            return (bool)uVar13;
          }
          iVar14 = (**(code **)((local_5d0.ReferenceController)->_padding_ + 0x20))
                             (local_5d0.ReferenceController,&local_54c);
          if (iVar14 < 0) {
            if (5 < (byte)LogWmfMedia._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_Tracks__p__Fail_152ffb4f8,
                         (FLogCategoryBase *)&LogWmfMedia);
            }
            ::FString::AppendChars(param_3,L"\tfailed to get track formats\n",0x1d);
            bVar12 = false;
          }
          else {
            local_598 = (FScriptContainerElement *)0x0;
            uVar15 = 0xffffffff;
            local_5b0 = 0xffffffff;
            local_578 = (FScriptContainerElement *)0x0;
            iVar14 = memcmp(&local_2b0,&MFMediaType_Audio,0x10);
            if (iVar14 == 0) {
              local_578 = (FScriptContainerElement *)&this->SelectedAudioTrack;
              uVar15 = TArray<FWmfMediaTracks::FTrack,TSizedDefaultAllocator<32>_>::AddDefaulted
                                 (&this->AudioTracks);
              uVar22 = 0;
              if ((int)uVar15 < (this->AudioTracks).ArrayNum) {
                uVar22 = ~uVar15 >> 0x1f;
              }
              local_5b0 = uVar15;
              if ((uVar22 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                uVar13 = (*pcVar2)();
                return (bool)uVar13;
              }
              pFVar31 = (this->AudioTracks).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x60;
              pFVar23 = local_578;
              local_598 = pFVar31;
            }
            else {
              iVar14 = memcmp(&local_2b0,&MFMediaType_SAMI,0x10);
              if (iVar14 == 0) {
                local_578 = (FScriptContainerElement *)&this->SelectedCaptionTrack;
                uVar15 = TArray<FWmfMediaTracks::FTrack,TSizedDefaultAllocator<32>_>::AddDefaulted
                                   (&this->CaptionTracks);
                uVar22 = 0;
                if ((int)uVar15 < (this->CaptionTracks).ArrayNum) {
                  uVar22 = ~uVar15 >> 0x1f;
                }
                local_5b0 = uVar15;
                if ((uVar22 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar2 = (code *)swi(3);
                  uVar13 = (*pcVar2)();
                  return (bool)uVar13;
                }
                pFVar31 = (this->CaptionTracks).AllocatorInstance.Data +
                          (longlong)(int)uVar15 * 0x60;
                pFVar23 = local_578;
                local_598 = pFVar31;
              }
              else {
                iVar14 = memcmp(&local_2b0,&MFMediaType_Binary,0x10);
                if (iVar14 == 0) {
                  local_578 = (FScriptContainerElement *)&this->SelectedMetadataTrack;
                  uVar15 = TArray<FWmfMediaTracks::FTrack,TSizedDefaultAllocator<32>_>::AddDefaulted
                                     (&this->MetadataTracks);
                  uVar22 = 0;
                  if ((int)uVar15 < (this->MetadataTracks).ArrayNum) {
                    uVar22 = ~uVar15 >> 0x1f;
                  }
                  local_5b0 = uVar15;
                  if ((uVar22 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  pFVar31 = (this->MetadataTracks).AllocatorInstance.Data +
                            (longlong)(int)uVar15 * 0x60;
                  pFVar23 = local_578;
                  local_598 = pFVar31;
                }
                else {
                  iVar14 = memcmp(&local_2b0,&MFMediaType_Video,0x10);
                  pFVar23 = pFVar31;
                  if (iVar14 == 0) {
                    local_578 = (FScriptContainerElement *)&this->SelectedVideoTrack;
                    uVar15 = TArray<FWmfMediaTracks::FTrack,TSizedDefaultAllocator<32>_>::
                             AddDefaulted(&this->VideoTracks);
                    uVar22 = 0;
                    if ((int)uVar15 < (this->VideoTracks).ArrayNum) {
                      uVar22 = ~uVar15 >> 0x1f;
                    }
                    local_5b0 = uVar15;
                    if ((uVar22 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar2 = (code *)swi(3);
                      uVar13 = (*pcVar2)();
                      return (bool)uVar13;
                    }
                    pFVar31 = (this->VideoTracks).AllocatorInstance.Data +
                              (longlong)(int)uVar15 * 0x60;
                    pFVar23 = local_578;
                    local_598 = pFVar31;
                  }
                }
              }
            }
            if ((pFVar31 == (FScriptContainerElement *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Track != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                                    ,0x5ea,L""), bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar13 = (*pcVar2)();
              return (bool)uVar13;
            }
            if ((uVar15 == 0xffffffff) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TrackIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                                    ,0x5eb,L""), bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar13 = (*pcVar2)();
              return (bool)uVar13;
            }
            if ((pFVar23 == (FScriptContainerElement *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SelectedTrack != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                                    ,0x5ec,L""), bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar13 = (*pcVar2)();
              return (bool)uVar13;
            }
            local_500 = (longlong *)0x0;
            if ((local_5d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RawPointer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                    ,0x9f,L""), bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar13 = (*pcVar2)();
              return (bool)uVar13;
            }
            iVar14 = (**(code **)((local_5d0.ReferenceController)->_padding_ + 0x38))
                               (local_5d0.ReferenceController,&local_500);
            if ((iVar14 < 0) && (5 < (byte)LogWmfMedia._0_1_)) {
              WmfMedia::ResultToString(&local_320,iVar14);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
              if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_320.Data.AllocatorInstance.Data);
              }
            }
            *(uint *)(pFVar31 + 0x54) = 0xffffffff;
            pUVar17 = GetDefault<UWmfMediaSettings>();
            fVar4 = __real_bf800000;
            fVar3 = __real_3f800000;
            if ((pUVar17->AllowNonStandardCodecs != false) ||
               (local_5d3 = false, pUVar17->bAreHardwareAcceleratedCodecRegistered != false)) {
              local_5d3 = true;
            }
            local_548 = 0;
            if (local_54c != 0) {
LAB_14ea9bef2:
              ::FString::PrintfImpl(&local_470,L"\tFormat %u\n");
              iVar14 = local_470.Data.ArrayNum + -1;
              if (local_470.Data.ArrayNum == 0) {
                iVar14 = 0;
              }
              ::FString::AppendChars
                        (param_3,(wchar_t *)local_470.Data.AllocatorInstance.Data,iVar14);
              if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_470.Data.AllocatorInstance.Data);
              }
              local_5e0 = (longlong *)0x0;
              if ((local_5d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RawPointer != 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                      ,0x9f,L""), bVar12)) {
                pcVar2 = (code *)swi(3);
                uVar13 = (*pcVar2)();
                return (bool)uVar13;
              }
              iVar14 = (**(code **)((local_5d0.ReferenceController)->_padding_ + 0x28))
                                 (local_5d0.ReferenceController,local_548,&local_5e0);
              if (-1 < iVar14) {
                iVar14 = memcmp(&local_2b0,&MFMediaType_SAMI,0x10);
                if (iVar14 == 0) {
                  local_2a0.Data1 = 0;
                  local_2a0.Data2 = 0;
                  local_2a0.Data3 = 0;
                  local_2a0.Data4[0] = '\0';
                  local_2a0.Data4[1] = '\0';
                  local_2a0.Data4[2] = '\0';
                  local_2a0.Data4[3] = '\0';
                  local_2a0.Data4[4] = '\0';
                  local_2a0.Data4[5] = '\0';
                  local_2a0.Data4[6] = '\0';
                  local_2a0.Data4[7] = '\0';
                }
                else {
                  if ((local_5e0 == (longlong *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("RawPointer != 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                          ,0x9f,L""), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  iVar14 = (**(code **)(*local_5e0 + 0x50))(local_5e0,&MF_MT_SUBTYPE,&local_2a0);
                  if (iVar14 < 0) {
                    if (5 < (byte)LogWmfMedia._0_1_) {
                      WmfMedia::ResultToString(&local_3a0,iVar14);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
                      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
                      }
                    }
                    ::FString::AppendChars(param_3,L"\t\tfailed to get sub-type\n",0x19);
                    goto LAB_14ea9c08a;
                  }
                }
                WmfMedia::SubTypeToString(&local_570,&local_2a0);
                ::FString::PrintfImpl(&local_460,L"\t\tCodec: %s\n");
                iVar14 = local_460.Data.ArrayNum + -1;
                if (local_460.Data.ArrayNum == 0) {
                  iVar14 = 0;
                }
                ::FString::AppendChars
                          (param_3,(wchar_t *)local_460.Data.AllocatorInstance.Data,iVar14);
                if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_460.Data.AllocatorInstance.Data);
                }
                WmfMedia::CreateOutputType(&local_5a0,SUB81(local_5e0,0),local_5d3);
                IVar24 = local_5a0;
                if (local_5a0 == (IMFMediaType)0x0) {
                  ::FString::AppendChars(param_3,L"\t\tfailed to create output type\n",0x1f);
                  if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_570.Data.AllocatorInstance.Data);
                  }
                  goto LAB_14ea9c08a;
                }
                iVar14 = memcmp(&local_2b0,&MFMediaType_Audio,0x10);
                if (iVar14 == 0) {
                  iVar14 = (**(code **)(*local_5e0 + 0x38))
                                     (local_5e0,&MF_MT_AUDIO_BITS_PER_SAMPLE,&local_51c);
                  if (iVar14 < 0) {
                    local_51c = 0x10;
                  }
                  uVar30 = local_51c;
                  iVar14 = (**(code **)(*local_5e0 + 0x38))
                                     (local_5e0,&MF_MT_AUDIO_NUM_CHANNELS,local_518);
                  if (iVar14 < 0) {
                    local_518[0] = 0;
                  }
                  uVar8 = local_518[0];
                  iVar14 = (**(code **)(*local_5e0 + 0x38))
                                     (local_5e0,&MF_MT_AUDIO_SAMPLES_PER_SECOND,&local_530);
                  if (iVar14 < 0) {
                    local_530 = 0;
                  }
                  uVar9 = local_530;
                  pFVar23 = pFVar31 + 0x18;
                  local_288 = local_5e0;
                  if (local_5e0 != (longlong *)0x0) {
                    (**(code **)(*local_5e0 + 8))();
                  }
                  local_280 = IVar24;
                  (**(code **)(*(longlong *)IVar24 + 8))(IVar24);
                  iVar14 = local_570.Data.ArrayNum;
                  FVar6.Data = local_570.Data.AllocatorInstance.Data;
                  local_5a8 = (FScriptContainerElement *)&local_278;
                  local_278.Data = (FScriptContainerElement *)0x0;
                  local_270 = CONCAT44(local_270._4_4_,local_570.Data.ArrayNum);
                  if (local_570.Data.ArrayNum == 0) {
                    local_270 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_570.Data.ArrayNum,0,&local_278,local_570.Data.ArrayNum,
                               (int *)((longlong)&local_270 + 4));
                    memcpy(local_278.Data,FVar6.Data,(longlong)iVar14 * 2);
                  }
                  iVar14 = 0;
                  uStack_228 = 0;
                  uStack_224 = 0;
                  uStack_220 = 0;
                  uStack_21c = 0;
                  local_25c = 0;
                  uStack_254 = 0;
                  local_24c = 0;
                  uStack_244 = 0;
                  local_23c = 0;
                  uStack_238 = CONCAT31(uStack_238._1_3_,2);
                  uStack_234 = 0;
                  uStack_230 = CONCAT31(uStack_230._1_3_,2);
                  local_22c = 0;
                    /* WARNING: Load size is inaccurate */
                  local_268 = uVar30;
                  uStack_264 = uVar8;
                  local_260 = uVar9;
                  if (((*pFVar23 <= (FScriptContainerElement *)&local_288) &&
                      ((FScriptContainerElement *)&local_288 <
                       *pFVar23 + (longlong)(int)*(uint *)(pFVar31 + 0x24) * 0x70)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  local_5b8 = *(uint *)&pFVar31[0x20].field_0x0;
                  if (local_5b8 == *(uint *)(pFVar31 + 0x24)) {
                    local_5b8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x870,(ForAnyElementType *)pFVar23,
                                           (int *)(pFVar31 + 0x24));
                  }
                  *(uint *)&pFVar31[0x20].field_0x0 = local_5b8 + 1;
                    /* WARNING: Load size is inaccurate */
                  pFVar31 = *pFVar23 + (longlong)(int)local_5b8 * 0x70;
                  *(longlong **)pFVar31 = local_288;
                  *(IMFMediaType *)(pFVar31 + 8) = local_280;
                  local_5a8 = pFVar31 + 0x10;
                  *(undefined8 *)local_5a8 = 0;
                  *(FScriptContainerElement **)local_5a8 = local_278.Data;
                  *(undefined4 *)(pFVar31 + 0x18) = (undefined4)local_270;
                  *(undefined4 *)(pFVar31 + 0x1c) = local_270._4_4_;
                  *(ulonglong *)(pFVar31 + 0x20) = CONCAT44(uStack_264,local_268);
                  *(undefined4 *)(pFVar31 + 0x28) = local_260;
                  *(undefined8 *)(pFVar31 + 0x2c) = local_25c;
                  *(undefined8 *)(pFVar31 + 0x34) = uStack_254;
                  *(undefined8 *)(pFVar31 + 0x3c) = local_24c;
                  *(undefined8 *)(pFVar31 + 0x44) = uStack_244;
                  *(undefined4 *)(pFVar31 + 0x4c) = local_23c;
                  *(undefined4 *)(pFVar31 + 0x50) = uStack_238;
                  *(undefined4 *)(pFVar31 + 0x54) = uStack_234;
                  *(undefined4 *)(pFVar31 + 0x58) = uStack_230;
                  *(ulonglong *)(pFVar31 + 0x5c) = CONCAT44(uStack_228,local_22c);
                  *(ulonglong *)(pFVar31 + 100) = CONCAT44(uStack_220,uStack_224);
                  local_270 = 0;
                  local_278.Data = (FScriptContainerElement *)0x0;
                  local_280 = (IMFMediaType)0x0;
                  local_288 = (longlong *)0x0;
                  ::FString::PrintfImpl(&local_450,L"\t\tChannels: %i\n");
                  param_3 = local_540;
                  iVar33 = local_450.Data.ArrayNum + -1;
                  if (local_450.Data.ArrayNum == 0) {
                    iVar33 = iVar14;
                  }
                  ::FString::AppendChars
                            (local_540,(wchar_t *)local_450.Data.AllocatorInstance.Data,iVar33);
                  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_450.Data.AllocatorInstance.Data);
                  }
                  ::FString::PrintfImpl(&local_4b8,L"\t\tSample Rate: %i Hz\n");
                  iVar33 = local_4b8.Data.ArrayNum + -1;
                  if (local_4b8.Data.ArrayNum == 0) {
                    iVar33 = iVar14;
                  }
                  ::FString::AppendChars
                            (param_3,(wchar_t *)local_4b8.Data.AllocatorInstance.Data,iVar33);
                  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
                  }
                  ::FString::PrintfImpl(&local_440,L"\t\tBits Per Sample: %i\n");
                  iVar33 = local_440.Data.ArrayNum + -1;
                  if (local_440.Data.ArrayNum == 0) {
                    iVar33 = iVar14;
                  }
                  ::FString::AppendChars
                            (param_3,(wchar_t *)local_440.Data.AllocatorInstance.Data,iVar33);
                  this = local_508;
                  uVar15 = local_5b8;
                  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_440.Data.AllocatorInstance.Data);
                    this = local_508;
                    uVar15 = local_5b8;
                  }
                  goto LAB_14ea9d803;
                }
                iVar14 = memcmp(&local_2b0,&MFMediaType_SAMI,0x10);
                if (iVar14 == 0) {
                  pFVar23 = pFVar31 + 0x18;
                  local_1a8 = local_5e0;
                  if (local_5e0 != (longlong *)0x0) {
                    (**(code **)(*local_5e0 + 8))();
                  }
                  local_1a0 = IVar24;
                  (**(code **)(*(longlong *)IVar24 + 8))(IVar24);
                  iVar14 = local_570.Data.ArrayNum;
                  FVar6.Data = local_570.Data.AllocatorInstance.Data;
                  local_5a8 = (FScriptContainerElement *)&local_198;
                  local_198.Data = (FScriptContainerElement *)0x0;
                  local_190 = CONCAT44(local_190._4_4_,local_570.Data.ArrayNum);
                  if (local_570.Data.ArrayNum == 0) {
                    local_190 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_570.Data.ArrayNum,0,&local_198,local_570.Data.ArrayNum,
                               (int *)((longlong)&local_190 + 4));
                    memcpy(local_198.Data,FVar6.Data,(longlong)iVar14 * 2);
                  }
                  local_188 = 0;
                  local_180 = 0;
                  uStack_148 = 0;
                  uStack_144 = 0;
                  uStack_140 = 0;
                  uStack_13c = 0;
                  local_17c = 0;
                  uStack_174 = 0;
                  local_16c = 0;
                  uStack_164 = 0;
                  local_15c = 0;
                  uStack_158 = CONCAT31(uStack_158._1_3_,2);
                  uStack_154 = 0;
                  uStack_150 = CONCAT31(uStack_150._1_3_,2);
                  local_14c = 0;
                    /* WARNING: Load size is inaccurate */
                  if (((*pFVar23 <= (FScriptContainerElement *)&local_1a8) &&
                      ((FScriptContainerElement *)&local_1a8 <
                       *pFVar23 + (longlong)(int)*(uint *)(pFVar31 + 0x24) * 0x70)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  uVar15 = *(uint *)&pFVar31[0x20].field_0x0;
                  if (uVar15 == *(uint *)(pFVar31 + 0x24)) {
                    uVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x870,(ForAnyElementType *)pFVar23,(int *)(pFVar31 + 0x24));
                  }
                  *(uint *)&pFVar31[0x20].field_0x0 = uVar15 + 1;
                    /* WARNING: Load size is inaccurate */
                  pFVar31 = *pFVar23 + (longlong)(int)uVar15 * 0x70;
                  *(longlong **)pFVar31 = local_1a8;
                  *(IMFMediaType *)(pFVar31 + 8) = local_1a0;
                  local_5a8 = pFVar31 + 0x10;
                  *(undefined8 *)local_5a8 = 0;
                  *(FScriptContainerElement **)local_5a8 = local_198.Data;
                  *(undefined4 *)(pFVar31 + 0x18) = (undefined4)local_190;
                  *(undefined4 *)(pFVar31 + 0x1c) = local_190._4_4_;
                  *(undefined8 *)(pFVar31 + 0x20) = local_188;
                  *(undefined4 *)(pFVar31 + 0x28) = local_180;
                  *(undefined8 *)(pFVar31 + 0x2c) = local_17c;
                  *(undefined8 *)(pFVar31 + 0x34) = uStack_174;
                  *(undefined8 *)(pFVar31 + 0x3c) = local_16c;
                  *(undefined8 *)(pFVar31 + 0x44) = uStack_164;
                  *(undefined4 *)(pFVar31 + 0x4c) = local_15c;
                  *(undefined4 *)(pFVar31 + 0x50) = uStack_158;
                  *(undefined4 *)(pFVar31 + 0x54) = uStack_154;
                  *(undefined4 *)(pFVar31 + 0x58) = uStack_150;
                  *(ulonglong *)(pFVar31 + 0x5c) = CONCAT44(uStack_148,local_14c);
                  *(ulonglong *)(pFVar31 + 100) = CONCAT44(uStack_140,uStack_144);
                  local_190 = 0;
                  local_198.Data = (FScriptContainerElement *)0x0;
                  local_1a0 = (IMFMediaType)0x0;
                  local_1a8 = (longlong *)0x0;
                  param_3 = local_540;
                  goto LAB_14ea9d803;
                }
                iVar14 = memcmp(&local_2b0,&MFMediaType_Binary,0x10);
                if (iVar14 == 0) {
                  pFVar23 = pFVar31 + 0x18;
                  local_138 = local_5e0;
                  if (local_5e0 != (longlong *)0x0) {
                    (**(code **)(*local_5e0 + 8))();
                  }
                  local_130 = IVar24;
                  (**(code **)(*(longlong *)IVar24 + 8))(IVar24);
                  iVar14 = local_570.Data.ArrayNum;
                  FVar6.Data = local_570.Data.AllocatorInstance.Data;
                  local_5a8 = (FScriptContainerElement *)&local_128;
                  local_128.Data = (FScriptContainerElement *)0x0;
                  local_120 = CONCAT44(local_120._4_4_,local_570.Data.ArrayNum);
                  if (local_570.Data.ArrayNum == 0) {
                    local_120 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_570.Data.ArrayNum,0,&local_128,local_570.Data.ArrayNum,
                               (int *)((longlong)&local_120 + 4));
                    memcpy(local_128.Data,FVar6.Data,(longlong)iVar14 * 2);
                  }
                  local_118 = 0;
                  local_110 = 0;
                  uStack_d8 = 0;
                  uStack_d4 = 0;
                  uStack_d0 = 0;
                  uStack_cc = 0;
                  local_10c = 0;
                  uStack_104 = 0;
                  local_fc = 0;
                  uStack_f4 = 0;
                  local_ec = 0;
                  uStack_e8 = CONCAT31(uStack_e8._1_3_,2);
                  uStack_e4 = 0;
                  uStack_e0 = CONCAT31(uStack_e0._1_3_,2);
                  local_dc = 0;
                    /* WARNING: Load size is inaccurate */
                  if (((*pFVar23 <= (FScriptContainerElement *)&local_138) &&
                      ((FScriptContainerElement *)&local_138 <
                       *pFVar23 + (longlong)(int)*(uint *)(pFVar31 + 0x24) * 0x70)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  uVar15 = *(uint *)&pFVar31[0x20].field_0x0;
                  if (uVar15 == *(uint *)(pFVar31 + 0x24)) {
                    uVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x870,(ForAnyElementType *)pFVar23,(int *)(pFVar31 + 0x24));
                  }
                  *(uint *)&pFVar31[0x20].field_0x0 = uVar15 + 1;
                    /* WARNING: Load size is inaccurate */
                  pFVar31 = *pFVar23 + (longlong)(int)uVar15 * 0x70;
                  *(longlong **)pFVar31 = local_138;
                  *(IMFMediaType *)(pFVar31 + 8) = local_130;
                  local_5a8 = pFVar31 + 0x10;
                  *(undefined8 *)local_5a8 = 0;
                  *(FScriptContainerElement **)local_5a8 = local_128.Data;
                  *(undefined4 *)(pFVar31 + 0x18) = (undefined4)local_120;
                  *(undefined4 *)(pFVar31 + 0x1c) = local_120._4_4_;
                  *(undefined8 *)(pFVar31 + 0x20) = local_118;
                  *(undefined4 *)(pFVar31 + 0x28) = local_110;
                  *(undefined8 *)(pFVar31 + 0x2c) = local_10c;
                  *(undefined8 *)(pFVar31 + 0x34) = uStack_104;
                  *(undefined8 *)(pFVar31 + 0x3c) = local_fc;
                  *(undefined8 *)(pFVar31 + 0x44) = uStack_f4;
                  *(undefined4 *)(pFVar31 + 0x4c) = local_ec;
                  *(undefined4 *)(pFVar31 + 0x50) = uStack_e8;
                  *(undefined4 *)(pFVar31 + 0x54) = uStack_e4;
                  *(undefined4 *)(pFVar31 + 0x58) = uStack_e0;
                  *(ulonglong *)(pFVar31 + 0x5c) = CONCAT44(uStack_d8,local_dc);
                  *(ulonglong *)(pFVar31 + 100) = CONCAT44(uStack_d0,uStack_d4);
                  local_120 = 0;
                  local_128.Data = (FScriptContainerElement *)0x0;
                  local_130 = (IMFMediaType)0x0;
                  local_138 = (longlong *)0x0;
                  param_3 = local_540;
                  goto LAB_14ea9d803;
                }
                iVar14 = memcmp(&local_2b0,&MFMediaType_Video,0x10);
                if (iVar14 != 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                                      ,0x734,L"");
                  uVar15 = 0xffffffff;
                  if (bVar12) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  goto LAB_14ea9d803;
                }
                iVar14 = (**(code **)(*(longlong *)IVar24 + 0x50))(IVar24,&MF_MT_SUBTYPE,local_b8);
                if (-1 < iVar14) {
                  iVar14 = (**(code **)(*local_5e0 + 0x38))(local_5e0,&MF_MT_AVG_BITRATE,&local_52c)
                  ;
                  iVar33 = 0;
                  if (iVar14 < 0) {
                    local_5a8 = (FScriptContainerElement *)((ulonglong)local_5a8._4_4_ << 0x20);
                    local_52c = 0;
                  }
                  else {
                    local_5a8 = (FScriptContainerElement *)CONCAT44(local_5a8._4_4_,local_52c);
                  }
                  iVar14 = (**(code **)(*local_5e0 + 0x40))(local_5e0,&MF_MT_FRAME_RATE,&local_4a8);
                  if (iVar14 < 0) {
                    fVar36 = 0.0;
                    ::FString::PrintfImpl(&local_410,L"\t\tFrame Rate: n/a\n");
                    iVar14 = local_410.Data.ArrayNum + -1;
                    if (local_410.Data.ArrayNum == 0) {
                      iVar14 = iVar33;
                    }
                    ::FString::AppendChars
                              (param_3,(wchar_t *)local_410.Data.AllocatorInstance.Data,iVar14);
                    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_410.Data.AllocatorInstance.Data);
                    }
                  }
                  else {
                    fVar36 = (float)(local_4a8 >> 0x20) / (float)(local_4a8 & 0xffffffff);
                    ::FString::PrintfImpl(&local_420,L"\t\tFrame Rate: %g fps\n");
                    iVar14 = local_420.Data.ArrayNum + -1;
                    if (local_420.Data.ArrayNum == 0) {
                      iVar14 = iVar33;
                    }
                    ::FString::AppendChars
                              (param_3,(wchar_t *)local_420.Data.AllocatorInstance.Data,iVar14);
                    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_420.Data.AllocatorInstance.Data);
                    }
                  }
                  iVar14 = (**(code **)(*local_5e0 + 0x40))
                                     (local_5e0,&MF_MT_FRAME_RATE_RANGE_MIN,&local_4c8);
                  fVar34 = fVar4;
                  if (-1 < iVar14) {
                    fVar34 = (float)(local_4c8 >> 0x20) / (float)(local_4c8 & 0xffffffff);
                  }
                  iVar14 = (**(code **)(*local_5e0 + 0x40))
                                     (local_5e0,&MF_MT_FRAME_RATE_RANGE_MAX,&local_4c0);
                  fVar35 = fVar4;
                  if (-1 < iVar14) {
                    fVar35 = (float)(local_4c0 >> 0x20) / (float)(local_4c0 & 0xffffffff);
                  }
                  if ((fVar34 < 0.0) || (fVar35 < 0.0)) {
                    local_4d8 = CONCAT31(local_4d8._1_3_,1);
                    uStack_4d0 = CONCAT31(uStack_4d0._1_3_,1);
                    local_588.LowerBound.Value = fVar36;
                    local_588.LowerBound._0_4_ = local_4d8;
                    local_588.UpperBound.Value = fVar36;
                    local_588.UpperBound._0_4_ = uStack_4d0;
                    fStack_4d4 = fVar36;
                    fStack_4cc = fVar36;
                  }
                  else {
                    local_4f0 = CONCAT31(local_4f0._1_3_,1);
                    local_4f8 = CONCAT31(local_4f8._1_3_,1);
                    local_588.LowerBound.Value = fVar34;
                    local_588.LowerBound._0_4_ = local_4f8;
                    local_588.UpperBound.Value = fVar35;
                    local_588.UpperBound._0_4_ = local_4f0;
                    fStack_4f4 = fVar34;
                    fStack_4ec = fVar35;
                  }
                  TRangeBound<float>::GetValue(&local_588.UpperBound);
                  TRangeBound<float>::GetValue(&local_588.LowerBound);
                  ::FString::PrintfImpl(&local_400,L"\t\tFrame Rate Range: %g - %g fps\n");
                  iVar14 = local_400.Data.ArrayNum + -1;
                  if (local_400.Data.ArrayNum == 0) {
                    iVar14 = iVar33;
                  }
                  ::FString::AppendChars
                            (param_3,(wchar_t *)local_400.Data.AllocatorInstance.Data,iVar14);
                  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_400.Data.AllocatorInstance.Data);
                  }
                  if ((local_588.LowerBound.Type.Value.Value == '\x01') &&
                     (local_588.UpperBound.Type.Value == '\x01')) {
                    if ((local_588.LowerBound.Value == local_588.UpperBound.Value) &&
                       (fVar34 = TRangeBound<float>::GetValue(&local_588.LowerBound),
                       fVar34 == fVar3)) {
                      ::FString::PrintfImpl
                                (&local_3f0,L"\t\tpossibly a still image stream (may not work)\n");
                      iVar14 = local_3f0.Data.ArrayNum + -1;
                      if (local_3f0.Data.ArrayNum == 0) {
                        iVar14 = iVar33;
                      }
                      ::FString::AppendChars
                                (param_3,(wchar_t *)local_3f0.Data.AllocatorInstance.Data,iVar14);
                      if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
                      }
                    }
                  }
                  cVar5 = local_5d4;
                  if (((local_5d4 != '\0') && (local_588.LowerBound.Type.Value.Value == '\x01')) &&
                     (local_588.UpperBound.Type.Value == '\x01')) {
                    if ((local_588.LowerBound.Value == local_588.UpperBound.Value) &&
                       (fVar34 = TRangeBound<float>::GetValue(&local_588.LowerBound),
                       fVar34 == fVar3)) {
                      if (5 < (byte)LogWmfMedia._0_1_) {
                        UE::Logging::Private::BasicLog<6>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
                      }
                      ::FString::PrintfImpl
                                (&local_3e0,L"\t\tlikely an unsupported still image stream\n");
                      iVar14 = local_3e0.Data.ArrayNum + -1;
                      if (local_3e0.Data.ArrayNum == 0) {
                        iVar14 = 0;
                      }
                      ::FString::AppendChars
                                (param_3,(wchar_t *)local_3e0.Data.AllocatorInstance.Data,iVar14);
                      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
                      }
                      (**(code **)(*(longlong *)IVar24 + 0x10))(IVar24);
                      if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_570.Data.AllocatorInstance.Data);
                      }
                      goto LAB_14ea9d834;
                    }
                  }
                  iVar14 = (**(code **)(*local_5e0 + 0x40))(local_5e0,&MF_MT_FRAME_SIZE,local_4e8);
                  uVar29 = local_4e8[0];
                  TVar25 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
                  if (iVar14 < 0) {
                    local_560 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
                    ::FString::PrintfImpl(&local_3c0,L"\t\tDimensions: n/a\n");
                    iVar14 = local_3c0.Data.ArrayNum + -1;
                    if (local_3c0.Data.ArrayNum == 0) {
                      iVar14 = 0;
                    }
                    ::FString::AppendChars
                              (param_3,(wchar_t *)local_3c0.Data.AllocatorInstance.Data,iVar14);
                    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                    }
                    uVar29 = (ulonglong)local_560 >> 0x20;
                    uVar30 = local_560._0_4_;
                  }
                  else {
                    uVar30 = (undefined4)(local_4e8[0] >> 0x20);
                    local_560._s_0.Y = (int)local_4e8[0];
                    local_560._s_0.X = uVar30;
                    ::FString::PrintfImpl(&local_3d0,L"\t\tDimensions: %i x %i\n");
                    iVar14 = local_3d0.Data.ArrayNum + -1;
                    if (local_3d0.Data.ArrayNum == 0) {
                      iVar14 = 0;
                    }
                    ::FString::AppendChars
                              (param_3,(wchar_t *)local_3d0.Data.AllocatorInstance.Data,iVar14);
                    TVar25 = local_560;
                    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
                      TVar25 = local_560;
                    }
                  }
                  iVar14 = memcmp(local_b8,&MFVideoFormat_NV12,0x10);
                  TVar7 = local_558;
                  iVar28 = (int)uVar29;
                  iVar33 = TVar25._s_0.X;
                  local_558._4_4_ = TVar25._s_0.Y;
                  uVar8 = local_558._4_4_;
                  if (iVar14 == 0) {
                    local_558._4_4_ = TVar7._s_0.Y;
                    if (cVar5 == '\0') {
                      uVar15 = uVar30 + 0xf & 0xfffffff0;
                      local_558 = (TIntPoint<int>_u_0)
                                  (CONCAT44(local_558._4_4_,uVar30 + 0xf) & 0xfffffffffffffff0);
                      iVar14 = memcmp(&local_2a0,&MFVideoFormat_H264,0x10);
                      if ((iVar14 == 0) ||
                         (iVar14 = memcmp(&local_2a0,&MFVideoFormat_H264_ES,0x10), iVar14 == 0)) {
                        iVar14 = (iVar28 + 0xfU & 0xfffffff0) * 3;
                      }
                      else {
                        iVar14 = iVar28 * 3;
                      }
                    }
                    else {
                      local_558._s_0.X = uVar30;
                      iVar14 = iVar28 * 3;
                      uVar15 = uVar30;
                    }
                    local_5b8 = 6;
                    local_5b4 = iVar14 / 2;
                    local_550 = uVar15;
                  }
                  else {
                    local_558 = TVar7;
                    iVar14 = memcmp(local_b8,&MFVideoFormat_RGB32,0x10);
                    if (iVar14 == 0) {
                      local_550 = uVar30 * 4;
                      local_5b8 = 5;
                      local_5b4 = uVar8;
                      local_558 = TVar25;
                    }
                    else {
                      iVar14 = memcmp(&local_2a0,&MFVideoFormat_H264,0x10);
                      if ((iVar14 == 0) ||
                         (iVar14 = memcmp(&local_2a0,&MFVideoFormat_H264_ES,0x10), uVar15 = uVar30,
                         iVar14 == 0)) {
                        uVar15 = uVar30 + 0xf & 0xfffffff0;
                      }
                      local_558._s_0.X = (int)uVar15 / 2;
                      local_550 = uVar15 * -2;
                      if ((int)(uVar15 * -2) < 0) {
                        local_550 = uVar15 * 2;
                      }
                      local_5b8 = 9;
                      local_5b4 = iVar28;
                    }
                  }
                  local_c8 = GUID_NULL;
                  if ((local_5e0 == (longlong *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("RawPointer != 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                          ,0x9f,L""), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  iVar14 = (**(code **)(*local_5e0 + 0x50))
                                     (local_5e0,&MF_MT_AM_FORMAT_TYPE,&local_c8);
                  if (-1 < iVar14) {
                    iVar14 = memcmp(&local_c8,&FORMAT_VideoInfo,0x10);
                    if (iVar14 == 0) {
                      uVar15 = *(uint *)&pFVar31[0x20].field_0x0 - 1;
                      if (-1 < (int)uVar15) {
                        lVar32 = (longlong)(int)uVar15 * 0x70;
                        auVar27 = FORMAT_VideoInfo2.Data4;
                        lVar26 = FORMAT_VideoInfo2._0_8_;
                        do {
                          pFVar31 = local_598;
                          uVar22 = 0;
                          if ((int)uVar15 < (int)*(uint *)&local_598[0x20].field_0x0) {
                            uVar22 = ~uVar15 >> 0x1f;
                          }
                          if ((uVar22 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), auVar27 = FORMAT_VideoInfo2.Data4,
                             lVar26 = FORMAT_VideoInfo2._0_8_, bVar12)) {
                            pcVar2 = (code *)swi(3);
                            uVar13 = (*pcVar2)();
                            return (bool)uVar13;
                          }
                          pFVar21 = *(FWmfMediaTextureSamplePool **)(pFVar31 + 0x18);
                          if ((*(longlong *)(&pFVar21[3].field_0xc + lVar32) == lVar26) &&
                             (*(uchar (*) [8])(&pFVar21[4].field_0x4 + lVar32) == auVar27)) {
                            bVar12 = TRange<float>::IsEmpty
                                               ((TRange<float> *)(&pFVar21[5].field_0x0 + lVar32));
                            if ((bVar12) && (bVar12 = TRange<float>::IsEmpty(&local_588), bVar12)) {
LAB_14ea9d34b:
                              auVar27 = FORMAT_VideoInfo2.Data4;
                              lVar26 = FORMAT_VideoInfo2._0_8_;
                              if ((*(uint *)(&pFVar21[6].field_0x0 + lVar32) == uVar30) &&
                                 (*(int *)(&pFVar21[6].field_0x4 + lVar32) == iVar28)) {
                                iVar14 = *(int *)(&pFVar21[1].field_0x8 + lVar32);
                                if (iVar14 == local_570.Data.ArrayNum) {
                                  if (iVar14 < 2) goto LAB_14ea9d57d;
                                  iVar14 = FGenericPlatformStricmp::Stricmp
                                                     (*(wchar_t **)(&pFVar21[1].field_0x0 + lVar32),
                                                      (wchar_t *)
                                                      local_570.Data.AllocatorInstance.Data);
                                  bVar12 = iVar14 == 0;
                                }
                                else {
                                  bVar12 = iVar14 + local_570.Data.ArrayNum == 1;
                                }
                                auVar27 = FORMAT_VideoInfo2.Data4;
                                lVar26 = FORMAT_VideoInfo2._0_8_;
                                if (bVar12) goto LAB_14ea9d57d;
                              }
                            }
                            else {
                              auVar27 = FORMAT_VideoInfo2.Data4;
                              lVar26 = FORMAT_VideoInfo2._0_8_;
                              if (((&pFVar21[5].field_0x0)[lVar32] ==
                                   local_588.LowerBound.Type.Value) &&
                                 (((&pFVar21[5].field_0x0)[lVar32] == '\x02' ||
                                  (local_588.LowerBound.Value ==
                                   *(float *)(&pFVar21[5].field_0x4 + lVar32))))) {
                                if (((&pFVar21[5].field_0x8)[lVar32] ==
                                     local_588.UpperBound.Type.Value) &&
                                   (((&pFVar21[5].field_0x8)[lVar32] == '\x02' ||
                                    (local_588.UpperBound.Value ==
                                     *(float *)(&pFVar21[5].field_0xc + lVar32)))))
                                goto LAB_14ea9d34b;
                              }
                            }
                          }
                          lVar32 = lVar32 + -0x70;
                          uVar15 = uVar15 - 1;
                          IVar24 = local_5a0;
                        } while (-1 < (int)uVar15);
                      }
                    }
                    else {
                      iVar14 = memcmp(&local_c8,&FORMAT_VideoInfo2,0x10);
                      if ((iVar14 == 0) &&
                         (uVar15 = *(uint *)&pFVar31[0x20].field_0x0 - 1, -1 < (int)uVar15)) {
                        lVar32 = (longlong)(int)uVar15 * 0x70;
                        auVar27 = FORMAT_VideoInfo.Data4;
                        lVar26 = FORMAT_VideoInfo._0_8_;
                        do {
                          uVar22 = 0;
                          if ((int)uVar15 < (int)*(uint *)&pFVar31[0x20].field_0x0) {
                            uVar22 = ~uVar15 >> 0x1f;
                          }
                          if ((uVar22 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), auVar27 = FORMAT_VideoInfo.Data4,
                             lVar26 = FORMAT_VideoInfo._0_8_, bVar12)) {
                            pcVar2 = (code *)swi(3);
                            uVar13 = (*pcVar2)();
                            return (bool)uVar13;
                          }
                          pFVar21 = *(FWmfMediaTextureSamplePool **)(pFVar31 + 0x18);
                          if ((((*(longlong *)(&pFVar21[3].field_0xc + lVar32) == lVar26) &&
                               (*(uchar (*) [8])(&pFVar21[4].field_0x4 + lVar32) == auVar27)) &&
                              (bVar12 = TRange<float>::operator==
                                                  ((TRange<float> *)(&pFVar21[5].field_0x0 + lVar32)
                                                   ,&local_588), auVar27 = FORMAT_VideoInfo.Data4,
                              lVar26 = FORMAT_VideoInfo._0_8_, bVar12)) &&
                             ((*(uint *)(&pFVar21[6].field_0x0 + lVar32) == uVar30 &&
                              (*(int *)(&pFVar21[6].field_0x4 + lVar32) == iVar28)))) {
                            iVar14 = *(int *)(&pFVar21[1].field_0x8 + lVar32);
                            if (iVar14 == local_570.Data.ArrayNum) {
                              if (1 < iVar14) {
                                iVar14 = FGenericPlatformStricmp::Stricmp
                                                   (*(wchar_t **)(&pFVar21[1].field_0x0 + lVar32),
                                                    (wchar_t *)local_570.Data.AllocatorInstance.Data
                                                   );
                                bVar12 = iVar14 == 0;
                                goto LAB_14ea9d527;
                              }
                            }
                            else {
                              bVar12 = iVar14 + local_570.Data.ArrayNum == 1;
LAB_14ea9d527:
                              auVar27 = FORMAT_VideoInfo.Data4;
                              lVar26 = FORMAT_VideoInfo._0_8_;
                              if (!bVar12) goto LAB_14ea9d53c;
                            }
                            if (*(longlong **)(&pFVar21->field_0x0 + lVar32) != local_5e0) {
                              if (local_5e0 != (longlong *)0x0) {
                                (**(code **)(*local_5e0 + 8))();
                              }
                              if (*(longlong **)(&pFVar21->field_0x0 + lVar32) != (longlong *)0x0) {
                                (**(code **)(**(longlong **)(&pFVar21->field_0x0 + lVar32) + 0x10))
                                          ();
                              }
                              *(longlong **)(&pFVar21->field_0x0 + lVar32) = local_5e0;
                            }
                            goto LAB_14ea9d57d;
                          }
LAB_14ea9d53c:
                          lVar32 = lVar32 + -0x70;
                          uVar15 = uVar15 - 1;
                          IVar24 = local_5a0;
                        } while (-1 < (int)uVar15);
                      }
                    }
                  }
                  goto LAB_14ea9d3b3;
                }
                if (5 < (byte)LogWmfMedia._0_1_) {
                  WmfMedia::ResultToString(&local_310,iVar14);
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
                  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_310.Data.AllocatorInstance.Data);
                  }
                }
                ::FString::PrintfImpl(&local_430,L"\t\tfailed to get sub-type");
                iVar14 = local_430.Data.ArrayNum + -1;
                if (local_430.Data.ArrayNum == 0) {
                  iVar14 = 0;
                }
                ::FString::AppendChars
                          (param_3,(wchar_t *)local_430.Data.AllocatorInstance.Data,iVar14);
                if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_430.Data.AllocatorInstance.Data);
                }
                (**(code **)(*(longlong *)IVar24 + 0x10))(IVar24);
                if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_570.Data.AllocatorInstance.Data);
                }
                goto LAB_14ea9d834;
              }
              ::FString::AppendChars(param_3,L"\t\tfailed to get media type\n",0x1b);
LAB_14ea9c08a:
              if (local_5e0 != (longlong *)0x0) {
                (**(code **)(*local_5e0 + 0x10))();
              }
              goto LAB_14ea9d84a;
            }
LAB_14ea9d864:
            uVar22 = 0;
            if (*(uint *)(pFVar31 + 0x54) == 0xffffffff) {
              if (0 < (int)*(uint *)&pFVar31[0x20].field_0x0) {
                lVar26 = 0;
                do {
                  uVar16 = 0;
                  if ((int)uVar22 < (int)*(uint *)&pFVar31[0x20].field_0x0) {
                    uVar16 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  pFVar21 = *(FWmfMediaTextureSamplePool **)(pFVar31 + 0x18);
                  if ((local_5d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("RawPointer != 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                          ,0x9f,L""), bVar12)) {
                    pcVar2 = (code *)swi(3);
                    uVar13 = (*pcVar2)();
                    return (bool)uVar13;
                  }
                  iVar14 = (**(code **)((local_5d0.ReferenceController)->_padding_ + 0x30))
                                     (local_5d0.ReferenceController,
                                      *(undefined8 *)(&pFVar21->field_0x0 + lVar26));
                  if (-1 < iVar14) {
                    if (5 < (byte)LogWmfMedia._0_1_) {
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
                    }
                    *(uint *)(pFVar31 + 0x54) = uVar22;
                    break;
                  }
                  uVar22 = uVar22 + 1;
                  lVar26 = lVar26 + 0x70;
                } while ((int)uVar22 < (int)*(uint *)&pFVar31[0x20].field_0x0);
              }
              if (*(uint *)(pFVar31 + 0x54) == 0xffffffff) {
                if (5 < (byte)LogWmfMedia._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
                }
                ::FString::AppendChars(local_540,L"\tunsupported media type\n",0x18);
              }
            }
            pFVar23 = local_578;
            uVar22 = local_5d8;
            if ((*(uint *)local_578 == 0xffffffff) && (*(uint *)(pFVar31 + 0x54) != 0xffffffff)) {
              if (((this->PresentationDescriptor).RawPointer == (IMFPresentationDescriptor *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RawPointer != 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                      ,0x9f,L""), bVar12)) {
                pcVar2 = (code *)swi(3);
                uVar13 = (*pcVar2)();
                return (bool)uVar13;
              }
              uVar22 = local_5d8;
              pIVar1 = (this->PresentationDescriptor).RawPointer;
              iVar14 = (**(code **)((longlong)*pIVar1 + 0x118))(pIVar1,local_5d8);
              if (-1 < iVar14) {
                *(uint *)pFVar23 = uVar15;
              }
            }
            local_538 = (wchar_t *)0x0;
            local_528 = 0;
            if ((local_5c0 == (longlong *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RawPointer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                    ,0x9f,L""), bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar13 = (*pcVar2)();
              return (bool)uVar13;
            }
            iVar14 = (**(code **)(*local_5c0 + 0x68))
                               (local_5c0,&MF_SD_LANGUAGE,&local_538,&local_528);
            if (-1 < iVar14) {
              ::FString::operator=((FString *)(pFVar31 + 0x30),local_538);
              CoTaskMemFree(local_538);
            }
            if ((local_5c0 == (longlong *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RawPointer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                    ,0x9f,L""), bVar12)) {
              pcVar2 = (code *)swi(3);
              uVar13 = (*pcVar2)();
              return (bool)uVar13;
            }
            iVar14 = (**(code **)(*local_5c0 + 0x68))
                               (local_5c0,&MF_SD_STREAM_NAME,&local_538,&local_528);
            if (-1 < iVar14) {
              ::FString::operator=((FString *)(pFVar31 + 0x40),local_538);
              CoTaskMemFree(local_538);
            }
            bVar12 = 1 < (int)*(uint *)(pFVar31 + 0x48);
            if (bVar12) {
              pFVar18 = FText::FromString(&local_2e0,(FString *)(pFVar31 + 0x40));
            }
            else {
              local_510 = &local_300;
              local_3b0.Object = (FCulture *)0x0;
              local_3b0.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar18 = FText::AsNumber(&local_300,uVar22,(FNumberFormattingOptions *)0x0,&local_3b0
                                       );
              pFVar19 = FText::AsLocalizable_Advanced_LocText
                                  (&local_2c0,L"FWmfMediaTracks",L"UnnamedStreamFormat",
                                   L"Unnamed Track (Stream {0})");
              pFVar20 = FTextFormat::FTextFormat(&local_2f0,pFVar19,Default);
              pFVar18 = FText::Format<FText>(&local_2d0,pFVar20,pFVar18);
            }
            FText::operator=((FText *)(local_598 + 8),pFVar18);
            if ((bVar12) && (local_2e0.TextData.Reference != (ITextData *)0x0)) {
              (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
            }
            if ((!bVar12) && (local_2d0.TextData.Reference != (ITextData *)0x0)) {
              (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
            }
            if ((!bVar12) && (local_2c0.TextData.Reference != (ITextData *)0x0)) {
              (**(code **)((longlong)*local_2c0.TextData.Reference + 0x10))();
            }
            if (!bVar12) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_3b0.SharedReferenceCount.ReferenceController);
            }
            pFVar31 = local_598;
            if (*(longlong **)local_598 != local_5c0) {
              if (local_5c0 != (longlong *)0x0) {
                (**(code **)(*local_5c0 + 8))(local_5c0);
              }
              if (*(longlong **)pFVar31 != (longlong *)0x0) {
                (**(code **)(**(longlong **)pFVar31 + 0x10))();
              }
              *(longlong **)pFVar31 = local_5c0;
            }
            if (*(TReferenceControllerBase<1> **)&pFVar31[0x28].field_0x0 !=
                local_5d0.ReferenceController) {
              if (local_5d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                (**(code **)((local_5d0.ReferenceController)->_padding_ + 8))
                          (local_5d0.ReferenceController);
              }
              if (*(TReferenceControllerBase<1> **)&pFVar31[0x28].field_0x0 !=
                  (TReferenceControllerBase<1> *)0x0) {
                (**(code **)((*(TReferenceControllerBase<1> **)&pFVar31[0x28].field_0x0)->_padding_
                            + 0x10))();
              }
              *(TReferenceControllerBase<1> **)&pFVar31[0x28].field_0x0 =
                   local_5d0.ReferenceController;
            }
            pFVar31[0x50] = local_5c8;
            *(uint *)(pFVar31 + 0x58) = local_5d8;
            bVar12 = true;
            if (local_500 != (longlong *)0x0) {
              (**(code **)(*local_500 + 0x10))();
            }
          }
        }
        else {
          if (5 < (byte)LogWmfMedia._0_1_) {
            WmfMedia::MajorTypeToString(&local_330,&local_2b0);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_330.Data.AllocatorInstance.Data);
            }
          }
          ::FString::AppendChars(param_3,L"\tUnsupported stream type\n",0x19);
          bVar12 = false;
        }
      }
    }
    if (local_5d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (**(code **)((local_5d0.ReferenceController)->_padding_ + 0x10))();
    }
  }
  if (local_5c0 != (longlong *)0x0) {
    (**(code **)(*local_5c0 + 0x10))();
  }
  return bVar12;
LAB_14ea9d57d:
  IVar24 = local_5a0;
  param_3 = local_540;
  this = local_508;
  if (uVar15 == 0xffffffff) {
LAB_14ea9d3b3:
    pFVar31 = local_598;
    local_218 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      (**(code **)(*local_5e0 + 8))();
    }
    local_210 = IVar24;
    if (IVar24 != (IMFMediaType)0x0) {
      (**(code **)(*(longlong *)IVar24 + 8))(IVar24);
    }
    FVar6.Data = local_570.Data.AllocatorInstance.Data;
    local_510 = (FText *)&local_208;
    local_208.Data = (FScriptContainerElement *)0x0;
    lVar26 = (longlong)local_570.Data.ArrayNum;
    local_200 = CONCAT44(local_200._4_4_,local_570.Data.ArrayNum);
    if (local_570.Data.ArrayNum == 0) {
      local_200 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_570.Data.ArrayNum,0,&local_208,local_570.Data.ArrayNum,
                 (int *)((longlong)&local_200 + 4));
      memcpy(local_208.Data,FVar6.Data,lVar26 * 2);
    }
    _Var11 = local_c8;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = (undefined4)local_5a8;
    iStack_1e8 = local_558._0_4_;
    iStack_1e4 = local_5b4;
    uStack_1e0 = local_550;
    local_1dc.Data1 = local_c8.Data1;
    local_1dc.Data2 = local_c8.Data2;
    local_1dc.Data3 = local_c8.Data3;
    local_1dc.Data4[0] = local_c8.Data4[0];
    local_1dc.Data4[1] = local_c8.Data4[1];
    local_1dc.Data4[2] = local_c8.Data4[2];
    local_1dc.Data4[3] = local_c8.Data4[3];
    local_1dc.Data4[4] = local_c8.Data4[4];
    local_1dc.Data4[5] = local_c8.Data4[5];
    local_1dc.Data4[6] = local_c8.Data4[6];
    local_1dc.Data4[7] = local_c8.Data4[7];
    TStack_1c8 = local_588.LowerBound;
    uStack_1c0 = local_588.UpperBound._0_4_;
    fStack_1bc = local_588.UpperBound.Value;
    uStack_1b0 = local_5b8;
    local_1ac = 0;
    local_1cc = fVar36;
    iStack_1b8 = iVar33;
    iStack_1b4 = uVar8;
    local_c8 = _Var11;
    if (((*(FWmfMediaTextureSamplePool **)(pFVar31 + 0x18) <=
          (FWmfMediaTextureSamplePool *)&local_218) &&
        ((FWmfMediaTextureSamplePool *)&local_218 <
         *(FWmfMediaTextureSamplePool **)(pFVar31 + 0x18) +
         (longlong)(int)*(uint *)(pFVar31 + 0x24) * 7)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return (bool)uVar13;
    }
    uVar15 = *(uint *)&pFVar31[0x20].field_0x0;
    if (uVar15 == *(uint *)(pFVar31 + 0x24)) {
      uVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,(ForAnyElementType *)(pFVar31 + 0x18),(int *)(pFVar31 + 0x24));
    }
    TVar10 = TStack_1c8;
    *(uint *)&pFVar31[0x20].field_0x0 = uVar15 + 1;
    pFVar21 = *(FWmfMediaTextureSamplePool **)(pFVar31 + 0x18) + (longlong)(int)uVar15 * 7;
    *(longlong **)pFVar21 = local_218;
    *(IMFMediaType *)&pFVar21->field_0x8 = local_210;
    local_510 = (FText *)(pFVar21 + 1);
    (local_510->TextData).Reference = (ITextData *)0x0;
    (local_510->TextData).Reference = (ITextData *)local_208.Data;
    *(undefined4 *)&pFVar21[1].field_0x8 = (undefined4)local_200;
    *(undefined4 *)&pFVar21[1].field_0xc = local_200._4_4_;
    *(undefined8 *)(pFVar21 + 2) = local_1f8;
    *(undefined4 *)&pFVar21[2].field_0x8 = local_1f0;
    *(ulonglong *)&pFVar21[2].field_0xc = CONCAT44(iStack_1e8,local_1ec);
    *(ulonglong *)&pFVar21[3].field_0x4 = CONCAT44(uStack_1e0,iStack_1e4);
    *(undefined8 *)&pFVar21[3].field_0xc = local_1dc._0_8_;
    pFVar21[4].field_0x4 = local_1dc.Data4[0];
    pFVar21[4].field_0x5 = local_1dc.Data4[1];
    pFVar21[4].field_0x6 = local_1dc.Data4[2];
    pFVar21[4].field_0x7 = local_1dc.Data4[3];
    pFVar21[4].field_0x8 = local_1dc.Data4[4];
    pFVar21[4].field_0x9 = local_1dc.Data4[5];
    pFVar21[4].field_0xa = local_1dc.Data4[6];
    pFVar21[4].field_0xb = local_1dc.Data4[7];
    *(float *)&pFVar21[4].field_0xc = local_1cc;
    pFVar21[5].field_0x0 = TStack_1c8.Type.Value;
    *(undefined3 *)&pFVar21[5].field_0x1 = TStack_1c8._1_3_;
    *(float *)&pFVar21[5].field_0x4 = TStack_1c8.Value;
    *(undefined4 *)&pFVar21[5].field_0x8 = uStack_1c0;
    *(ulonglong *)&pFVar21[5].field_0xc = CONCAT44(iStack_1b8,fStack_1bc);
    *(ulonglong *)&pFVar21[6].field_0x4 = CONCAT44(uStack_1b0,iStack_1b4);
    local_200 = 0;
    local_208.Data = (FScriptContainerElement *)0x0;
    local_210 = (IMFMediaType)0x0;
    local_218 = (longlong *)0x0;
    param_3 = local_540;
    this = local_508;
    TStack_1c8 = TVar10;
  }
LAB_14ea9d803:
  pFVar31 = local_598;
  if (local_5e0 == local_500) {
    *(uint *)(local_598 + 0x54) = uVar15;
  }
  if (IVar24 != (IMFMediaType)0x0) {
    (**(code **)(*(longlong *)IVar24 + 0x10))(IVar24);
  }
  if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data.AllocatorInstance.Data);
  }
LAB_14ea9d834:
  if (local_5e0 != (longlong *)0x0) {
    (**(code **)(*local_5e0 + 0x10))();
  }
LAB_14ea9d84a:
  local_548 = local_548 + 1;
  uVar15 = local_5b0;
  if (local_54c <= local_548) goto LAB_14ea9d864;
  goto LAB_14ea9bef2;
}

// AddTrackToTopology @ 14ea9dd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::AddTrackToTopology(FWmfMediaTracks *this,FTrack *param_1,IMFTopology *param_2)

{
  TSharedPtr<FWmfMediaHardwareVideoDecodingTextureSamplePool,1> *pTVar1;
  uint uVar2;
  IMFMediaTypeHandler *pIVar3;
  IHeadMountedDisplayModule *pIVar4;
  FWmfMediaTextureSamplePool *pFVar5;
  FWmfMediaHardwareVideoDecodingTextureSamplePool *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  WmfMediaCodecManager *pWVar8;
  WmfMediaDecoder *pWVar9;
  code *pcVar10;
  void *pvVar11;
  long alVar12 [2];
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType *pFVar18;
  long alVar19 [2];
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 uVar23;
  char cVar24;
  int iVar25;
  UINT UVar26;
  UWmfMediaSettings *pUVar27;
  FString *pFVar28;
  IModularFeatures *pIVar29;
  FDestructionSentinel *pFVar30;
  ulong64 uVar31;
  TSharedRef<FWmfMediaHardwareVideoDecodingTextureSamplePool,1> *pTVar32;
  FWmfMediaStreamSink *pFVar33;
  FDestructionSentinel *pFVar34;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar35;
  IMFMediaType *pIVar36;
  IWmfMediaModule *pIVar37;
  uint uVar38;
  ForAnyElementType FVar39;
  void *apvVar40 [1];
  FStaticBasicLogRecord *pFVar41;
  FWmfMediaTracks *pFVar42;
  undefined1 *puVar43;
  ulonglong uVar44;
  WmfMediaDecoder *pWVar45;
  wchar_t *pwVar46;
  wchar_t *pwVar47;
  LPCRITICAL_SECTION this_00;
  longlong *plVar48;
  undefined1 auStack_2c8 [32];
  FScriptContainerElement *local_2a8;
  longlong local_2a0;
  longlong *local_298;
  WmfMediaDecoder *local_290;
  FIdentityFunctor local_288 [8];
  WmfMediaDecoder *local_280;
  uint local_278;
  longlong *local_270;
  longlong *local_268;
  WmfMediaDecoder *local_260;
  FMRSWRecursiveAccessDetector *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_248;
  FDelegateAllocation local_240;
  LPCRITICAL_SECTION local_230;
  LPCRITICAL_SECTION local_228;
  wchar_t *local_220;
  int local_218;
  FWmfMediaHardwareVideoDecodingTextureSamplePool *local_210;
  FSharedReferencer<1> local_208;
  TArray<IHeadMountedDisplayModule_*,TSizedDefaultAllocator<32>_> local_200;
  FDestructionSentinel *local_1f0;
  FDestructionSentinel *local_1e8;
  FString local_1e0;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  FDestructionSentinel local_1b0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  FString local_178;
  FString local_168;
  FString local_158;
  code *local_148;
  void *apvStack_140 [1];
  code *local_138;
  void *pvStack_130;
  code *local_128;
  void *pvStack_120;
  code *local_118;
  longlong lStack_110;
  FString local_108;
  TSharedRef<FWmfMediaHardwareVideoDecodingTextureSamplePool,1> local_f8;
  FWmfMediaHardwareVideoDecodingTextureSamplePool *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  undefined1 local_d8 [48];
  undefined **local_a8;
  FWmfMediaTracks *pFStack_a0;
  void *local_98;
  ForAnyElementType FStack_90;
  long local_88 [2];
  int iStack_80;
  uint uStack_7c;
  ForAnyElementType local_78;
  ForAnyElementType FStack_70;
  ForAnyElementType local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  ForAnyElementType local_48;
  
  local_48.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_2c8);
  plVar48 = (longlong *)0x0;
  local_278 = 0;
  uVar2 = param_1->SelectedFormat;
  if ((int)uVar2 < 0) {
    return false;
  }
  if ((param_1->Formats).ArrayNum <= (int)uVar2) {
    return false;
  }
  iVar25 = (param_1->Formats).ArrayNum;
  uVar38 = 0;
  if ((int)uVar2 < iVar25) {
    uVar38 = ~uVar2 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (local_2a8 = (FScriptContainerElement *)(longlong)(int)uVar2, local_2a0 = (longlong)iVar25,
     bVar22 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar10 = (code *)swi(3);
    uVar23 = (*pcVar10)();
    return (bool)uVar23;
  }
  this_00 = (LPCRITICAL_SECTION)
            ((param_1->Formats).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x70);
  pwVar46 = L"";
  local_230 = this_00;
  if ((*(longlong *)&((FScriptContainerElement *)this_00)->field_0x0 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Format.InputType.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                          ,0x465,L""), bVar22)) {
    pcVar10 = (code *)swi(3);
    uVar23 = (*pcVar10)();
    return (bool)uVar23;
  }
  if (*(longlong *)&((FScriptContainerElement *)((longlong)this_00 + 8))->field_0x0 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Format.OutputType.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                        ,0x466,L"");
    if (bVar22) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
    if ((*(longlong *)&((FScriptContainerElement *)((longlong)this_00 + 8))->field_0x0 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar22)) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
  }
  iVar25 = (**(code **)(**(longlong **)
                          &((FScriptContainerElement *)((longlong)this_00 + 8))->field_0x0 + 0x50))
                     (*(longlong **)&((FScriptContainerElement *)((longlong)this_00 + 8))->field_0x0
                      ,&MF_MT_MAJOR_TYPE,local_d8 + 8);
  if ((iVar25 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((HRESULT)(Result)) >= 0)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                          ,0x471,L""), bVar22)) {
    pcVar10 = (code *)swi(3);
    uVar23 = (*pcVar10)();
    return (bool)uVar23;
  }
  iVar25 = memcmp(local_d8 + 8,&MFMediaType_Audio,0x10);
  if (iVar25 == 0) {
    UVar26 = waveOutGetNumDevs();
    if (UVar26 == 0) {
      return false;
    }
    if (GEngine != (UEngine *)0x0) {
      cVar24 = (**(code **)(GEngine->_padding_ + 0x418))();
      if (cVar24 == '\0') {
        return false;
      }
      if (GEngine != (UEngine *)0x0) goto LAB_14ea9def9;
    }
    pUVar27 = GetDefault<UWmfMediaSettings>();
    if (pUVar27->NativeAudioOut == false) {
      return false;
    }
  }
LAB_14ea9def9:
  if ((param_1->Handler).RawPointer == (IMFMediaTypeHandler *)0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Track.Handler.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                        ,0x48f,L"");
    if (bVar22) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
    if (((param_1->Handler).RawPointer == (IMFMediaTypeHandler *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar22)) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
  }
  pIVar3 = (param_1->Handler).RawPointer;
  iVar25 = (**(code **)((longlong)*pIVar3 + 0x30))
                     (pIVar3,*(undefined8 *)&((FScriptContainerElement *)this_00)->field_0x0);
  if (iVar25 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      pFVar28 = WmfMedia::ResultToString(&local_178,iVar25);
      if ((pFVar28->Data).ArrayNum != 0) {
        pwVar46 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
      }
      local_2a8 = (FScriptContainerElement *)pwVar46;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  local_270 = (longlong *)0x0;
  iVar25 = memcmp(local_d8 + 8,&MFMediaType_Audio,0x10);
  if ((iVar25 == 0) && (pUVar27 = GetDefault<UWmfMediaSettings>(), pUVar27->NativeAudioOut != false)
     ) {
    iVar25 = MFCreateAudioRendererActivate(&local_270);
    if (iVar25 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        pFVar28 = WmfMedia::ResultToString(&local_168,iVar25);
        if ((pFVar28->Data).ArrayNum != 0) {
          pwVar46 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
        }
        local_2a8 = (FScriptContainerElement *)pwVar46;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      bVar22 = false;
      goto LAB_14ea9f2e4;
    }
    bVar22 = IsInGameThread();
    if ((!bVar22) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                            ,0x5a,L""), bVar22)) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
    pIVar29 = IModularFeatures::Get();
    uVar44 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8) + 0x9d4c) <
         `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                      ::__l2::HMDFeatureName,L"HMD");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar25 = (**(code **)((longlong)*pIVar29 + 0x18))
                       (pIVar29,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                                ::__l2::HMDFeatureName);
    if (0 < iVar25) {
      bVar22 = IsInGameThread();
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                              ,0x4d,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        uVar23 = (*pcVar10)();
        return (bool)uVar23;
      }
      pIVar29 = IModularFeatures::Get();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8) + 0x9d4c) <
           `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                        ::__l2::HMDFeatureName,L"HMD");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      IModularFeatures::GetModularFeatureImplementations<IHeadMountedDisplayModule>
                (pIVar29,&local_200,
                 `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                 ::__l2::HMDFeatureName);
      AlgoImpl::
      IntroSortInternal<IHeadMountedDisplayModule_*,int,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                ((IHeadMountedDisplayModule **)local_200.AllocatorInstance.Data,local_200.ArrayNum,
                 local_288[0],(FCompareModulePriority *)local_288);
      if (local_200.ArrayNum < 1) {
        local_2a0 = (longlong)local_200.ArrayNum;
        local_2a8 = (FScriptContainerElement *)0x0;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar10 = (code *)swi(3);
          uVar23 = (*pcVar10)();
          return (bool)uVar23;
        }
      }
      pIVar4 = *(IHeadMountedDisplayModule **)local_200.AllocatorInstance.Data;
      FMemory::Free(local_200.AllocatorInstance.Data);
      (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,&local_220);
      if (1 < local_218) {
        if ((local_270 == (longlong *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          uVar23 = (*pcVar10)();
          return (bool)uVar23;
        }
        pwVar47 = L"";
        if (local_218 != 0) {
          pwVar47 = local_220;
        }
        iVar25 = (**(code **)(*local_270 + 200))
                           (local_270,&MF_AUDIO_RENDERER_ATTRIBUTE_ENDPOINT_ID,pwVar47);
        if (iVar25 < 0) {
          if (5 < (byte)LogWmfMedia._0_1_) {
            pFVar28 = WmfMedia::ResultToString(&local_158,iVar25);
            if ((pFVar28->Data).ArrayNum != 0) {
              pwVar46 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
            }
            local_2a8 = (FScriptContainerElement *)pwVar46;
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
          }
          if (local_220 != (wchar_t *)0x0) {
            FMemory::Free(local_220);
          }
          bVar22 = false;
          goto LAB_14ea9f2e4;
        }
      }
      if (local_220 != (wchar_t *)0x0) {
        FMemory::Free(local_220);
      }
    }
  }
  else {
    local_268 = ::operator_new(0x50);
    if (local_268 == (longlong *)0x0) {
      local_268 = (longlong *)0x0;
    }
    else {
      *local_268 = (longlong)&___7FWmfMediaSampler__6B_;
      local_268[1] = 0;
      local_268[2] = 0;
      local_268[3] = 0;
      local_268[4] = 2;
      *(undefined4 *)(local_268 + 5) = 0;
      local_268[6] = 0;
      local_268[7] = 0;
      local_268[8] = 0;
      local_268[9] = 2;
      plVar48 = local_268;
      if (local_268 != (longlong *)0x0) {
        (*(code *)PTR_AddRef_152ff9ba8)(local_268);
      }
    }
    iVar25 = memcmp(local_d8 + 8,&MFMediaType_Audio,0x10);
    if (iVar25 == 0) {
      if ((plVar48 == (longlong *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        uVar23 = (*pcVar10)();
        return (bool)uVar23;
      }
      local_258 = (FMRSWRecursiveAccessDetector *)HandleMediaSamplerClock;
      uStack_250 = 0;
      uStack_24c = local_1e0.Data.ArrayMax;
      local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_240.DelegateSize = 0;
      local_278 = local_278 | 1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_248,(FWriteAccessScope *)&local_1d0);
      local_1b8 = &local_240;
      local_1f0 = &local_1d0;
      pFVar30 = UE::Core::Private::DelegateAllocate(0x30,&local_240);
      local_1e8 = pFVar30;
      if (pFVar30 != (FDestructionSentinel *)0x0) {
        *(undefined ***)pFVar30 =
             &
             ___7__TCommonDelegateInstanceState___A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
        ;
        *(undefined4 *)&pFVar30->Accessor = 0;
        uVar31 = FDelegateHandle::GenerateNewID();
        *(ulong64 *)&pFVar30->bDestroyed = uVar31;
        *(undefined ***)pFVar30 =
             &
             ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXW4EWmfMediaSamplerClockEvent___ZUFDefaultDelegateUserPolicy__W4EMediaTrackType____6B_
        ;
        *(FWmfMediaTracks **)(pFVar30 + 1) = this;
        pFVar30[1].Accessor = local_258;
        *(ulonglong *)&pFVar30[1].bDestroyed = CONCAT44(uStack_24c,uStack_250);
        if (((this == (FWmfMediaTracks *)0x0) ||
            (pFVar30[1].Accessor == (FMRSWRecursiveAccessDetector *)0x0)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InUserObject != nullptr && MethodPtr != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x1d8,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          uVar23 = (*pcVar10)();
          return (bool)uVar23;
        }
      }
      if (local_1d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      AddDelegateInstance<TDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(plVar48 + 1),
                 (TDelegate<void___cdecl(EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy> *)
                 local_198);
      local_278 = local_278 & 0xfffffffe;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_248,(FWriteAccessScope *)&local_1b0);
      if ((local_240.DelegateSize != 0) &&
         (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_240,0,0,0x10);
        local_240.DelegateSize = 0;
      }
      if (local_1b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
      }
      if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_240.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
      if ((plVar48 == (longlong *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        uVar23 = (*pcVar10)();
        return (bool)uVar23;
      }
      local_258 = (FMRSWRecursiveAccessDetector *)HandleMediaSamplerAudioSample;
      uStack_250 = 0;
      apvStack_140[0] = (void *)((ulonglong)uStack_24c << 0x20);
      local_148 = HandleMediaSamplerAudioSample;
      TMulticastDelegateRegistration<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
      ::AddRaw<FWmfMediaTracks>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
                  *)(plVar48 + 6),(FWmfMediaTracks *)(local_198 + 8),(pmf_974ddd6c *)this);
      this_00 = local_230;
    }
    else {
      iVar25 = memcmp(local_d8 + 8,&MFMediaType_SAMI,0x10);
      if (iVar25 == 0) {
        if ((plVar48 == (longlong *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          uVar23 = (*pcVar10)();
          return (bool)uVar23;
        }
        local_258 = (FMRSWRecursiveAccessDetector *)HandleMediaSamplerCaptionSample;
        pvStack_130 = (void *)((ulonglong)uStack_24c << 0x20);
        local_138 = HandleMediaSamplerCaptionSample;
        pFVar42 = (FWmfMediaTracks *)local_188;
      }
      else {
        iVar25 = memcmp(local_d8 + 8,&MFMediaType_Binary,0x10);
        if (iVar25 == 0) {
          if ((plVar48 == (longlong *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          local_258 = (FMRSWRecursiveAccessDetector *)HandleMediaSamplerMetadataSample;
          pvStack_120 = (void *)((ulonglong)uStack_24c << 0x20);
          local_128 = HandleMediaSamplerMetadataSample;
          pFVar42 = (FWmfMediaTracks *)(local_188 + 8);
        }
        else {
          iVar25 = memcmp(local_d8 + 8,&MFMediaType_Video,0x10);
          if (iVar25 != 0) goto LAB_14ea9e6e9;
          if ((plVar48 == (longlong *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          local_258 = (FMRSWRecursiveAccessDetector *)HandleMediaSamplerVideoSample;
          lStack_110 = (ulonglong)uStack_24c << 0x20;
          local_118 = HandleMediaSamplerVideoSample;
          pFVar42 = (FWmfMediaTracks *)local_d8;
        }
      }
      uStack_250 = 0;
      TMulticastDelegateRegistration<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
      ::AddRaw<FWmfMediaTracks>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
                  *)(plVar48 + 6),pFVar42,(pmf_974ddd6c *)this);
    }
LAB_14ea9e6e9:
    iVar25 = MFCreateSampleGrabberSinkActivate
                       (*(undefined8 *)
                         &((FScriptContainerElement *)((longlong)this_00 + 8))->field_0x0,plVar48,
                        &local_270);
    if (iVar25 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        pFVar28 = WmfMedia::ResultToString(&local_108,iVar25);
        if ((pFVar28->Data).ArrayNum != 0) {
          pwVar46 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
        }
        local_2a8 = (FScriptContainerElement *)pwVar46;
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Tracks__p__Fail_152ffac40,
                   (FLogCategoryBase *)&LogWmfMedia);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      if (plVar48 != (longlong *)0x0) {
        (**(code **)(*plVar48 + 0x10))(plVar48);
      }
      bVar22 = false;
      goto LAB_14ea9f2e4;
    }
    if (plVar48 != (longlong *)0x0) {
      (**(code **)(*plVar48 + 0x10))(plVar48);
    }
  }
  if (local_270 == (longlong *)0x0) {
    bVar22 = false;
    goto LAB_14ea9f2e4;
  }
  local_298 = (longlong *)0x0;
  pUVar27 = GetDefault<UWmfMediaSettings>();
  pFVar5 = this->VideoSamplePool;
  if (pFVar5 != (FWmfMediaTextureSamplePool *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&pFVar5->field_0x8);
    ::operator_delete(pFVar5,0x10);
    this->VideoSamplePool = (FWmfMediaTextureSamplePool *)0x0;
  }
  if ((GEngine == (UEngine *)0x0) ||
     ((((pUVar27->HardwareAcceleratedVideoDecoding == false &&
        (pUVar27->bAreHardwareAcceleratedCodecRegistered == false)) ||
       (iVar25 = memcmp(local_d8 + 8,&MFMediaType_Video,0x10), iVar25 != 0)) ||
      ((bVar22 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0), !bVar22 ||
       (bVar22 = FWmfMediaStreamSink::Create(&MFMediaType_Video,&this->MediaStreamSink), !bVar22))))
     )) {
    pFVar34 = ::operator_new(0x10);
    pFVar30 = (FDestructionSentinel *)0x0;
    local_1e8 = pFVar34;
    if (pFVar34 != (FDestructionSentinel *)0x0) {
      *(undefined8 *)pFVar34 = 0;
      pFVar34->Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      local_1f0 = pFVar34;
      lpCriticalSection = ::operator_new(0x60);
      local_230 = lpCriticalSection;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
        lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        lpCriticalSection[1].LockCount = 0;
        lpCriticalSection[1].RecursionCount = 0;
        puVar35 = ::operator_new(0x10);
        if (puVar35 != (undefined8 *)0x0) {
          *puVar35 = 0;
          puVar35[1] = 0;
          *puVar35 = 0;
        }
        lpCriticalSection[1].SpinCount = (ULONG_PTR)puVar35;
        lpCriticalSection[1].LockSemaphore = puVar35;
        lpCriticalSection[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      }
      *(LPCRITICAL_SECTION *)pFVar34 = lpCriticalSection;
      local_230 = ::operator_new(0x18);
      if (local_230 != (LPCRITICAL_SECTION)0x0) {
        *(undefined4 *)&((FScriptContainerElement *)((longlong)local_230 + 8))->field_0x0 = 1;
        *(undefined4 *)((longlong)local_230 + 0xc) = 1;
        *(undefined ***)&((FScriptContainerElement *)local_230)->field_0x0 =
             &
             ___7__TReferenceControllerWithDeleter_VTStorage___TMediaObjectPool_VFWmfMediaTextureSample__V__TMediaPoolDefaultObjectAllocator_VFWmfMediaTextureSample______U__DefaultDeleter_VTStorage___TMediaObjectPool_VFWmfMediaTextureSample__V__TMediaPoolDefaultObjectAllocator_VFWmfMediaTextureSample_______SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        *(LPCRITICAL_SECTION *)&((FScriptContainerElement *)((longlong)local_230 + 0x10))->field_0x0
             = lpCriticalSection;
      }
      pFVar34->Accessor = (FMRSWRecursiveAccessDetector *)local_230;
      pFVar30 = pFVar34;
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InRawPtrProxy.Object != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0xe3,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        uVar23 = (*pcVar10)();
        return (bool)uVar23;
      }
    }
    this->VideoSamplePool = (FWmfMediaTextureSamplePool *)pFVar30;
    if (pFVar30 == (FDestructionSentinel *)0x0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        pFVar41 = &::LOG_Static;
        goto LAB_14ea9f2bd;
      }
    }
    else {
      iVar25 = MFCreateTopologyNode(0,&local_298);
      if (-1 < iVar25) {
        if ((local_298 == (longlong *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          uVar23 = (*pcVar10)();
          return (bool)uVar23;
        }
        iVar25 = (**(code **)(*local_298 + 0x108))(local_298,local_270);
        if (-1 < iVar25) {
          if ((local_298 == (longlong *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          iVar25 = (**(code **)(*local_298 + 0xa8))(local_298,&MF_TOPONODE_STREAMID,0);
          if ((-1 < iVar25) &&
             (iVar25 = (**(code **)((longlong)*param_2 + 0x110))(param_2,local_298), -1 < iVar25))
          goto LAB_14ea9ed6c;
        }
      }
      if (5 < (byte)LogWmfMedia._0_1_) {
        pFVar41 = &::LOG_Static;
        goto LAB_14ea9f2bd;
      }
    }
LAB_14ea9f2d0:
    bVar22 = false;
  }
  else {
    pTVar32 = MakeShared<FWmfMediaHardwareVideoDecodingTextureSamplePool,1>(&local_f8);
    local_210 = pTVar32->Object;
    local_208.ReferenceController = (pTVar32->SharedReferenceCount).ReferenceController;
    if (local_208.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_208.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->VideoHardwareVideoDecodingSamplePool;
    if (pTVar1 != (TSharedPtr<FWmfMediaHardwareVideoDecodingTextureSamplePool,1> *)&local_210) {
      pTVar1->Object = local_210;
      local_210 = (FWmfMediaHardwareVideoDecodingTextureSamplePool *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VideoHardwareVideoDecodingSamplePool).SharedReferenceCount,&local_208);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    pFVar33 = TComPtr<FWmfMediaStreamSink>::operator->(&this->MediaStreamSink);
    uStack_60 = (void *)0x0;
    local_78.Data =
         (FScriptContainerElement *)
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::`166'::<lambda_2>,0,0>::
          _vftable_;
    local_88 = (long  [2])
               UE::Core::Private::Function::
               TFunctionRefCaller<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_2>,bool>::
               Call;
    FStack_90.Data = (FScriptContainerElement *)0x0;
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::`166'::<lambda_1>,0,0>
                ::_vftable_;
    local_d8._32_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_1>,FMediaTimeStamp,FTimespan,enum_EMediaTrackType>
         ::Call;
    local_228 = (LPCRITICAL_SECTION)&pFVar33->CriticalSection;
    pFStack_a0 = this;
    FStack_70.Data = (FScriptContainerElement *)this;
    if (local_228 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_228);
    pFVar6 = pTVar1->Object;
    pTVar7 = (this->VideoHardwareVideoDecodingSamplePool).SharedReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8 = (pFVar33->VideoSamplePool).Object;
    pTStack_e0 = (pFVar33->VideoSamplePool).SharedReferenceCount.ReferenceController;
    (pFVar33->VideoSamplePool).Object = pFVar6;
    (pFVar33->VideoSamplePool).SharedReferenceCount.ReferenceController = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
    pFVar33->VideoSampleQueue = &this->VideoSampleQueue;
    pvVar11 = *(void **)&pFVar33->AdjustTimeStamp;
    alVar12[0] = *(long *)&(pFVar33->AdjustTimeStamp).field_0x8;
    alVar12[1] = *(long *)&(pFVar33->AdjustTimeStamp).field_0xc;
    pvVar13 = *(void **)&(pFVar33->AdjustTimeStamp).field_0x10;
    pvVar14 = *(void **)&(pFVar33->AdjustTimeStamp).field_0x18;
    pvVar15 = *(void **)&(pFVar33->AdjustTimeStamp).field_0x20;
    pFVar16 = *(FScriptContainerElement **)&(pFVar33->AdjustTimeStamp).field_0x28;
    *(undefined8 *)&pFVar33->AdjustTimeStamp = local_d8._32_8_;
    *(undefined8 *)&(pFVar33->AdjustTimeStamp).field_0x8 = local_d8._40_8_;
    *(undefined ***)&(pFVar33->AdjustTimeStamp).field_0x10 = local_a8;
    *(FWmfMediaTracks **)&(pFVar33->AdjustTimeStamp).field_0x18 = pFStack_a0;
    *(void **)&(pFVar33->AdjustTimeStamp).field_0x20 = local_98;
    *(FScriptContainerElement **)&(pFVar33->AdjustTimeStamp).field_0x28 = FStack_90.Data;
    alVar19[0] = *(long *)&(pFVar33->IsSampleStillDesired).field_0x0;
    alVar19[1] = *(long *)&(pFVar33->IsSampleStillDesired).field_0x4;
    iVar25 = *(int *)&(pFVar33->IsSampleStillDesired).field_0x8;
    pFVar20 = *(FScriptContainerElement **)&(pFVar33->IsSampleStillDesired).field_0x10;
    pFVar21 = *(FScriptContainerElement **)&(pFVar33->IsSampleStillDesired).field_0x18;
    pFVar17 = *(FScriptContainerElement **)&(pFVar33->IsSampleStillDesired).field_0x20;
    pFVar18 = *(ForAnyElementType **)&(pFVar33->IsSampleStillDesired).field_0x28;
    *(long *)&(pFVar33->IsSampleStillDesired).field_0x0 = local_88[0];
    *(long *)&(pFVar33->IsSampleStillDesired).field_0x4 = local_88[1];
    *(ulonglong *)&(pFVar33->IsSampleStillDesired).field_0x8 = CONCAT44(uStack_7c,iStack_80);
    *(uint *)&(pFVar33->IsSampleStillDesired).field_0x10 = (uint)local_78.Data;
    *(undefined4 *)&(pFVar33->IsSampleStillDesired).field_0x14 = local_78.Data._4_4_;
    *(undefined4 *)&(pFVar33->IsSampleStillDesired).field_0x18 = FStack_70.Data._0_4_;
    *(undefined4 *)&(pFVar33->IsSampleStillDesired).field_0x1c = FStack_70.Data._4_4_;
    *(int *)&(pFVar33->IsSampleStillDesired).field_0x20 = (int)local_68.Data;
    *(int *)&(pFVar33->IsSampleStillDesired).field_0x24 = local_68.Data._4_4_;
    *(int *)&(pFVar33->IsSampleStillDesired).field_0x28 = (int)uStack_60;
    *(int *)&(pFVar33->IsSampleStillDesired).field_0x2c = uStack_60._4_4_;
    local_d8._32_8_ = pvVar11;
    local_d8._40_8_ = alVar12;
    local_a8 = pvVar13;
    pFStack_a0 = pvVar14;
    local_98 = pvVar15;
    FStack_90.Data = pFVar16;
    local_88 = alVar19;
    iStack_80 = iVar25;
    uStack_7c = *(uint *)&(pFVar33->IsSampleStillDesired).field_0xc;
    local_78.Data = pFVar20;
    FStack_70.Data = pFVar21;
    local_68.Data = pFVar17;
    uStack_60 = pFVar18;
    LeaveCriticalSection(local_228);
    local_228 = (LPCRITICAL_SECTION)0x0;
    if ((void *)local_d8._32_8_ != (void *)0x0) {
      FVar39.Data = (FScriptContainerElement *)&local_a8;
      if (FStack_90.Data != (FScriptContainerElement *)0x0) {
        FVar39.Data = FStack_90.Data;
      }
      (*(code *)(*(undefined ***)FVar39.Data)[2])();
    }
    if (local_88 != (long  [2])0x0) {
      apvVar40[0] = &local_78;
      if (uStack_60 != (ForAnyElementType *)0x0) {
        apvVar40[0] = uStack_60;
      }
      (**(code **)(((ForAnyElementType *)apvVar40[0])->Data + 0x10))();
    }
    iVar25 = MFCreateTopologyNode(0,&local_298);
    if (iVar25 < 0) {
LAB_14ea9eb89:
      if (5 < (byte)LogWmfMedia._0_1_) {
        pFVar41 = &::LOG_Static;
LAB_14ea9f2bd:
        UE::Logging::Private::BasicLog<6>(pFVar41,(FLogCategoryBase *)&LogWmfMedia);
      }
      goto LAB_14ea9f2d0;
    }
    if ((local_298 == (longlong *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar22)) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
    pFVar33 = (this->MediaStreamSink).RawPointer;
    puVar43 = &pFVar33->field_0x10;
    if (pFVar33 == (FWmfMediaStreamSink *)0x0) {
      puVar43 = (undefined1 *)0x0;
    }
    iVar25 = (**(code **)(*local_298 + 0x108))(local_298,puVar43);
    if (iVar25 < 0) goto LAB_14ea9eb89;
    if ((local_298 == (longlong *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar22)) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
    iVar25 = (**(code **)(*local_298 + 0xa8))(local_298,&MF_TOPONODE_STREAMID,0);
    if (iVar25 < 0) goto LAB_14ea9eb89;
    if ((local_298 == (longlong *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar22)) {
      pcVar10 = (code *)swi(3);
      uVar23 = (*pcVar10)();
      return (bool)uVar23;
    }
    iVar25 = (**(code **)(*local_298 + 0xa8))(local_298,&MF_TOPONODE_NOSHUTDOWN_ON_REMOVE,0);
    if ((iVar25 < 0) ||
       (iVar25 = (**(code **)((longlong)*param_2 + 0x110))(param_2,local_298), iVar25 < 0))
    goto LAB_14ea9eb89;
    this->bVideoTrackRequestedHardwareAcceleration = true;
LAB_14ea9ed6c:
    pWVar45 = (WmfMediaDecoder *)0x0;
    local_290 = pWVar45;
    iVar25 = MFCreateTopologyNode(1,&local_290);
    if (iVar25 < 0) {
LAB_14ea9f274:
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
LAB_14ea9f297:
      bVar22 = false;
    }
    else {
      if ((local_290 == (WmfMediaDecoder *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        uVar23 = (*pcVar10)();
        return (bool)uVar23;
      }
      iVar25 = (**(code **)(local_290->_padding_ + 0xd8))
                         (local_290,&MF_TOPONODE_SOURCE,(this->MediaSource).RawPointer);
      if (iVar25 < 0) goto LAB_14ea9f274;
      if ((local_290 == (WmfMediaDecoder *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        uVar23 = (*pcVar10)();
        return (bool)uVar23;
      }
      iVar25 = (**(code **)(local_290->_padding_ + 0xd8))
                         (local_290,&MF_TOPONODE_PRESENTATION_DESCRIPTOR,
                          (this->PresentationDescriptor).RawPointer);
      if (iVar25 < 0) goto LAB_14ea9f274;
      if ((local_290 == (WmfMediaDecoder *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        uVar23 = (*pcVar10)();
        return (bool)uVar23;
      }
      iVar25 = (**(code **)(local_290->_padding_ + 0xd8))
                         (local_290,&MF_TOPONODE_STREAM_DESCRIPTOR,(param_1->Descriptor).RawPointer)
      ;
      if ((iVar25 < 0) ||
         (iVar25 = (**(code **)((longlong)*param_2 + 0x110))(param_2,local_290), iVar25 < 0))
      goto LAB_14ea9f274;
      pIVar36 = TComPtr<IMFMediaType>::operator->((TComPtr<IMFMediaType> *)this_00);
      iVar25 = (**(code **)((longlong)*pIVar36 + 0x50))(pIVar36,&MF_MT_SUBTYPE,local_58);
      if (iVar25 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
        goto LAB_14ea9f297;
      }
      local_280 = pWVar45;
      local_260 = pWVar45;
      pIVar37 = IWmfMediaModule::Get();
      if (pIVar37 == (IWmfMediaModule *)0x0) {
LAB_14ea9f1ce:
        if ((local_290 == (WmfMediaDecoder *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          uVar23 = (*pcVar10)();
          return (bool)uVar23;
        }
        iVar25 = (**(code **)(local_290->_padding_ + 0x140))(local_290,0,local_298,0);
        if (iVar25 < 0) {
          if (5 < (byte)LogWmfMedia._0_1_) {
            pFVar28 = WmfMedia::ResultToString(&local_1e0,iVar25);
            if ((pFVar28->Data).ArrayNum != 0) {
              pwVar46 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
            }
            local_2a8 = (FScriptContainerElement *)pwVar46;
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
          }
LAB_14ea9f267:
          bVar22 = false;
        }
        else {
LAB_14ea9f14d:
          if (5 < (byte)LogWmfMedia._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          }
          bVar22 = true;
        }
      }
      else {
        pWVar8 = (pIVar37->CodecManager).Ptr;
        local_2a8 = (FScriptContainerElement *)&local_260;
        cVar24 = (**(code **)(pWVar8->_padding_ + 0x18))(pWVar8,local_d8 + 8,local_58,&local_280);
        if (((cVar24 == '\0') || (local_280 == (WmfMediaDecoder *)0x0)) ||
           (local_260 == (WmfMediaDecoder *)0x0)) goto LAB_14ea9f1ce;
        iVar25 = (**(code **)(local_280->_padding_ + 0x108))();
        if (-1 < iVar25) {
          if ((local_280 == (WmfMediaDecoder *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          iVar25 = (**(code **)(local_280->_padding_ + 0xa8))(local_280,&MF_TOPONODE_STREAMID,0);
          if ((iVar25 < 0) ||
             (iVar25 = (**(code **)((longlong)*param_2 + 0x110))(param_2,local_280), iVar25 < 0))
          goto LAB_14ea9f19d;
          if ((local_290 == (WmfMediaDecoder *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          iVar25 = (**(code **)(local_290->_padding_ + 0x140))(local_290,0,local_280,0);
          if (iVar25 < 0) goto LAB_14ea9f19d;
          if ((local_280 == (WmfMediaDecoder *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          iVar25 = (**(code **)(local_280->_padding_ + 0x140))(local_280,0,local_298,0);
          if (iVar25 < 0) goto LAB_14ea9f19d;
          if ((local_280 == (WmfMediaDecoder *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          iVar25 = (**(code **)(local_280->_padding_ + 0xa8))
                             (local_280,&MF_TOPONODE_CONNECT_METHOD,1);
          if (iVar25 < 0) goto LAB_14ea9f19d;
          if ((local_298 == (longlong *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            uVar23 = (*pcVar10)();
            return (bool)uVar23;
          }
          iVar25 = (**(code **)(*local_298 + 0xa8))(local_298,&MF_TOPONODE_CONNECT_METHOD,1);
          pWVar45 = local_260;
          if (iVar25 < 0) goto LAB_14ea9f19d;
          if ((local_260 != (WmfMediaDecoder *)0x0) &&
             (cVar24 = (**(code **)(local_260->_padding_ + 0xf0))(local_260), cVar24 != '\0')) {
            pWVar45->bIsExternalBufferEnabled = true;
            if (((this->MediaStreamSink).RawPointer != (FWmfMediaStreamSink *)0x0) &&
               (pFVar33 = TComPtr<FWmfMediaStreamSink>::operator->(&this->MediaStreamSink),
               (pFVar33->Decoder).RawPointer != pWVar45)) {
              (**(code **)(pWVar45->_padding_ + 8))(pWVar45);
              pWVar9 = (pFVar33->Decoder).RawPointer;
              if (pWVar9 != (WmfMediaDecoder *)0x0) {
                (**(code **)(pWVar9->_padding_ + 0x10))();
              }
              (pFVar33->Decoder).RawPointer = pWVar45;
            }
          }
          goto LAB_14ea9f14d;
        }
LAB_14ea9f19d:
        if ((byte)LogWmfMedia._0_1_ < 6) goto LAB_14ea9f267;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        bVar22 = false;
      }
      if (local_260 != (WmfMediaDecoder *)0x0) {
        (**(code **)(local_260->_padding_ + 0x10))(local_260);
      }
      if (local_280 != (WmfMediaDecoder *)0x0) {
        (**(code **)(local_280->_padding_ + 0x10))();
      }
    }
    if (local_290 != (WmfMediaDecoder *)0x0) {
      (**(code **)(local_290->_padding_ + 0x10))();
    }
  }
  if (local_298 != (longlong *)0x0) {
    (**(code **)(*local_298 + 0x10))();
  }
LAB_14ea9f2e4:
  if (local_270 != (longlong *)0x0) {
    (**(code **)(*local_270 + 0x10))();
    return bVar22;
  }
  return bVar22;
}

// AdjustTimeStamp @ 14ea9f310

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaTimeStamp * __thiscall
FWmfMediaTracks::AdjustTimeStamp
          (FWmfMediaTracks *this,FMediaTimeStamp *__return_storage_ptr__,FTimespan param_1,
          EMediaTrackType param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    __return_storage_ptr__->SequenceIndex = this->SeekIndex;
    __return_storage_ptr__->LoopIndex = this->LoopIndex;
    (__return_storage_ptr__->Time).Ticks = param_1.Ticks;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AppendStats @ 14ea9fa60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::AppendStats(FWmfMediaTracks *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FString local_38;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::AppendChars(param_1,L"Audio Tracks\n",0xd);
    iVar1 = (this->AudioTracks).ArrayNum;
    if (iVar1 == 0) {
      ::FString::AppendChars(param_1,L"\tnone\n",6);
    }
    else {
      pFVar2 = (this->AudioTracks).AllocatorInstance.Data;
      pFVar4 = pFVar2 + (longlong)iVar1 * 0x60;
      while( true ) {
        if ((this->AudioTracks).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FWmfMediaTracks::FTrack_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar2 == pFVar4) break;
        FText::ToString((FText *)(pFVar2 + 8));
        ::FString::PrintfImpl(&local_38,L"\t%s\n");
        iVar3 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(param_1,L"\t\tNot implemented yet",0x15);
        pFVar2 = pFVar2 + 0x60;
      }
    }
    ::FString::AppendChars(param_1,L"Video Tracks\n",0xd);
    iVar1 = (this->VideoTracks).ArrayNum;
    if (iVar1 == 0) {
      ::FString::AppendChars(param_1,L"\tnone\n",6);
    }
    else {
      pFVar2 = (this->VideoTracks).AllocatorInstance.Data;
      pFVar4 = pFVar2 + (longlong)iVar1 * 0x60;
      while( true ) {
        if ((this->VideoTracks).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FWmfMediaTracks::FTrack_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar2 == pFVar4) break;
        FText::ToString((FText *)(pFVar2 + 8));
        ::FString::PrintfImpl(&local_38,L"\t%s\n");
        iVar3 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(param_1,L"\t\tNot implemented yet",0x15);
        pFVar2 = pFVar2 + 0x60;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea9fb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ClearFlags @ 14eaa11f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::ClearFlags(FWmfMediaTracks *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->MediaSourceChanged = false;
    this->SelectionChanged = false;
                    /* WARNING: Could not recover jumptable at 0x00014eaa122d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CreateTopology @ 14eaa7600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TComPtr<IMFTopology> __thiscall FWmfMediaTracks::CreateTopology(FWmfMediaTracks *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  TComPtr<IMFTopology> TVar8;
  UWmfMediaSettings *pUVar9;
  IMFTopology *in_RDX;
  WmfMediaTopologyLoader local_res8 [8];
  TComPtr<IMFTopology> local_res18;
  FWindowsRecursiveMutex *local_res20;
  FString local_60;
  FString local_50;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_res20 = lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->MediaSource).RawPointer == (IMFMediaSource *)0x0) ||
     ((((this->SelectedAudioTrack == -1 && (this->SelectedCaptionTrack == -1)) &&
       (this->SelectedMetadataTrack == -1)) && (this->SelectedVideoTrack == -1)))) {
    *in_RDX = (IMFTopology)0x0;
  }
  else {
    local_res18.RawPointer = (IMFTopology *)0x0;
    iVar5 = MFCreateTopology(&local_res18);
    TVar8.RawPointer = local_res18.RawPointer;
    if (iVar5 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_50,iVar5);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      *in_RDX = (IMFTopology)0x0;
      if ((IMFTopology)local_res18.RawPointer != (IMFTopology)0x0) {
        (**(code **)((longlong)*local_res18.RawPointer + 0x10))();
      }
    }
    else {
      bVar3 = false;
      this->bVideoTrackRequestedHardwareAcceleration = false;
      uVar1 = this->SelectedAudioTrack;
      uVar7 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (this->AudioTracks).ArrayNum)) {
        uVar6 = uVar7;
        if ((int)uVar1 < (this->AudioTracks).ArrayNum) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar8.RawPointer = (IMFTopology *)(*pcVar2)();
          return (TComPtr<IMFTopology>)TVar8.RawPointer;
        }
        bVar3 = AddTrackToTopology(this,(FTrack *)
                                        ((this->AudioTracks).AllocatorInstance.Data +
                                        (longlong)(int)uVar1 * 0x60),TVar8.RawPointer);
      }
      TVar8.RawPointer = local_res18.RawPointer;
      uVar1 = this->SelectedCaptionTrack;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (this->CaptionTracks).ArrayNum)) {
        uVar6 = uVar7;
        if ((int)uVar1 < (this->CaptionTracks).ArrayNum) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          TVar8.RawPointer = (IMFTopology *)(*pcVar2)();
          return (TComPtr<IMFTopology>)TVar8.RawPointer;
        }
        bVar4 = AddTrackToTopology(this,(FTrack *)
                                        ((this->CaptionTracks).AllocatorInstance.Data +
                                        (longlong)(int)uVar1 * 0x60),TVar8.RawPointer);
        bVar3 = (bool)(bVar3 | bVar4);
      }
      TVar8.RawPointer = local_res18.RawPointer;
      uVar1 = this->SelectedMetadataTrack;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (this->MetadataTracks).ArrayNum)) {
        uVar6 = uVar7;
        if ((int)uVar1 < (this->MetadataTracks).ArrayNum) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          TVar8.RawPointer = (IMFTopology *)(*pcVar2)();
          return (TComPtr<IMFTopology>)TVar8.RawPointer;
        }
        bVar4 = AddTrackToTopology(this,(FTrack *)
                                        ((this->MetadataTracks).AllocatorInstance.Data +
                                        (longlong)(int)uVar1 * 0x60),TVar8.RawPointer);
        bVar3 = (bool)(bVar3 | bVar4);
      }
      TVar8.RawPointer = local_res18.RawPointer;
      uVar1 = this->SelectedVideoTrack;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (this->VideoTracks).ArrayNum)) {
        if ((int)uVar1 < (this->VideoTracks).ArrayNum) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          TVar8.RawPointer = (IMFTopology *)(*pcVar2)();
          return (TComPtr<IMFTopology>)TVar8.RawPointer;
        }
        bVar4 = AddTrackToTopology(this,(FTrack *)
                                        ((this->VideoTracks).AllocatorInstance.Data +
                                        (longlong)(int)uVar1 * 0x60),TVar8.RawPointer);
        bVar3 = (bool)(bVar3 | bVar4);
      }
      if (bVar3 == false) {
        *in_RDX = (IMFTopology)0x0;
        if ((IMFTopology)local_res18.RawPointer != (IMFTopology)0x0) {
          (**(code **)((longlong)*local_res18.RawPointer + 0x10))();
        }
      }
      else {
        if (5 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
        pUVar9 = GetDefault<UWmfMediaSettings>();
        if ((pUVar9->HardwareAcceleratedVideoDecoding != false) ||
           (pUVar9->bAreHardwareAcceleratedCodecRegistered != false)) {
          WmfMediaTopologyLoader::EnableHardwareAcceleration(local_res8,&local_res18);
          if (5 < (byte)LogWmfMedia._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          }
          ::FString::PrintfImpl(&local_60,L"Video decoded on %s\n");
          iVar5 = local_60.Data.ArrayNum + -1;
          if (local_60.Data.ArrayNum == 0) {
            iVar5 = 0;
          }
          ::FString::AppendChars(&this->Info,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar5);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        *in_RDX = (IMFTopology)local_res18.RawPointer;
        local_res18.RawPointer = (IMFTopology *)0x0;
      }
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
        return (TComPtr<IMFTopology>)in_RDX;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (TComPtr<IMFTopology>)in_RDX;
}

// DiscardAudioSamples @ 14eaa8390

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::DiscardAudioSamples
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::Discard
                    (&this->AudioSampleQueue,param_1,param_2);
  return bVar1;
}

// DiscardCaptionSamples @ 14eaa83a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::DiscardCaptionSamples
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Discard
                    (&this->CaptionSampleQueue,param_1,param_2);
  return bVar1;
}

// DiscardMetadataSamples @ 14eaa83c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::DiscardMetadataSamples
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Discard
                    (&this->MetadataSampleQueue,param_1,param_2);
  return bVar1;
}

// DiscardVideoSamples @ 14eaa83e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::DiscardVideoSamples
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Discard
                    (&this->VideoSampleQueue,param_1,param_2);
  return bVar1;
}

// ExecuteOnceMediaStreamSinkHasNoPendingRequests @ 14eaaaa00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::ExecuteOnceMediaStreamSinkHasNoPendingRequests
          (FWmfMediaTracks *this,TFunction<void___cdecl(void)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWmfMediaStreamSink *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pFVar1 = (this->MediaStreamSink).RawPointer;
  if (pFVar1 == (FWmfMediaStreamSink *)0x0) {
    return false;
  }
  lpCriticalSection = &pFVar1->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar1->NumRequestsInFlight == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return false;
    }
    if (*(longlong *)&pFVar1->OnIdleAction == 0) {
      uVar5 = *(undefined8 *)&param_1->field_0x8;
      uVar6 = *(undefined8 *)&pFVar1->OnIdleAction;
      uVar7 = *(undefined8 *)&(pFVar1->OnIdleAction).field_0x8;
      uVar8 = *(undefined8 *)&(pFVar1->OnIdleAction).field_0x10;
      uVar9 = *(undefined8 *)&(pFVar1->OnIdleAction).field_0x18;
      uVar10 = *(undefined8 *)&(pFVar1->OnIdleAction).field_0x20;
      uVar11 = *(undefined8 *)&(pFVar1->OnIdleAction).field_0x28;
      *(undefined8 *)&pFVar1->OnIdleAction = *(undefined8 *)param_1;
      *(undefined8 *)&(pFVar1->OnIdleAction).field_0x8 = uVar5;
      uVar5 = *(undefined8 *)&param_1->field_0x18;
      *(undefined8 *)&(pFVar1->OnIdleAction).field_0x10 = *(undefined8 *)&param_1->field_0x10;
      *(undefined8 *)&(pFVar1->OnIdleAction).field_0x18 = uVar5;
      uVar2 = *(undefined4 *)&param_1->field_0x24;
      uVar3 = *(undefined4 *)&param_1->field_0x28;
      uVar4 = *(undefined4 *)&param_1->field_0x2c;
      *(undefined4 *)&(pFVar1->OnIdleAction).field_0x20 = *(undefined4 *)&param_1->field_0x20;
      *(undefined4 *)&(pFVar1->OnIdleAction).field_0x24 = uVar2;
      *(undefined4 *)&(pFVar1->OnIdleAction).field_0x28 = uVar3;
      *(undefined4 *)&(pFVar1->OnIdleAction).field_0x2c = uVar4;
      *(undefined8 *)param_1 = uVar6;
      *(undefined8 *)&param_1->field_0x8 = uVar7;
      *(undefined8 *)&param_1->field_0x10 = uVar8;
      *(undefined8 *)&param_1->field_0x18 = uVar9;
      *(undefined8 *)&param_1->field_0x20 = uVar10;
      *(undefined8 *)&param_1->field_0x28 = uVar11;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FetchAudio @ 14eaaab90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchAudio
          (FWmfMediaTracks *this,TRange<FTimespan> *param_1,TSharedPtr<IMediaAudioSample,1> *param_2
          )

{
  code *pcVar1;
  long64 lVar2;
  long64 lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uchar local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  local_28 = (param_1->LowerBound).Type.Value;
  uStack_27 = (param_1->LowerBound).field_0x1;
  uStack_26 = (param_1->LowerBound).field_0x2;
  uStack_25 = (param_1->LowerBound).field_0x3;
  uStack_24 = (param_1->LowerBound).field_0x4;
  uStack_23 = (param_1->LowerBound).field_0x5;
  uStack_22 = (param_1->LowerBound).field_0x6;
  uStack_21 = (param_1->LowerBound).field_0x7;
  uStack_20 = (undefined1)(param_1->LowerBound).Value.Ticks;
  uStack_1f = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 1);
  uStack_1e = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 2);
  uStack_1d = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 3);
  uStack_1c = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 4);
  uStack_1b = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 5);
  uStack_1a = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 6);
  uStack_19 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 7);
  pcVar1 = *(code **)this->_padding_;
  if (local_28 == '\x02') {
    local_b8 = CONCAT31(local_b8._1_3_,2);
    uStack_b0 = 0;
    uStack_ac = 0x80000000;
    uStack_a0 = CONCAT31(uStack_a0._1_3_,2);
    local_98 = 0;
    uStack_94 = 0x80000000;
  }
  else {
    if ((param_1->UpperBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar2 = (param_1->UpperBound).Value.Ticks;
    if ((param_1->LowerBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar3 = (param_1->LowerBound).Value.Ticks;
    uStack_70 = uStack_70 & 0xffffff00;
    local_68 = (undefined4)lVar2;
    uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_88 = CONCAT31(local_88._1_3_,1);
    uStack_80 = (undefined4)lVar3;
    uStack_7c = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_b8 = local_88;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    uStack_a0 = uStack_70;
    local_98 = local_68;
    uStack_94 = uStack_64;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  local_48 = 0;
  local_58[0] = local_b8;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  uStack_40 = uStack_a0;
  local_38 = local_98;
  uStack_34 = uStack_94;
  uVar5 = (*pcVar1)(this,local_58,param_2);
  return (bool)uVar5;
}

// FetchAudio @ 14eaaacd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchAudio
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaAudioSample,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaAudioSample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  IMediaAudioSample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  local_68 = (IMediaAudioSample *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  plVar1 = &(this->AudioSampleQueue)._padding_;
  cVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_68);
  if (cVar3 != '\0') {
    if ((local_68 == (IMediaAudioSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_68 + 0x30))(local_68,&local_58);
    if ((local_68 == (IMediaAudioSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_68 + 0x10))(local_68,local_res8);
    local_38.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_54,local_58);
    local_38.LowerBound.Type.Value = '\x01';
    local_38.LowerBound.Value.Time.Ticks._0_4_ = local_58;
    local_38.LowerBound.Value.Time.Ticks._4_4_ = uStack_54;
    local_38.LowerBound.Value.SequenceIndex = iStack_50;
    local_38.LowerBound.Value.LoopIndex = iStack_4c;
    local_38.UpperBound.Type.Value = '\0';
    local_38.UpperBound.Value.SequenceIndex = iStack_50;
    local_38.UpperBound.Value.LoopIndex = iStack_4c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_38);
    if ((bVar4) && (cVar3 = (**(code **)*plVar1)(plVar1,&local_68), cVar3 != '\0')) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_2->Object;
      pTStack_40 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_68;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_60;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      bVar4 = true;
      goto LAB_14eaaae0d;
    }
  }
  bVar4 = false;
LAB_14eaaae0d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return bVar4;
}

// FetchBestVideoSampleForTimeRange @ 14eaaae40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EFetchBestSampleResult __thiscall
FWmfMediaTracks::FetchBestVideoSampleForTimeRange
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,bool param_3,bool param_4)

{
  EMediaSampleQueueFetchResult EVar1;
  EFetchBestSampleResult EVar2;
  
  EVar1 = TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
          FetchBestSampleForTimeRange(&this->VideoSampleQueue,param_1,param_2,param_3,param_4);
  EVar2 = Ok;
  if (EVar1 != Found) {
    EVar2 = (EVar1 != None) + NoSample;
  }
  FWmfMediaSession::RequestMoreVideoData(this->Session);
  return EVar2;
}

// FetchCaption @ 14eaaae90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchCaption
          (FWmfMediaTracks *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  code *pcVar1;
  long64 lVar2;
  long64 lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uchar local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  local_28 = (param_1->LowerBound).Type.Value;
  uStack_27 = (param_1->LowerBound).field_0x1;
  uStack_26 = (param_1->LowerBound).field_0x2;
  uStack_25 = (param_1->LowerBound).field_0x3;
  uStack_24 = (param_1->LowerBound).field_0x4;
  uStack_23 = (param_1->LowerBound).field_0x5;
  uStack_22 = (param_1->LowerBound).field_0x6;
  uStack_21 = (param_1->LowerBound).field_0x7;
  uStack_20 = (undefined1)(param_1->LowerBound).Value.Ticks;
  uStack_1f = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 1);
  uStack_1e = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 2);
  uStack_1d = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 3);
  uStack_1c = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 4);
  uStack_1b = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 5);
  uStack_1a = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 6);
  uStack_19 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 7);
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  if (local_28 == '\x02') {
    local_b8 = CONCAT31(local_b8._1_3_,2);
    uStack_b0 = 0;
    uStack_ac = 0x80000000;
    uStack_a0 = CONCAT31(uStack_a0._1_3_,2);
    local_98 = 0;
    uStack_94 = 0x80000000;
  }
  else {
    if ((param_1->UpperBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar2 = (param_1->UpperBound).Value.Ticks;
    if ((param_1->LowerBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar3 = (param_1->LowerBound).Value.Ticks;
    uStack_70 = uStack_70 & 0xffffff00;
    local_68 = (undefined4)lVar2;
    uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_88 = CONCAT31(local_88._1_3_,1);
    uStack_80 = (undefined4)lVar3;
    uStack_7c = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_b8 = local_88;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    uStack_a0 = uStack_70;
    local_98 = local_68;
    uStack_94 = uStack_64;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  local_48 = 0;
  local_58[0] = local_b8;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  uStack_40 = uStack_a0;
  local_38 = local_98;
  uStack_34 = uStack_94;
  uVar5 = (*pcVar1)(this,local_58,param_2);
  return (bool)uVar5;
}

// FetchCaption @ 14eaaafd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchCaption
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaOverlaySample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  IMediaOverlaySample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  local_68 = (IMediaOverlaySample *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  plVar1 = &(this->CaptionSampleQueue)._padding_;
  cVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_68);
  if (cVar3 != '\0') {
    if ((local_68 == (IMediaOverlaySample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_68 + 0x18))(local_68,&local_58);
    if ((local_68 == (IMediaOverlaySample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)*local_68)(local_68,local_res8);
    local_38.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_54,local_58);
    local_38.LowerBound.Type.Value = '\x01';
    local_38.LowerBound.Value.Time.Ticks._0_4_ = local_58;
    local_38.LowerBound.Value.Time.Ticks._4_4_ = uStack_54;
    local_38.LowerBound.Value.SequenceIndex = iStack_50;
    local_38.LowerBound.Value.LoopIndex = iStack_4c;
    local_38.UpperBound.Type.Value = '\0';
    local_38.UpperBound.Value.SequenceIndex = iStack_50;
    local_38.UpperBound.Value.LoopIndex = iStack_4c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_38);
    if ((bVar4) && (cVar3 = (**(code **)*plVar1)(plVar1,&local_68), cVar3 != '\0')) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_2->Object;
      pTStack_40 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_68;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_60;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      bVar4 = true;
      goto LAB_14eaab10f;
    }
  }
  bVar4 = false;
LAB_14eaab10f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return bVar4;
}

// FetchMetadata @ 14eaab140

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchMetadata
          (FWmfMediaTracks *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaBinarySample,1> *param_2)

{
  code *pcVar1;
  long64 lVar2;
  long64 lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uchar local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  local_28 = (param_1->LowerBound).Type.Value;
  uStack_27 = (param_1->LowerBound).field_0x1;
  uStack_26 = (param_1->LowerBound).field_0x2;
  uStack_25 = (param_1->LowerBound).field_0x3;
  uStack_24 = (param_1->LowerBound).field_0x4;
  uStack_23 = (param_1->LowerBound).field_0x5;
  uStack_22 = (param_1->LowerBound).field_0x6;
  uStack_21 = (param_1->LowerBound).field_0x7;
  uStack_20 = (undefined1)(param_1->LowerBound).Value.Ticks;
  uStack_1f = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 1);
  uStack_1e = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 2);
  uStack_1d = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 3);
  uStack_1c = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 4);
  uStack_1b = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 5);
  uStack_1a = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 6);
  uStack_19 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 7);
  pcVar1 = *(code **)(this->_padding_ + 0x20);
  if (local_28 == '\x02') {
    local_b8 = CONCAT31(local_b8._1_3_,2);
    uStack_b0 = 0;
    uStack_ac = 0x80000000;
    uStack_a0 = CONCAT31(uStack_a0._1_3_,2);
    local_98 = 0;
    uStack_94 = 0x80000000;
  }
  else {
    if ((param_1->UpperBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar2 = (param_1->UpperBound).Value.Ticks;
    if ((param_1->LowerBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar3 = (param_1->LowerBound).Value.Ticks;
    uStack_70 = uStack_70 & 0xffffff00;
    local_68 = (undefined4)lVar2;
    uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_88 = CONCAT31(local_88._1_3_,1);
    uStack_80 = (undefined4)lVar3;
    uStack_7c = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_b8 = local_88;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    uStack_a0 = uStack_70;
    local_98 = local_68;
    uStack_94 = uStack_64;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  local_48 = 0;
  local_58[0] = local_b8;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  uStack_40 = uStack_a0;
  local_38 = local_98;
  uStack_34 = uStack_94;
  uVar5 = (*pcVar1)(this,local_58,param_2);
  return (bool)uVar5;
}

// FetchMetadata @ 14eaab280

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchMetadata
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaBinarySample,1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  IMediaBinarySample *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  IMediaBinarySample *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRange<FMediaTimeStamp> local_38;
  
  local_68 = (IMediaBinarySample *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  plVar1 = &(this->MetadataSampleQueue)._padding_;
  cVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_68);
  if (cVar3 != '\0') {
    if ((local_68 == (IMediaBinarySample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)((longlong)*local_68 + 0x18))(local_68,&local_58);
    if ((local_68 == (IMediaBinarySample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*local_68 + 8))(local_68,local_res8);
    local_38.UpperBound.Value.Time.Ticks = *plVar6 + CONCAT44(uStack_54,local_58);
    local_38.LowerBound.Type.Value = '\x01';
    local_38.LowerBound.Value.Time.Ticks._0_4_ = local_58;
    local_38.LowerBound.Value.Time.Ticks._4_4_ = uStack_54;
    local_38.LowerBound.Value.SequenceIndex = iStack_50;
    local_38.LowerBound.Value.LoopIndex = iStack_4c;
    local_38.UpperBound.Type.Value = '\0';
    local_38.UpperBound.Value.SequenceIndex = iStack_50;
    local_38.UpperBound.Value.LoopIndex = iStack_4c;
    bVar4 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_38);
    if ((bVar4) && (cVar3 = (**(code **)*plVar1)(plVar1,&local_68), cVar3 != '\0')) {
      if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = param_2->Object;
      pTStack_40 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = local_68;
      (param_2->SharedReferenceCount).ReferenceController = pTStack_60;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      bVar4 = true;
      goto LAB_14eaab3c0;
    }
  }
  bVar4 = false;
LAB_14eaab3c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return bVar4;
}

// FetchVideo @ 14eaab3f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchVideo
          (FWmfMediaTracks *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  code *pcVar1;
  long64 lVar2;
  long64 lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uchar local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  local_28 = (param_1->LowerBound).Type.Value;
  uStack_27 = (param_1->LowerBound).field_0x1;
  uStack_26 = (param_1->LowerBound).field_0x2;
  uStack_25 = (param_1->LowerBound).field_0x3;
  uStack_24 = (param_1->LowerBound).field_0x4;
  uStack_23 = (param_1->LowerBound).field_0x5;
  uStack_22 = (param_1->LowerBound).field_0x6;
  uStack_21 = (param_1->LowerBound).field_0x7;
  uStack_20 = (undefined1)(param_1->LowerBound).Value.Ticks;
  uStack_1f = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 1);
  uStack_1e = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 2);
  uStack_1d = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 3);
  uStack_1c = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 4);
  uStack_1b = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 5);
  uStack_1a = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 6);
  uStack_19 = *(undefined1 *)((longlong)&(param_1->LowerBound).Value.Ticks + 7);
  pcVar1 = *(code **)(this->_padding_ + 0x40);
  if (local_28 == '\x02') {
    local_b8 = CONCAT31(local_b8._1_3_,2);
    uStack_b0 = 0;
    uStack_ac = 0x80000000;
    uStack_a0 = CONCAT31(uStack_a0._1_3_,2);
    local_98 = 0;
    uStack_94 = 0x80000000;
  }
  else {
    if ((param_1->UpperBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar2 = (param_1->UpperBound).Value.Ticks;
    if ((param_1->LowerBound).Type.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    lVar3 = (param_1->LowerBound).Value.Ticks;
    uStack_70 = uStack_70 & 0xffffff00;
    local_68 = (undefined4)lVar2;
    uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_88 = CONCAT31(local_88._1_3_,1);
    uStack_80 = (undefined4)lVar3;
    uStack_7c = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_b8 = local_88;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    uStack_a0 = uStack_70;
    local_98 = local_68;
    uStack_94 = uStack_64;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  local_48 = 0;
  local_58[0] = local_b8;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  uStack_40 = uStack_a0;
  local_38 = local_98;
  uStack_34 = uStack_94;
  uVar5 = (*pcVar1)(this,local_58,param_2);
  return (bool)uVar5;
}

// FetchVideo @ 14eaab530

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::FetchVideo
          (FWmfMediaTracks *this,TRange<FMediaTimeStamp> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  IMediaTextureSample *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  IMediaTextureSample *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TRange<FMediaTimeStamp> local_48;
  
  local_78 = (IMediaTextureSample *)0x0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  cVar2 = (**(code **)((this->VideoSampleQueue)._padding_ + 8))
                    (&(this->VideoSampleQueue)._padding_,&local_78);
  if (cVar2 != '\0') {
    if ((local_78 == (IMediaTextureSample *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (**(code **)((longlong)*local_78 + 0x60))(local_78,&local_68);
    if ((local_78 == (IMediaTextureSample *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    plVar5 = (longlong *)(**(code **)((longlong)*local_78 + 0x20))(local_78,local_res8);
    local_48.UpperBound.Value.Time.Ticks = *plVar5 + CONCAT44(uStack_64,local_68);
    local_48.LowerBound.Type.Value = '\x01';
    local_48.LowerBound.Value.Time.Ticks._0_4_ = local_68;
    local_48.LowerBound.Value.Time.Ticks._4_4_ = uStack_64;
    local_48.LowerBound.Value.SequenceIndex = iStack_60;
    local_48.LowerBound.Value.LoopIndex = iStack_5c;
    local_48.UpperBound.Type.Value = '\0';
    local_48.UpperBound.Value.SequenceIndex = iStack_60;
    local_48.UpperBound.Value.LoopIndex = iStack_5c;
    bVar3 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_48);
    if (bVar3) {
      FWmfMediaSession::RequestMoreVideoData(this->Session);
      cVar2 = (**(code **)(this->VideoSampleQueue)._padding_)
                        (&(this->VideoSampleQueue)._padding_,&local_78);
      if (cVar2 != '\0') {
        if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_70->SharedReferenceCount =
               (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58 = param_2->Object;
        pTStack_50 = (param_2->SharedReferenceCount).ReferenceController;
        param_2->Object = local_78;
        (param_2->SharedReferenceCount).ReferenceController = pTStack_70;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_50);
        bVar3 = true;
        goto LAB_14eaab686;
      }
    }
  }
  bVar3 = false;
LAB_14eaab686:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return bVar3;
}

// FlushSamples @ 14eaac050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::FlushSamples(FWmfMediaTracks *this)

{
  FWmfMediaSession *this_00;
  undefined ***pppuVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined **local_78;
  FWmfMediaTracks *pFStack_70;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  FWmfMediaTracks *pFStack_40;
  undefined ***local_30;
  FBaseWorkItemState *local_28;
  FSharedReferencer<1> FStack_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = this->Session;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWmfMediaTracks::FlushSamples'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWmfMediaTracks::FlushSamples'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
                ::Call;
  local_30 = (undefined ***)0x0;
  local_60 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWmfMediaTracks::FlushSamples'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_88 = 0;
  local_28 = (FBaseWorkItemState *)0x0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFStack_70 = this;
  pFStack_40 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FWmfMediaSession::EnqueueWorkItem(this_00,(FWorkItem *)local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_88 != 0) {
    pppuVar1 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar1 = local_60;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// GetAudioFormat @ 14eaac7b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFormat * __thiscall FWmfMediaTracks::GetAudioFormat(FWmfMediaTracks *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FFormat *pFVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (param_1 < (this->AudioTracks).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->AudioTracks).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFormat *)(*pcVar2)();
      return pFVar4;
    }
    pFVar1 = (this->AudioTracks).AllocatorInstance.Data;
    if ((-1 < param_2) && (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0x60 + 0x20))) {
      uVar5 = 0;
      if (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0x60 + 0x20)) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FFormat *)(*pcVar2)();
        return pFVar4;
      }
      return (FFormat *)
             ((longlong)param_2 * 0x70 + *(longlong *)(pFVar1 + (longlong)param_1 * 0x60 + 0x18));
    }
  }
  return (FFormat *)0x0;
}

// GetAudioTrackFormat @ 14eaac8b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::GetAudioTrackFormat
          (FWmfMediaTracks *this,int param_1,int param_2,FMediaAudioTrackFormat *param_3)

{
  int *lpCriticalSection;
  FFormat *pFVar1;
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = GetAudioFormat((FWmfMediaTracks *)&this[-1].SeekIndex,param_1,param_2);
  if (pFVar1 != (FFormat *)0x0) {
    param_3->BitsPerSample = (pFVar1->Audio).BitsPerSample;
    param_3->NumChannels = (pFVar1->Audio).NumChannels;
    param_3->SampleRate = (pFVar1->Audio).SampleRate;
    ::FString::operator=(&param_3->TypeName,&pFVar1->TypeName);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar1 != (FFormat *)0x0;
}

// GetDuration @ 14eaad0c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall FWmfMediaTracks::GetDuration(FWmfMediaTracks *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMFPresentationDescriptor *pIVar1;
  int iVar2;
  longlong lVar3;
  longlong *in_RDX;
  longlong local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (this->PresentationDescriptor).RawPointer;
    if (pIVar1 == (IMFPresentationDescriptor *)0x0) {
      *in_RDX = 0;
    }
    else {
      local_res8 = 0;
      iVar2 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&MF_PD_DURATION,&local_res8);
      if (iVar2 < 0) {
        lVar3 = 0x7fffffffffffffff;
      }
      else {
        lVar3 = local_res8 + -10000;
        local_res8 = lVar3;
      }
      *in_RDX = lVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (FTimespan)(long64)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFlags @ 14eaad600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::GetFlags(FWmfMediaTracks *this,bool *param_1,bool *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *param_1 = this->MediaSourceChanged;
    *param_2 = this->SelectionChanged;
                    /* WARNING: Could not recover jumptable at 0x00014eaad65e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumTrackFormats @ 14eaadf60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
FWmfMediaTracks::GetNumTrackFormats(FWmfMediaTracks *this,EMediaTrackType param_1,int param_2)

{
  int *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == Audio) {
    if (-1 < param_2) {
      if (param_2 < *(int *)&(this->AudioTracks).AllocatorInstance.Data) {
        uVar4 = 0;
        if (param_2 < *(int *)&(this->AudioTracks).AllocatorInstance.Data) {
          uVar4 = (uint)~param_2 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
        }
        iVar3 = *(int *)((longlong)param_2 * 0x60 + 0x20 +
                        *(longlong *)&(this->AudioSampleQueue).NumDroppedSamples);
        goto LAB_14eaadfbc;
      }
LAB_14eaae05b:
      if (param_2 < *(int *)&(this->MetadataTracks).AllocatorInstance.Data) {
        iVar3 = 1;
        goto LAB_14eaadfbc;
      }
LAB_14eaae075:
      if (param_2 < *(int *)&(this->CaptionTracks).AllocatorInstance.Data) {
        iVar3 = 1;
        goto LAB_14eaadfbc;
      }
LAB_14eaae08f:
      if (param_2 < *(int *)&(this->VideoTracks).AllocatorInstance.Data) {
        uVar4 = 0;
        if (param_2 < *(int *)&(this->VideoTracks).AllocatorInstance.Data) {
          uVar4 = (uint)~param_2 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
        }
        iVar3 = *(int *)((longlong)param_2 * 0x60 + 0x20 +
                        *(longlong *)&(this->VideoSampleQueue).NumDroppedSamples);
        goto LAB_14eaadfbc;
      }
    }
  }
  else if (param_1 == Caption) {
    if (-1 < param_2) goto LAB_14eaae075;
  }
  else if (param_1 == Metadata) {
    if (-1 < param_2) goto LAB_14eaae05b;
  }
  else if ((param_1 == Video) && (-1 < param_2)) goto LAB_14eaae08f;
  iVar3 = 0;
LAB_14eaadfbc:
  if (lpCriticalSection != (int *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar3;
}

// GetNumTracks @ 14eaae110

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall FWmfMediaTracks::GetNumTracks(FWmfMediaTracks *this,EMediaTrackType param_1)

{
  int *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 == Audio) {
      iVar1 = *(int *)&(this->AudioTracks).AllocatorInstance.Data;
    }
    else if (param_1 == Caption) {
      iVar1 = *(int *)&(this->CaptionTracks).AllocatorInstance.Data;
    }
    else if (param_1 == Metadata) {
      iVar1 = *(int *)&(this->MetadataTracks).AllocatorInstance.Data;
    }
    else if (param_1 == Video) {
      iVar1 = *(int *)&(this->VideoTracks).AllocatorInstance.Data;
    }
    else {
      iVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSelectedTrack @ 14eaaf0f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall FWmfMediaTracks::GetSelectedTrack(FWmfMediaTracks *this,EMediaTrackType param_1)

{
  if (param_1 == Audio) {
    return *(int *)&(this->PresentationDescriptor).RawPointer;
  }
  if (param_1 == Caption) {
    return *(int *)((longlong)&(this->PresentationDescriptor).RawPointer + 4);
  }
  if (param_1 == Metadata) {
    return this->SelectedAudioTrack;
  }
  if (param_1 != Video) {
    return -1;
  }
  return this->SelectedCaptionTrack;
}

// GetTrack @ 14eab0860

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTrack * __thiscall
FWmfMediaTracks::GetTrack(FWmfMediaTracks *this,EMediaTrackType param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FTrack *pFVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  if (param_1 == Audio) {
    if (param_2 < 0) {
      return (FTrack *)0x0;
    }
    if (param_2 < (this->AudioTracks).ArrayNum) {
      uVar4 = 0;
      if (param_2 < (this->AudioTracks).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTrack *)(*pcVar1)();
        return pFVar3;
      }
      return (FTrack *)((this->AudioTracks).AllocatorInstance.Data + lVar5 * 0x60);
    }
LAB_14eab0915:
    if (param_2 < (this->MetadataTracks).ArrayNum) {
      uVar4 = 0;
      if (param_2 < (this->MetadataTracks).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTrack *)(*pcVar1)();
        return pFVar3;
      }
      return (FTrack *)((this->MetadataTracks).AllocatorInstance.Data + lVar5 * 0x60);
    }
  }
  else {
    if (param_1 != Caption) {
      if (param_1 != Metadata) {
        if (param_1 != Video) {
          return (FTrack *)0x0;
        }
        if (param_2 < 0) {
          return (FTrack *)0x0;
        }
        goto LAB_14eab09fd;
      }
      if (param_2 < 0) {
        return (FTrack *)0x0;
      }
      goto LAB_14eab0915;
    }
    if (param_2 < 0) {
      return (FTrack *)0x0;
    }
  }
  if (param_2 < (this->CaptionTracks).ArrayNum) {
    uVar4 = 0;
    if (param_2 < (this->CaptionTracks).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTrack *)(*pcVar1)();
      return pFVar3;
    }
    return (FTrack *)((this->CaptionTracks).AllocatorInstance.Data + lVar5 * 0x60);
  }
LAB_14eab09fd:
  if ((this->VideoTracks).ArrayNum <= param_2) {
    return (FTrack *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (this->VideoTracks).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTrack *)(*pcVar1)();
    return pFVar3;
  }
  return (FTrack *)((this->VideoTracks).AllocatorInstance.Data + lVar5 * 0x60);
}

// GetTrackDisplayName @ 14eab0a80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FText * __thiscall
FWmfMediaTracks::GetTrackDisplayName
          (FWmfMediaTracks *this,FText *__return_storage_ptr__,EMediaTrackType param_1,int param_2)

{
  int *lpCriticalSection;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = 0;
  if (param_1 == Audio) {
    if ((param_2 < 0) || (*(int *)&(this->AudioTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab0cac;
    if (param_2 < *(int *)&(this->AudioTracks).AllocatorInstance.Data) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    lVar5 = *(longlong *)&(this->AudioSampleQueue).NumDroppedSamples;
  }
  else if (param_1 == Caption) {
    if ((param_2 < 0) || (*(int *)&(this->CaptionTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab0cac;
    if (param_2 < *(int *)&(this->CaptionTracks).AllocatorInstance.Data) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    lVar5 = *(longlong *)&(this->CaptionSampleQueue).NumDroppedSamples;
  }
  else if (param_1 == Metadata) {
    if ((param_2 < 0) || (*(int *)&(this->MetadataTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab0cac;
    if (param_2 < *(int *)&(this->MetadataTracks).AllocatorInstance.Data) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    lVar5 = *(longlong *)&(this->MetadataSampleQueue).NumDroppedSamples;
  }
  else {
    if (((param_1 != Video) || (param_2 < 0)) ||
       (*(int *)&(this->VideoTracks).AllocatorInstance.Data <= param_2)) {
LAB_14eab0cac:
      pFVar4 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (pFVar4->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      __return_storage_ptr__->Flags = pFVar4->Flags;
      goto LAB_14eab0cd8;
    }
    if (param_2 < *(int *)&(this->VideoTracks).AllocatorInstance.Data) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    lVar5 = *(longlong *)&(this->VideoSampleQueue).NumDroppedSamples;
  }
  FText::FText(__return_storage_ptr__,(FText *)(lVar5 + 8 + (longlong)param_2 * 0x60));
  if (lpCriticalSection == (int *)0x0) {
    return __return_storage_ptr__;
  }
LAB_14eab0cd8:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetTrackFormat @ 14eab0d10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

int __thiscall
FWmfMediaTracks::GetTrackFormat(FWmfMediaTracks *this,EMediaTrackType param_1,int param_2)

{
  int *lpCriticalSection;
  FTrack *pFVar1;
  int iVar2;
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = GetTrack((FWmfMediaTracks *)&this[-1].SeekIndex,param_1,param_2);
    if (pFVar1 == (FTrack *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = pFVar1->SelectedFormat;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetTrackLanguage @ 14eab0d90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FWmfMediaTracks::GetTrackLanguage
          (FWmfMediaTracks *this,FString *__return_storage_ptr__,EMediaTrackType param_1,int param_2
          )

{
  int *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong lVar4;
  uint uVar5;
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = 0;
  if (param_1 == Audio) {
    if ((param_2 < 0) || (*(int *)&(this->AudioTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab0fb7;
    if (param_2 < *(int *)&(this->AudioTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->AudioSampleQueue).NumDroppedSamples;
  }
  else if (param_1 == Caption) {
    if ((param_2 < 0) || (*(int *)&(this->CaptionTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab0fb7;
    if (param_2 < *(int *)&(this->CaptionTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->CaptionSampleQueue).NumDroppedSamples;
  }
  else if (param_1 == Metadata) {
    if ((param_2 < 0) || (*(int *)&(this->MetadataTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab0fb7;
    if (param_2 < *(int *)&(this->MetadataTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->MetadataSampleQueue).NumDroppedSamples;
  }
  else {
    if (((param_1 != Video) || (param_2 < 0)) ||
       (*(int *)&(this->VideoTracks).AllocatorInstance.Data <= param_2)) {
LAB_14eab0fb7:
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      goto LAB_14eab0fc5;
    }
    if (param_2 < *(int *)&(this->VideoTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->VideoSampleQueue).NumDroppedSamples;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)(lVar4 + 0x30 + (longlong)param_2 * 0x60));
  if (lpCriticalSection == (int *)0x0) {
    return __return_storage_ptr__;
  }
LAB_14eab0fc5:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetTrackName @ 14eab1000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FWmfMediaTracks::GetTrackName
          (FWmfMediaTracks *this,FString *__return_storage_ptr__,EMediaTrackType param_1,int param_2
          )

{
  int *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong lVar4;
  uint uVar5;
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = 0;
  if (param_1 == Audio) {
    if ((param_2 < 0) || (*(int *)&(this->AudioTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab1227;
    if (param_2 < *(int *)&(this->AudioTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->AudioSampleQueue).NumDroppedSamples;
  }
  else if (param_1 == Caption) {
    if ((param_2 < 0) || (*(int *)&(this->CaptionTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab1227;
    if (param_2 < *(int *)&(this->CaptionTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->CaptionSampleQueue).NumDroppedSamples;
  }
  else if (param_1 == Metadata) {
    if ((param_2 < 0) || (*(int *)&(this->MetadataTracks).AllocatorInstance.Data <= param_2))
    goto LAB_14eab1227;
    if (param_2 < *(int *)&(this->MetadataTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->MetadataSampleQueue).NumDroppedSamples;
  }
  else {
    if (((param_1 != Video) || (param_2 < 0)) ||
       (*(int *)&(this->VideoTracks).AllocatorInstance.Data <= param_2)) {
LAB_14eab1227:
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      goto LAB_14eab1235;
    }
    if (param_2 < *(int *)&(this->VideoTracks).AllocatorInstance.Data) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    lVar4 = *(longlong *)&(this->VideoSampleQueue).NumDroppedSamples;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)(lVar4 + 0x40 + (longlong)param_2 * 0x60));
  if (lpCriticalSection == (int *)0x0) {
    return __return_storage_ptr__;
  }
LAB_14eab1235:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetVideoFormat @ 14eab1480

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFormat * __thiscall FWmfMediaTracks::GetVideoFormat(FWmfMediaTracks *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FFormat *pFVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (param_1 < (this->VideoTracks).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->VideoTracks).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFormat *)(*pcVar2)();
      return pFVar4;
    }
    pFVar1 = (this->VideoTracks).AllocatorInstance.Data;
    if ((-1 < param_2) && (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0x60 + 0x20))) {
      uVar5 = 0;
      if (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0x60 + 0x20)) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FFormat *)(*pcVar2)();
        return pFVar4;
      }
      return (FFormat *)
             ((longlong)param_2 * 0x70 + *(longlong *)(pFVar1 + (longlong)param_1 * 0x60 + 0x18));
    }
  }
  return (FFormat *)0x0;
}

// GetVideoTrackFormat @ 14eab1580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::GetVideoTrackFormat
          (FWmfMediaTracks *this,int param_1,int param_2,FMediaVideoTrackFormat *param_3)

{
  int *lpCriticalSection;
  TRangeBound<float> TVar1;
  FFormat *pFVar2;
  
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = GetVideoFormat((FWmfMediaTracks *)&this[-1].SeekIndex,param_1,param_2);
  if (pFVar2 != (FFormat *)0x0) {
    (param_3->Dim).field0_0x0 = (pFVar2->Video).OutputDim.field0_0x0;
    param_3->FrameRate = (pFVar2->Video).FrameRate;
    TVar1 = (pFVar2->Video).FrameRates.UpperBound;
    (param_3->FrameRates).LowerBound = (pFVar2->Video).FrameRates.LowerBound;
    (param_3->FrameRates).UpperBound = TVar1;
    ::FString::operator=(&param_3->TypeName,&pFVar2->TypeName);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar2 != (FFormat *)0x0;
}

// HandleMediaSamplerAudioSample @ 14eab17a0

/* WARNING: Removing unreachable block (ram,0x00014eab19ec) */
/* WARNING: Removing unreachable block (ram,0x00014eab19f6) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaTracks::HandleMediaSamplerAudioSample
          (FWmfMediaTracks *this,uchar *param_1,uint param_2,FTimespan param_3,FTimespan param_4)

{
  atomic<int> *paVar1;
  int *piVar2;
  int *piVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FWmfMediaAudioSamplePool *pFVar8;
  undefined8 *puVar9;
  code *pcVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FFormat *pFVar16;
  FWmfMediaAudioSample *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  TReferenceControllerBase<1> *pTVar20;
  int iVar21;
  FWmfMediaAudioSample *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined1 local_48 [16];
  TReferenceControllerBase<1> *pTVar22;
  
  if (param_1 != (uchar *)0x0) {
    pTVar22 = (TReferenceControllerBase<1> *)0x0;
    iVar21 = 0;
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar5 = this->SelectedAudioTrack;
    if ((-1 < (int)uVar5) && ((int)uVar5 < (this->AudioTracks).ArrayNum)) {
      uVar13 = 0;
      if ((int)uVar5 < (this->AudioTracks).ArrayNum) {
        uVar13 = ~uVar5 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar16 = GetAudioFormat(this,this->SelectedAudioTrack,
                               *(int *)((this->AudioTracks).AllocatorInstance.Data +
                                       (longlong)(int)uVar5 * 0x60 + 0x54));
      if ((pFVar16 != (FFormat *)0x0) &&
         (iVar14 = (**(code **)((this->AudioSampleQueue)._padding_ + 8))(&this->AudioSampleQueue),
         iVar14 < 0x200)) {
        uVar5 = (pFVar16->Audio).NumChannels;
        uVar13 = (pFVar16->Audio).SampleRate;
        pFVar8 = this->AudioSamplePool;
        pFVar17 = TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>
                  ::TStorage::Acquire(*(TStorage **)pFVar8,true);
        if ((pFVar17 == (FWmfMediaAudioSample *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaObjectPool.h"
                                ,0x139,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar19 = *(longlong *)pFVar8;
        pTVar20 = *(TReferenceControllerBase<1> **)&pFVar8->field_0x8;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->WeakReferenceCount = (atomic<int>)((int)pTVar20->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar18 = ::operator_new(0x28);
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          pTVar18[1]._padding_ = lVar19;
          *(TReferenceControllerBase<1> **)&pTVar18[1].SharedReferenceCount = pTVar20;
          pTVar18->SharedReferenceCount = (atomic<int>)0x1;
          pTVar18->WeakReferenceCount = (atomic<int>)0x1;
          pTVar18->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFWmfMediaAudioSample__VTDeleter___TMediaObjectPool_VFWmfMediaAudioSample__V__TMediaPoolDefaultObjectAllocator_VFWmfMediaAudioSample_______00_SharedPointerInternals__6B_
          ;
          pTVar18[2]._padding_ = (longlong)pFVar17;
          pTVar20 = pTVar22;
          pTVar22 = pTVar18;
        }
        if ((pFVar17 == (FWmfMediaAudioSample *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InRawPtrProxy.Object != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x115,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar20->WeakReferenceCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar20->_padding_ + 8))(pTVar20,1);
          }
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar14 = this->SeekIndex;
        iVar11 = this->LoopIndex;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar6 = (pFVar16->Audio).SampleRate;
        uVar7 = (pFVar16->Audio).NumChannels;
        if (param_2 != 0) {
          if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
          }
          piVar2 = &(pFVar17->Buffer).ArrayMax;
          piVar3 = &(pFVar17->Buffer).ArrayNum;
          *piVar3 = 0;
          if (*piVar2 < (int)param_2) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_2,&(pFVar17->Buffer).AllocatorInstance,0,piVar2);
          }
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,param_2,&(pFVar17->Buffer).AllocatorInstance,piVar3,piVar2);
          memcpy((pFVar17->Buffer).AllocatorInstance.Data + iVar15,param_1,(longlong)(int)param_2);
          pFVar17->Channels = uVar7;
          (pFVar17->Duration).Ticks =
               ((ulonglong)param_2 * 10000000) / ((ulonglong)(uVar5 * uVar13) * 2);
          pFVar17->SampleRate = uVar6;
          (pFVar17->Time).Time.Ticks = param_4.Ticks;
          (pFVar17->Time).SequenceIndex = iVar14;
          (pFVar17->Time).LoopIndex = iVar11;
          lVar19 = (**(code **)(pFVar17->_padding_ + 0x30))(pFVar17,local_48);
          if ((this->NextMinSequenceIndex).bIsSet != false) {
            iVar21 = (this->NextMinSequenceIndex).TypedValue;
          }
          if (iVar21 <= *(int *)(lVar19 + 8)) {
            puVar9 = (undefined8 *)(this->AudioSampleQueue)._padding_;
            if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_58 = pFVar17;
            pTStack_50 = pTVar22;
            (*(code *)*puVar9)(&this->AudioSampleQueue,&local_58);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_50);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// HandleMediaSamplerCaptionSample @ 14eab1b80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaTracks::HandleMediaSamplerCaptionSample
          (FWmfMediaTracks *this,uchar *param_1,uint param_2,FTimespan param_3,FTimespan param_4)

{
  FWmfMediaOverlaySample *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FMediaTimeStamp local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  if (param_1 != (uchar *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    uVar10 = 0;
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_48 = (FWmfMediaOverlaySample *)CONCAT44(local_48._4_4_,(undefined4)local_48);
    if ((-1 < this->SelectedCaptionTrack) &&
       (local_48 = (FWmfMediaOverlaySample *)CONCAT44(local_48._4_4_,(undefined4)local_48),
       this->SelectedCaptionTrack < (this->CaptionTracks).ArrayNum)) {
      iVar5 = (**(code **)((this->CaptionSampleQueue)._padding_ + 8))();
      if (iVar5 < 0x100) {
        uVar6 = uVar10;
        if (this->SelectedCaptionTrack < (this->CaptionTracks).ArrayNum) {
          uVar6 = (uint)~this->SelectedCaptionTrack >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar7 = ::operator_new(0x40);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          pTVar7->SharedReferenceCount = (atomic<int>)0x1;
          pTVar7->WeakReferenceCount = (atomic<int>)0x1;
          pTVar7->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFWmfMediaOverlaySample___00_SharedPointerInternals__6B_
          ;
          pTVar7[1]._padding_ = (longlong)&___7FWmfMediaOverlaySample__6B_;
          pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
          FText::FText((FText *)(pTVar7 + 2));
          pTVar7[3]._padding_ = 0;
          pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
          pTVar9 = pTVar7;
        }
        this_00 = (FWmfMediaOverlaySample *)(pTVar9 + 1);
        if ((this_00 == (FWmfMediaOverlaySample *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
        iVar5 = this->LoopIndex;
        iVar1 = this->SeekIndex;
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
        local_58.Time.Ticks = param_4.Ticks;
        local_58.SequenceIndex = iVar1;
        local_58.LoopIndex = iVar5;
        bVar4 = FWmfMediaOverlaySample::Initialize(this_00,(char *)param_1,&local_58,param_3);
        if (bVar4) {
          lVar8 = (**(code **)(this_00->_padding_ + 0x18))(this_00,local_38);
          if ((this->NextMinSequenceIndex).bIsSet != false) {
            uVar10 = (this->NextMinSequenceIndex).TypedValue;
          }
          if ((int)uVar10 <= *(int *)(lVar8 + 8)) {
            puVar2 = (undefined8 *)(this->CaptionSampleQueue)._padding_;
            uStack_60 = SUB84(pTVar9,0);
            uStack_5c = (undefined4)((ulonglong)pTVar9 >> 0x20);
            uStack_40 = uStack_60;
            uStack_3c = uStack_5c;
            if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_48 = this_00;
            (*(code *)*puVar2)(&this->CaptionSampleQueue,&local_48);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)CONCAT44(uStack_3c,uStack_40));
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// HandleMediaSamplerClock @ 14eab1e10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaTracks::HandleMediaSamplerClock
          (FWmfMediaTracks *this,EWmfMediaSamplerClockEvent param_1,EMediaTrackType param_2)

{
  return;
}

// HandleMediaSamplerMetadataSample @ 14eab1e20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaTracks::HandleMediaSamplerMetadataSample
          (FWmfMediaTracks *this,uchar *param_1,uint param_2,FTimespan param_3,FTimespan param_4)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  int iVar12;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 local_38 [16];
  
  if (param_1 != (uchar *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    iVar12 = 0;
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((-1 < this->SelectedMetadataTrack) &&
        (this->SelectedMetadataTrack < (this->MetadataTracks).ArrayNum)) &&
       (iVar6 = (**(code **)((this->MetadataSampleQueue)._padding_ + 8))(), iVar6 < 0x100)) {
      uVar7 = 0;
      if (this->SelectedMetadataTrack < (this->MetadataTracks).ArrayNum) {
        uVar7 = (uint)~this->SelectedMetadataTrack >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar9 = ::operator_new(0x40);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFWmfMediaBinarySample___00_SharedPointerInternals__6B_
        ;
        pTVar9[1]._padding_ = (longlong)&___7FWmfMediaBinarySample__6B_;
        pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[2]._padding_ = 0;
        pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[3]._padding_ = 0;
        pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar11 = pTVar9;
      }
      pTVar9 = pTVar11 + 1;
      if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar6 = this->SeekIndex;
      iVar4 = this->LoopIndex;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (param_2 != 0) {
        if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
        }
        piVar1 = (int *)((longlong)&pTVar11[2]._padding_ + 4);
        iVar8 = *piVar1;
        *(int *)&pTVar11[2]._padding_ = 0;
        if (iVar8 < (int)param_2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2,(ForAnyElementType *)&pTVar11[1].SharedReferenceCount,0,piVar1);
        }
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,param_2,(ForAnyElementType *)&pTVar11[1].SharedReferenceCount,
                           (int *)(pTVar11 + 2),piVar1);
        memcpy((void *)((longlong)iVar8 + *(longlong *)&pTVar11[1].SharedReferenceCount),param_1,
               (longlong)(int)param_2);
        pTVar11[2].SharedReferenceCount = (atomic<int>)(int)param_3.Ticks;
        pTVar11[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)param_3.Ticks >> 0x20);
        pTVar11[3]._padding_ = param_4.Ticks;
        pTVar11[3].SharedReferenceCount = (atomic<int>)iVar6;
        pTVar11[3].WeakReferenceCount = (atomic<int>)iVar4;
        lVar10 = (**(code **)(pTVar9->_padding_ + 0x18))(pTVar9,local_38);
        if ((this->NextMinSequenceIndex).bIsSet != false) {
          iVar12 = (this->NextMinSequenceIndex).TypedValue;
        }
        if (iVar12 <= *(int *)(lVar10 + 8)) {
          puVar2 = (undefined8 *)(this->MetadataSampleQueue)._padding_;
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_48 = pTVar9;
          pTStack_40 = pTVar11;
          (*(code *)*puVar2)(&this->MetadataSampleQueue,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_40);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// HandleMediaSamplerVideoSample @ 14eab2110

/* WARNING: Removing unreachable block (ram,0x00014eab23b2) */
/* WARNING: Removing unreachable block (ram,0x00014eab23be) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaTracks::HandleMediaSamplerVideoSample
          (FWmfMediaTracks *this,uchar *param_1,uint param_2,FTimespan param_3,FTimespan param_4)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  uint uVar3;
  int iVar4;
  EMediaTextureSampleFormat EVar5;
  FWmfMediaTextureSamplePool *pFVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FFormat *pFVar12;
  FWmfMediaTextureSample *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint uVar18;
  float fVar19;
  FWmfMediaTextureSample *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined1 local_48 [16];
  
  if (param_1 != (uchar *)0x0) {
    uVar18 = 0;
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = this->SelectedVideoTrack;
    if ((-1 < (int)uVar3) && ((int)uVar3 < (this->VideoTracks).ArrayNum)) {
      uVar10 = uVar18;
      if ((int)uVar3 < (this->VideoTracks).ArrayNum) {
        uVar10 = ~uVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar12 = GetVideoFormat(this,this->SelectedVideoTrack,
                               *(int *)((this->VideoTracks).AllocatorInstance.Data +
                                       (longlong)(int)uVar3 * 0x60 + 0x54));
      if (((pFVar12 != (FFormat *)0x0) &&
          ((pFVar12->Video).BufferDim.field0_0x0._s_0.Y * (pFVar12->Video).BufferStride <= param_2))
         && (iVar11 = (**(code **)((this->VideoSampleQueue)._padding_ + 8))(&this->VideoSampleQueue)
            , iVar11 < 8)) {
        if (param_3.Ticks == 0) {
          fVar19 = (pFVar12->Video).FrameRate;
          if (fVar19 <= 0.0) {
            fVar19 = __real_41f00000;
          }
          param_3.Ticks = (long64)(__real_4b189680 / fVar19);
        }
        pFVar6 = this->VideoSamplePool;
        pFVar13 = TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>
                  ::TStorage::Acquire(*(TStorage **)pFVar6,true);
        if ((pFVar13 == (FWmfMediaTextureSample *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaObjectPool.h"
                               ,0x139,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = *(longlong *)pFVar6;
        pTVar17 = *(TReferenceControllerBase<1> **)&pFVar6->field_0x8;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar14 = ::operator_new(0x28);
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          pTVar14[1]._padding_ = lVar15;
          *(TReferenceControllerBase<1> **)&pTVar14[1].SharedReferenceCount = pTVar17;
          pTVar14->SharedReferenceCount = (atomic<int>)0x1;
          pTVar14->WeakReferenceCount = (atomic<int>)0x1;
          pTVar14->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFWmfMediaTextureSample__VTDeleter___TMediaObjectPool_VFWmfMediaTextureSample__V__TMediaPoolDefaultObjectAllocator_VFWmfMediaTextureSample_______00_SharedPointerInternals__6B_
          ;
          pTVar14[2]._padding_ = (longlong)pFVar13;
          pTVar16 = pTVar14;
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
        }
        if ((pFVar13 == (FWmfMediaTextureSample *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InRawPtrProxy.Object != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x115,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar17->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
          }
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar11 = this->LoopIndex;
        iVar4 = this->SeekIndex;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar3 = (pFVar12->Video).BufferStride;
        EVar5 = (pFVar12->Video).SampleFormat;
        if ((((EVar5 != Undefined) && (param_2 != 0)) && (uVar3 != 0)) &&
           (uVar3 * (pFVar12->Video).BufferDim.field0_0x0._s_0.Y <= param_2)) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Reset(&pFVar13->Buffer,param_2);
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Append
                    (&pFVar13->Buffer,param_1,param_2);
          (pFVar13->Duration).Ticks = param_3.Ticks;
          (pFVar13->Dim).field0_0x0 = (pFVar12->Video).BufferDim.field0_0x0;
          (pFVar13->OutputDim).field0_0x0 = (pFVar12->Video).OutputDim.field0_0x0;
          pFVar13->SampleFormat = EVar5;
          pFVar13->Stride = uVar3;
          (pFVar13->Time).Time.Ticks = param_4.Ticks;
          (pFVar13->Time).SequenceIndex = iVar4;
          (pFVar13->Time).LoopIndex = iVar11;
          lVar15 = (**(code **)(pFVar13->_padding_ + 0x60))(pFVar13,local_48);
          if ((this->NextMinSequenceIndex).bIsSet != false) {
            uVar18 = (this->NextMinSequenceIndex).TypedValue;
          }
          if ((int)uVar18 <= *(int *)(lVar15 + 8)) {
            puVar7 = (undefined8 *)(this->VideoSampleQueue)._padding_;
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_58 = pFVar13;
            pTStack_50 = pTVar16;
            (*(code *)*puVar7)(&this->VideoSampleQueue,&local_58);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_50);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// Initialize @ 14eab3ad0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWmfMediaTracks::Initialize
          (FWmfMediaTracks *this,IMFMediaSource *param_1,FString *param_2,
          FMediaPlayerOptions *param_3)

{
  IMFMediaSource *pIVar1;
  IMFPresentationDescriptor *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  int local_88 [2];
  TComPtr<IMFPresentationDescriptor> local_80;
  LPCRITICAL_SECTION local_78;
  FWindowsRecursiveMutex *local_70;
  FString local_68;
  FString local_58 [2];
  
  Shutdown(this);
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_78 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  this->MediaSourceChanged = true;
  this->SelectionChanged = true;
  if (param_1 == (IMFMediaSource *)0x0) goto LAB_14eab3e95;
  uVar8 = 0;
  local_80.RawPointer = (IMFPresentationDescriptor *)0x0;
  iVar6 = (**(code **)((longlong)*param_1 + 0x40))(param_1,&local_80);
  if (iVar6 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_68,iVar6);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
LAB_14eab3c49:
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_88[0] = 0;
    if ((local_80.RawPointer == (IMFPresentationDescriptor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (**(code **)((longlong)*local_80.RawPointer + 0x108))(local_80.RawPointer,local_88);
    if (iVar6 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(local_58,iVar6);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        local_68.Data.AllocatorInstance.Data = local_58[0].Data.AllocatorInstance.Data;
        goto LAB_14eab3c49;
      }
    }
    else {
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      if ((this->MediaSource).RawPointer != param_1) {
        (**(code **)((longlong)*param_1 + 8))(param_1);
        pIVar1 = (this->MediaSource).RawPointer;
        if (pIVar1 != (IMFMediaSource *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        (this->MediaSource).RawPointer = param_1;
      }
      ::FString::operator=(&this->SourceUrl,param_2);
      if ((this->PresentationDescriptor).RawPointer != local_80.RawPointer) {
        if (local_80.RawPointer != (IMFPresentationDescriptor *)0x0) {
          (**(code **)((longlong)*local_80.RawPointer + 8))(local_80.RawPointer);
        }
        pIVar2 = (this->PresentationDescriptor).RawPointer;
        if (pIVar2 != (IMFPresentationDescriptor *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))();
        }
        (this->PresentationDescriptor).RawPointer = local_80.RawPointer;
      }
      local_70 = (FWindowsRecursiveMutex *)lpCriticalSection;
      EnterCriticalSection(lpCriticalSection);
      pIVar2 = (this->PresentationDescriptor).RawPointer;
      if (pIVar2 == (IMFPresentationDescriptor *)0x0) {
        LeaveCriticalSection(lpCriticalSection);
        uVar11 = uVar8;
      }
      else {
        local_res8 = 0;
        iVar6 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&MF_PD_DURATION,&local_res8);
        if (iVar6 < 0) {
          LeaveCriticalSection(lpCriticalSection);
          uVar11 = 0x7fffffffffffffff;
        }
        else {
          uVar11 = local_res8 - 10000;
          local_res8 = uVar11;
          LeaveCriticalSection(lpCriticalSection);
        }
      }
      (this->CachedDuration).Ticks = uVar11;
      bVar4 = ::FString::StartsWith(param_2,L"vidcap://",9,IgnoreCase);
      bVar9 = 1;
      uVar7 = local_88[0] - 1;
      if (-1 < (int)uVar7) {
        do {
          bVar5 = AddStreamToTracks(this,uVar7,bVar4,&this->Info);
          bVar9 = bVar9 & bVar5;
          ::FString::AppendChars(&this->Info,L"\n",1);
          lpCriticalSection = local_78;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
        if ((bVar9 == 0) && (5 < (byte)LogWmfMedia._0_1_)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
      }
      iVar10 = -1;
      uVar11 = local_res8 >> 0x20;
      local_res8 = local_res8 & 0xffffffff00000000;
      iVar6 = -1;
      if ((param_3 != (FMediaPlayerOptions *)0x0) &&
         (iVar6 = -1, param_3->TrackSelection == UseTrackOptionIndices)) {
        iVar10 = (param_3->Tracks).Caption;
        local_res8 = CONCAT44((int)uVar11,(param_3->Tracks).Video);
        iVar6 = (param_3->Tracks).Metadata;
        uVar8 = (ulonglong)(uint)(param_3->Tracks).Audio;
      }
      (**(code **)(this->_padding_ + 0x48))(&this->_padding_,0,uVar8);
      (**(code **)(this->_padding_ + 0x48))(&this->_padding_,1,iVar10);
      (**(code **)(this->_padding_ + 0x48))(&this->_padding_,2,iVar6);
      (**(code **)(this->_padding_ + 0x48))(&this->_padding_,6,local_res8 & 0xffffffff);
    }
  }
  if (local_80.RawPointer != (IMFPresentationDescriptor *)0x0) {
    (**(code **)((longlong)*local_80.RawPointer + 0x10))();
  }
LAB_14eab3e95:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// IsSampleStillDesired @ 14eab6580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaTracks::IsSampleStillDesired(FWmfMediaTracks *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->NextMinSequenceIndex).bIsSet == false) {
      iVar2 = 0;
    }
    else {
      iVar2 = (this->NextMinSequenceIndex).TypedValue;
    }
    iVar1 = this->SeekIndex;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2 <= iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// LoopStarted @ 14eab6860

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::LoopStarted(FWmfMediaTracks *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWmfMediaStreamSink *pFVar1;
  int iVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = this->LoopIndex + 1;
    if (param_1 < 0.0) {
      iVar2 = this->LoopIndex + -1;
    }
    this->LoopIndex = iVar2;
    pFVar1 = (this->MediaStreamSink).RawPointer;
    if (pFVar1 != (FWmfMediaStreamSink *)0x0) {
      pFVar1->bSeekInProgress = true;
    }
                    /* WARNING: Could not recover jumptable at 0x00014eab68ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PeekVideoSampleTime @ 14eab8840

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaTracks::PeekVideoSampleTime(FWmfMediaTracks *this,FMediaTimeStamp *param_1)

{
  code *pcVar1;
  long64 lVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 *plVar6;
  longlong *plVar7;
  longlong *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18 [16];
  
  local_28 = (longlong *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  plVar7 = &(this->VideoSampleQueue)._padding_;
  cVar3 = (**(code **)(*plVar7 + 8))(plVar7,&local_28);
  FWmfMediaSession::RequestMoreVideoData(this->Session);
  if (cVar3 != '\0') {
    if ((local_28 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    plVar6 = (long64 *)(**(code **)(*local_28 + 0x60))(local_28,local_18);
    lVar2 = plVar6[1];
    (param_1->Time).Ticks = *plVar6;
    param_1->SequenceIndex = (int)lVar2;
    param_1->LoopIndex = (int)((ulonglong)lVar2 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return (bool)cVar3;
}

// ReInitialize @ 14eab9440

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::ReInitialize(FWmfMediaTracks *this)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FArchive *local_res10;
  FString local_48;
  
  if ((this->MediaSource).RawPointer != (IMFMediaSource *)0x0) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    WmfMedia::ResolveMediaSource
              ((TSharedPtr<FArchive,1> *)&local_res10,&local_48,SUB81(&this->SourceUrl,0));
    plVar1 = &this->_padding_;
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,6);
    uVar3 = (**(code **)(*plVar1 + 0x28))(plVar1,6,uVar2);
    uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,0);
    uVar5 = (**(code **)(*plVar1 + 0x28))(plVar1,0,uVar4);
    uVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,1);
    uVar7 = (**(code **)(*plVar1 + 0x28))(plVar1,1,uVar6);
    Initialize(this,(IMFMediaSource *)local_res10,&this->SourceUrl,(FMediaPlayerOptions *)0x0);
    (**(code **)(*plVar1 + 0x50))(plVar1,6,uVar2,uVar3);
    (**(code **)(*plVar1 + 0x48))(plVar1,6,uVar2);
    (**(code **)(*plVar1 + 0x50))(plVar1,0,uVar4,uVar5);
    (**(code **)(*plVar1 + 0x48))(plVar1,0,uVar4);
    (**(code **)(*plVar1 + 0x50))(plVar1,1,uVar6,uVar7);
    (**(code **)(*plVar1 + 0x48))(plVar1,1,uVar6);
    if (local_res10 != (FArchive *)0x0) {
      (**(code **)((longlong)*(IMFMediaSource *)local_res10 + 0x10))(local_res10);
    }
  }
  return;
}

// RequestMoreVideoDataFromStreamSink @ 14eaba220

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::RequestMoreVideoDataFromStreamSink(FWmfMediaTracks *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWmfMediaStreamSink *pFVar1;
  int iVar2;
  
  pFVar1 = (this->MediaStreamSink).RawPointer;
  if (pFVar1 != (FWmfMediaStreamSink *)0x0) {
    lpCriticalSection = &pFVar1->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((*(longlong *)&pFVar1->OnIdleAction == 0) &&
        ((pFVar1->EventQueue).RawPointer != (IMFMediaEventQueue *)0x0)) &&
       (pFVar1->bSegmentEnded == false)) {
      iVar2 = (**(code **)(pFVar1->VideoSampleQueue->_padding_ + 8))();
      if ((iVar2 + pFVar1->NumRequestsInFlight < 6) &&
         ((pFVar1->bSystemIsScrubbing == false ||
          ((pFVar1->bScrubbingInProgress != false && (pFVar1->NumRequestsInFlight == 0)))))) {
        (**(code **)(*(longlong *)&pFVar1->field_0x10 + 0x30))
                  (&pFVar1->field_0x10,0x131,&GUID_NULL,0,0);
        pFVar1->NumRequestsInFlight = pFVar1->NumRequestsInFlight + 1;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SeekStarted @ 14eabc3b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaTracks::SeekStarted(FWmfMediaTracks *this,FTimespan *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWmfMediaStreamSink *pFVar1;
  
  if (6 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->SeekIndex = param_2;
    this->LoopIndex = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->MediaStreamSink).RawPointer;
    if (pFVar1 != (FWmfMediaStreamSink *)0x0) {
      pFVar1->bSeekInProgress = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SelectTrack @ 14eabc460

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::SelectTrack(FWmfMediaTracks *this,EMediaTrackType param_1,int param_2)

{
  int *lpCriticalSection;
  longlong *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  IMFPresentationDescriptor *pIVar10;
  longlong lVar11;
  uint uVar12;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  lVar9._0_4_ = (this->MetadataTracks).ArrayNum;
  lVar9._4_4_ = (this->MetadataTracks).ArrayMax;
  if (lVar9 == 0) {
    return false;
  }
  if (5 < (byte)LogWmfMedia._0_1_) {
    MediaUtils::TrackTypeToString(&local_68,param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == Audio) {
    lVar9 = 0x210;
    lVar11 = 0x88;
  }
  else if (param_1 == Caption) {
    lVar9 = 0x214;
    lVar11 = 0x110;
  }
  else if (param_1 == Metadata) {
    lVar9 = 0x218;
    lVar11 = 0x1f8;
  }
  else {
    if (param_1 != Video) {
      bVar5 = false;
      goto LAB_14eabc824;
    }
    lVar9 = 0x21c;
    lVar11 = 0x2b8;
  }
  plVar1 = (longlong *)
           ((longlong)(this->AudioSampleQueue).CriticalSection.CriticalSection.Opaque1 +
           lVar11 + -0x48);
  puVar2 = (uint *)((longlong)(this->AudioSampleQueue).CriticalSection.CriticalSection.Opaque1 +
                   lVar9 + -0x48);
  if ((puVar2 == (uint *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectedTrack != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                         ,0x3c4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((plVar1 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tracks != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                         ,0x3c5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar12 = *puVar2;
  if (param_2 != uVar12) {
    if (param_2 != -1) {
      if (-1 < param_2) {
        if ((int)plVar1[1] <= param_2) {
          bVar5 = false;
          goto LAB_14eabc824;
        }
        goto LAB_14eabc5d4;
      }
LAB_14eabc7f1:
      bVar5 = false;
      goto LAB_14eabc824;
    }
LAB_14eabc5d4:
    if (uVar12 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar12 < (int)plVar1[1]) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar3 = *(undefined4 *)((longlong)(int)uVar12 * 0x60 + 0x58 + *plVar1);
      pIVar10 = TComPtr<IMFPresentationDescriptor>::operator->
                          ((TComPtr<IMFPresentationDescriptor> *)&(this->MetadataTracks).ArrayNum);
      iVar8 = (**(code **)((longlong)*pIVar10 + 0x120))(pIVar10,uVar3);
      if (iVar8 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_58,iVar8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        bVar5 = false;
        goto LAB_14eabc824;
      }
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      *puVar2 = 0xffffffff;
      *(undefined1 *)&this->SelectedMetadataTrack = 1;
    }
    if (param_2 != -1) {
      uVar12 = 0;
      if (param_2 < (int)plVar1[1]) {
        uVar12 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar3 = *(undefined4 *)((longlong)param_2 * 0x60 + 0x58 + *plVar1);
      pIVar10 = TComPtr<IMFPresentationDescriptor>::operator->
                          ((TComPtr<IMFPresentationDescriptor> *)&(this->MetadataTracks).ArrayNum);
      iVar8 = (**(code **)((longlong)*pIVar10 + 0x118))(pIVar10,uVar3);
      if (iVar8 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_38,iVar8);
          MediaUtils::TrackTypeToString(&local_48,param_1);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14eabc7f1;
      }
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      *puVar2 = param_2;
      *(undefined1 *)&this->SelectedMetadataTrack = 1;
    }
  }
  bVar5 = true;
LAB_14eabc824:
  if (lpCriticalSection != (int *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar5;
}

// SessionEnded @ 14eabc870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaTracks::SessionEnded(FWmfMediaTracks *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWmfMediaStreamSink *pFVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [48];
  code *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = (this->MediaStreamSink).RawPointer;
  if (pFVar2 != (FWmfMediaStreamSink *)0x0) {
    local_48 = (code *)0x0;
    plStack_20 = (longlong *)0x0;
    lpCriticalSection = &pFVar2->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &pFVar2->NumRequestsInFlight;
    *piVar1 = *piVar1 - pFVar2->NumRequestsInFlightWithSystem;
    pFVar2->NumRequestsInFlightWithSystem = 0;
    if ((*piVar1 == 0) && (*(longlong *)&pFVar2->OnIdleAction != 0)) {
      uVar6 = CONCAT44(uStack_24,local_28);
      pcVar3 = *(code **)&pFVar2->OnIdleAction;
      uVar7 = *(undefined8 *)&(pFVar2->OnIdleAction).field_0x8;
      lVar4 = *(longlong *)&(pFVar2->OnIdleAction).field_0x10;
      uVar5 = *(undefined8 *)&(pFVar2->OnIdleAction).field_0x18;
      local_28 = *(undefined4 *)&(pFVar2->OnIdleAction).field_0x20;
      uStack_24 = *(undefined4 *)&(pFVar2->OnIdleAction).field_0x24;
      plVar8 = *(longlong **)&(pFVar2->OnIdleAction).field_0x28;
      *(code **)&pFVar2->OnIdleAction = local_48;
      *(undefined8 *)&(pFVar2->OnIdleAction).field_0x8 = uStack_40;
      *(longlong *)&(pFVar2->OnIdleAction).field_0x10 = local_38;
      *(undefined8 *)&(pFVar2->OnIdleAction).field_0x18 = uStack_30;
      *(undefined8 *)&(pFVar2->OnIdleAction).field_0x20 = uVar6;
      *(longlong **)&(pFVar2->OnIdleAction).field_0x28 = plStack_20;
      local_48 = pcVar3;
      uStack_40 = uVar7;
      local_38 = lVar4;
      uStack_30 = uVar5;
      plStack_20 = plVar8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar3 = local_48;
      plVar8 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar8 = plStack_20;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar3)(uVar7);
    }
    if (local_48 != (code *)0x0) {
      plVar8 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar8 = plStack_20;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}

// SetMinExpectedNextSequenceIndex @ 14eabcfe0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaTracks::SetMinExpectedNextSequenceIndex(FWmfMediaTracks *this,TOptional<int> param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TOptional<int> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->NextMinSequenceIndex;
  bVar4 = (this->NextMinSequenceIndex).bIsSet;
  if (*(char *)((longlong)param_1 + 4) == '\0') {
    if (bVar4 != false) {
      (this->NextMinSequenceIndex).bIsSet = false;
    }
  }
  else if ((bVar4 != (bool)*(char *)((longlong)param_1 + 4)) ||
          ((bVar4 != false && (pTVar1->TypedValue != *(int *)param_1)))) {
    if (param_1 != (TOptional<int>)pTVar1) {
      pTVar1->TypedValue = *(int *)param_1;
      (this->NextMinSequenceIndex).bIsSet = true;
    }
    if (*(char *)((longlong)param_1 + 4) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar2 = *(int *)param_1;
    TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::
    PurgeUntilSequenceIndex(&this->AudioSampleQueue,iVar2);
    TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
    PurgeUntilSequenceIndex(&this->MetadataSampleQueue,iVar2);
    TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
    PurgeUntilSequenceIndex(&this->CaptionSampleQueue,iVar2);
    TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
    PurgeUntilSequenceIndex(&this->VideoSampleQueue,iVar2);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetSessionState @ 14eabd860

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaTracks::SetSessionState(FWmfMediaTracks *this,EMediaState param_1)

{
  if (6 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    this->SessionState = param_1;
    return;
  }
  this->SessionState = param_1;
  return;
}

// SetTrackFormat @ 14eabdb00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::SetTrackFormat
          (FWmfMediaTracks *this,EMediaTrackType param_1,int param_2,int param_3)

{
  int *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  FString local_48;
  FString local_38;
  
  if (5 < (byte)LogWmfMedia._0_1_) {
    MediaUtils::TrackTypeToString(&local_48,param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == Audio) {
    lVar5 = 0x88;
LAB_14eabdbd8:
    plVar1 = (longlong *)
             ((longlong)(this->AudioSampleQueue).CriticalSection.CriticalSection.Opaque1 +
             lVar5 + -0x48);
    if ((plVar1 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tracks != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaTracks.cpp"
                           ,0x417,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((-1 < param_2) && (param_2 < (int)plVar1[1])) {
      if ((param_2 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar5 = (longlong)param_2 * 0x60 + *plVar1;
      if (*(int *)(lVar5 + 0x54) == param_3) {
        bVar3 = true;
        goto LAB_14eabdcf7;
      }
      if ((-1 < param_3) && (param_3 < *(int *)(lVar5 + 0x20))) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          MediaUtils::TrackTypeToString(&local_38,param_1);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        *(int *)(lVar5 + 0x54) = param_3;
        *(undefined1 *)&this->SelectedMetadataTrack = 1;
        bVar3 = true;
        goto LAB_14eabdcf7;
      }
    }
  }
  else {
    if (param_1 == Caption) {
      lVar5 = 0x110;
      goto LAB_14eabdbd8;
    }
    if (param_1 == Metadata) {
      lVar5 = 0x1f8;
      goto LAB_14eabdbd8;
    }
    if (param_1 == Video) {
      lVar5 = 0x2b8;
      goto LAB_14eabdbd8;
    }
  }
  bVar3 = false;
LAB_14eabdcf7:
  if (lpCriticalSection != (int *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// SetVideoTrackFrameRate @ 14eabddd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWmfMediaTracks::SetVideoTrackFrameRate(FWmfMediaTracks *this,int param_1,int param_2,float param_3)

{
  IMFMediaType *pIVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte extraout_var;
  FFormat *pFVar5;
  ulonglong uVar6;
  FFrameRateLut *pFVar7;
  int iVar8;
  int *lpCriticalSection;
  
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  lpCriticalSection = &(this->CaptionTracks).ArrayNum;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = GetVideoFormat((FWmfMediaTracks *)&this[-1].SeekIndex,param_1,param_2);
  if (pFVar5 != (FFormat *)0x0) {
    if (param_3 == (pFVar5->Video).FrameRate) {
      bVar2 = true;
      goto LAB_14eabdefb;
    }
    bVar2 = TRange<float>::Contains(&(pFVar5->Video).FrameRates,param_3);
    if ((bVar2) && (0.0 <= param_3)) {
      uVar6 = 0;
      pFVar7 = WmfMedia::FrameRateLut;
      do {
        if (param_3 == pFVar7->FrameRate) {
          iVar4 = WmfMedia::FrameRateLut[uVar6].Numerator;
          iVar8 = WmfMedia::FrameRateLut[uVar6].Denominator;
          goto LAB_14eabdecc;
        }
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar3;
        pFVar7 = pFVar7 + 1;
      } while ((int)uVar3 < 9);
      if (param_3 <= ___real_4851b700) {
        iVar4 = (int)(param_3 * __real_461c4000);
        iVar8 = 10000;
LAB_14eabdecc:
        pIVar1 = (pFVar5->InputType).RawPointer;
        (**(code **)((longlong)*pIVar1 + 0xb0))(pIVar1,&MF_MT_FRAME_RATE,CONCAT44(iVar4,iVar8));
        bVar2 = (bool)(extraout_var >> 7 ^ 1);
        goto LAB_14eabdefb;
      }
    }
  }
  bVar2 = false;
LAB_14eabdefb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Shutdown @ 14eabe540

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaTracks::Shutdown(FWmfMediaTracks *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWmfMediaHardwareVideoDecodingTextureSamplePool *pFVar2;
  FWmfMediaStreamSink *pFVar3;
  IMFMediaSource *pIVar4;
  IMFPresentationDescriptor *pIVar5;
  
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::
    TStorage::Reserve(*(TStorage **)this->AudioSamplePool,0);
    if (this->VideoSamplePool != (FWmfMediaTextureSamplePool *)0x0) {
      TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>
      ::TStorage::Reserve(*(TStorage **)this->VideoSamplePool,0);
    }
    pFVar2 = (this->VideoHardwareVideoDecodingSamplePool).Object;
    if (pFVar2 != (FWmfMediaHardwareVideoDecodingTextureSamplePool *)0x0) {
      TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
      ::TStorage::Reserve(*(TStorage **)pFVar2,0);
    }
    pFVar3 = (this->MediaStreamSink).RawPointer;
    if (pFVar3 != (FWmfMediaStreamSink *)0x0) {
      (**(code **)(*(longlong *)pFVar3 + 0x10))();
      (this->MediaStreamSink).RawPointer = (FWmfMediaStreamSink *)0x0;
    }
    this->SelectedAudioTrack = -1;
    this->SelectedCaptionTrack = -1;
    this->SelectedMetadataTrack = -1;
    this->SelectedVideoTrack = -1;
    DestructItems<FWmfMediaTracks::FTrack,int>
              ((FTrack *)(this->AudioTracks).AllocatorInstance.Data,(this->AudioTracks).ArrayNum);
    (this->AudioTracks).ArrayNum = 0;
    piVar1 = &(this->AudioTracks).ArrayMax;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->AudioTracks).AllocatorInstance,0,piVar1);
    }
    DestructItems<FWmfMediaTracks::FTrack,int>
              ((FTrack *)(this->MetadataTracks).AllocatorInstance.Data,
               (this->MetadataTracks).ArrayNum);
    (this->MetadataTracks).ArrayNum = 0;
    piVar1 = &(this->MetadataTracks).ArrayMax;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->MetadataTracks).AllocatorInstance,0,piVar1);
    }
    DestructItems<FWmfMediaTracks::FTrack,int>
              ((FTrack *)(this->CaptionTracks).AllocatorInstance.Data,(this->CaptionTracks).ArrayNum
              );
    (this->CaptionTracks).ArrayNum = 0;
    piVar1 = &(this->CaptionTracks).ArrayMax;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->CaptionTracks).AllocatorInstance,0,piVar1);
    }
    DestructItems<FWmfMediaTracks::FTrack,int>
              ((FTrack *)(this->VideoTracks).AllocatorInstance.Data,(this->VideoTracks).ArrayNum);
    (this->VideoTracks).ArrayNum = 0;
    piVar1 = &(this->VideoTracks).ArrayMax;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->VideoTracks).AllocatorInstance,0,piVar1);
    }
    ::FString::Empty(&this->Info);
    pIVar4 = (this->MediaSource).RawPointer;
    if (pIVar4 != (IMFMediaSource *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x60))();
      pIVar4 = (this->MediaSource).RawPointer;
      if (pIVar4 != (IMFMediaSource *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))();
        (this->MediaSource).RawPointer = (IMFMediaSource *)0x0;
      }
    }
    pIVar5 = (this->PresentationDescriptor).RawPointer;
    if (pIVar5 != (IMFPresentationDescriptor *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
      (this->PresentationDescriptor).RawPointer = (IMFPresentationDescriptor *)0x0;
    }
    this->MediaSourceChanged = false;
    this->SelectionChanged = false;
    this->SeekIndex = 0;
    this->LoopIndex = 0;
                    /* WARNING: Could not recover jumptable at 0x00014eabe797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

