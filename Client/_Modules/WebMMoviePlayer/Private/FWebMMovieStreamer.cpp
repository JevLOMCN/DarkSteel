// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMoviePlayer
// Functions: 21

// FWebMMovieStreamer @ 14f124ed0

FWebMMovieStreamer * __thiscall FWebMMovieStreamer::FWebMMovieStreamer(FWebMMovieStreamer *this)

{
  FMovieViewport *pFVar1;
  FWebMAudioBackendNull *pFVar2;
  FMovieViewport *pFVar3;
  FMovieViewport *pFVar4;
  TRawPtrProxy<FMovieViewport> local_res8;
  
  pFVar4 = (FMovieViewport *)0x0;
  *(undefined8 *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnCurrentMovieClipFinishedDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieStreamer__;
  *(undefined8 *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IWebMSamplesSink__;
  *(undefined8 *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x10 = 0;
  (this->MovieQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MovieQueue).ArrayNum = 0;
  (this->MovieQueue).ArrayMax = 0;
  pFVar1 = ::operator_new(0x18);
  pFVar3 = pFVar4;
  if (pFVar1 != (FMovieViewport *)0x0) {
    pFVar1->_padding_ = 0;
    (((TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    (((TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar1->_padding_ = 0;
    pFVar3 = pFVar1;
  }
  (this->VideoFramesToDecodeLater).Tail = (TNode *)pFVar3;
  (this->VideoFramesToDecodeLater).Head = (TNode *)pFVar3;
  (this->MovieName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MovieName).Data.ArrayNum = 0;
  (this->MovieName).Data.ArrayMax = 0;
  (this->VideoDecoder).Ptr = (FWebMVideoDecoder *)0x0;
  (this->AudioDecoder).Ptr = (FWebMAudioDecoder *)0x0;
  (this->Container).Ptr = (FWebMContainer *)0x0;
  pFVar2 = ::operator_new(1);
  (this->AudioBackend).Ptr = pFVar2;
  (this->Samples).Object = (FMediaSamples *)0x0;
  (this->Samples).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar3 = ::operator_new(0x30);
  if (pFVar3 != (FMovieViewport *)0x0) {
    (((TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *)&pFVar3->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar3->_padding_ = (longlong)&___7FMovieViewport__6B_;
    pFVar3->_padding_ = 0;
    (pFVar3->SlateTexture).Object = (FSlateTexture2DRHIRef *)0x0;
    (pFVar3->SlateTexture).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar3->DefaultSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    pFVar4 = pFVar3;
  }
  local_res8.Object = pFVar4;
  TSharedPtr<FMovieViewport,1>::TSharedPtr<FMovieViewport,1><FMovieViewport>
            (&this->Viewport,&local_res8);
  (this->SlateVideoTexture).Object = (FSlateTexture2DRHIRef *)0x0;
  (this->SlateVideoTexture).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->VideoFramesCurrentlyProcessing = 0;
  this->StartTime = 0.0;
  this->bPlaying = false;
  this->bPaused = false;
  this->TicksLeftToWaitPostCompletion = 0;
  (this->PauseHandle).ID = 0;
  (this->ResumeHandle).ID = 0;
  return this;
}

// ~FWebMMovieStreamer @ 14f125080

void __thiscall FWebMMovieStreamer::~FWebMMovieStreamer(FWebMMovieStreamer *this)

{
  FWebMContainer *pFVar1;
  FWebMAudioDecoder *this_00;
  FWebMVideoDecoder *this_01;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->bPlaying = false;
  this->bPaused = false;
  this->_padding_ = (longlong)&_vftable__for__IMovieStreamer__;
  this->_padding_ = (longlong)&_vftable__for__IWebMSamplesSink__;
  this->VideoFramesCurrentlyProcessing = 0;
  this->TicksLeftToWaitPostCompletion = 0;
  if ((this->ResumeHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
               (FDelegateHandle)(this->ResumeHandle).ID);
    (this->ResumeHandle).ID = 0;
  }
  if ((this->PauseHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
               (FDelegateHandle)(this->PauseHandle).ID);
    (this->PauseHandle).ID = 0;
  }
  ReleaseAcquiredResources(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateVideoTexture).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Viewport).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Samples).SharedReferenceCount.ReferenceController);
  ::operator_delete((this->AudioBackend).Ptr,1);
  pFVar1 = (this->Container).Ptr;
  if (pFVar1 != (FWebMContainer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this_00 = (this->AudioDecoder).Ptr;
  if (this_00 != (FWebMAudioDecoder *)0x0) {
    FWebMAudioDecoder::~FWebMAudioDecoder(this_00);
    ::operator_delete(this_00,0x48);
  }
  this_01 = (this->VideoDecoder).Ptr;
  if (this_01 != (FWebMVideoDecoder *)0x0) {
    FWebMVideoDecoder::~FWebMVideoDecoder(this_01);
    ::operator_delete(this_01,0x70);
  }
  pFVar2 = (this->MovieName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TQueue<TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_>,1>::
  ~TQueue<TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_>,1>
            (&this->VideoFramesToDecodeLater);
  DestructItems<FString,int>
            ((FString *)(this->MovieQueue).AllocatorInstance.Data,(this->MovieQueue).ArrayNum);
  pFVar2 = (this->MovieQueue).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCurrentMovieClipFinishedDelegate).field_0x8,
             *(int *)&(this->OnCurrentMovieClipFinishedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnCurrentMovieClipFinishedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCurrentMovieClipFinishedDelegate);
  this->_padding_ = (longlong)&___7IWebMSamplesSink__6B_;
  this->_padding_ = (longlong)&___7IMovieStreamer__6B_;
  return;
}

// AddAudioSampleFromDecodingThread @ 14f125660

void __thiscall
FWebMMovieStreamer::AddAudioSampleFromDecodingThread
          (FWebMMovieStreamer *this,TSharedRef<FWebMMediaAudioSample,1> *param_1)

{
  FMediaSamples *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<IMediaAudioSample,1> local_18;
  
  if ((this->AudioBackend).Ptr == (FWebMAudioBackendNull *)0x0) {
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
  local_18.Object = (IMediaAudioSample *)param_1->Object;
  this_00 = (FMediaSamples *)(this->AudioBackend).Ptr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMediaSamples::AddAudio(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddVideoSampleFromDecodingThread @ 14f1256f0

void __thiscall
FWebMMovieStreamer::AddVideoSampleFromDecodingThread
          (FWebMMovieStreamer *this,TSharedRef<FWebMMediaTextureSample,1> *param_1)

{
  FMediaSamples *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<IMediaTextureSample,1> local_18;
  
  if ((this->AudioBackend).Ptr == (FWebMAudioBackendNull *)0x0) {
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
  local_18.Object = (IMediaTextureSample *)param_1->Object;
  this_00 = (FMediaSamples *)(this->AudioBackend).Ptr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMediaSamples::AddVideo(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Cleanup @ 14f125780

void __thiscall FWebMMovieStreamer::Cleanup(FWebMMovieStreamer *this)

{
  this->bPlaying = false;
  this->bPaused = false;
  this->VideoFramesCurrentlyProcessing = 0;
  this->TicksLeftToWaitPostCompletion = 0;
  if ((this->ResumeHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
               (FDelegateHandle)(this->ResumeHandle).ID);
    (this->ResumeHandle).ID = 0;
  }
  if ((this->PauseHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
               (FDelegateHandle)(this->PauseHandle).ID);
    (this->PauseHandle).ID = 0;
  }
  ReleaseAcquiredResources(this);
  return;
}

// DisplayFrames @ 14f125a00

bool __thiscall FWebMMovieStreamer::DisplayFrames(FWebMMovieStreamer *this,float param_1)

{
  TSharedPtr<FSlateTexture2DRHIRef,1> *this_00;
  uint uVar1;
  uint uVar2;
  FMediaSamples *pFVar3;
  FMovieViewport *this_01;
  code *pcVar4;
  undefined8 this_02;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  FSlateTexture2DRHIRef *this_03;
  FSlateTexture2DRHIRef *pFVar9;
  longlong lVar10;
  uint *puVar11;
  TRefCountPtr<FRHITexture> TVar12;
  undefined1 auVar13 [16];
  undefined8 local_res8 [2];
  TRawPtrProxy<FSlateTexture2DRHIRef> local_res18;
  LARGE_INTEGER local_res20;
  undefined1 local_b8 [16];
  TWeakPtr<FSlateTexture2DRHIRef,1> local_a8;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pFVar9 = (FSlateTexture2DRHIRef *)0x0;
  this_00 = &this->SlateVideoTexture;
  if (this_00->Object == (FSlateTexture2DRHIRef *)0x0) {
    this_03 = ::operator_new(0x70);
    if (this_03 != (FSlateTexture2DRHIRef *)0x0) {
      local_res8[0] = 0;
      pFVar9 = FSlateTexture2DRHIRef::FSlateTexture2DRHIRef(this_03,(FRHITexture *)local_res8,0,0);
    }
    local_res18.Object = pFVar9;
    TSharedPtr<FSlateTexture2DRHIRef,1>::operator=<FSlateTexture2DRHIRef>(this_00,&local_res18);
  }
  QueryPerformanceCounter(&local_res20);
  local_b8 = ZEXT816(0);
  local_98 = 1;
  uStack_90 = 0;
  local_88 = local_88 & 0xffffff00;
  auVar13._8_8_ = 0;
  auVar13._0_8_ =
       (((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->StartTime) * __real_416312d000000000 +
       __real_3fe0000000000000;
  auVar13 = roundpd(local_b8,auVar13,1);
  uStack_80 = (longlong)auVar13._0_8_;
  if (((this->Samples).Object == (FMediaSamples *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (this->Samples).Object;
  local_58 = CONCAT71(uStack_97,local_98);
  uStack_50 = uStack_90;
  local_48 = local_88;
  uStack_44 = uStack_84;
  uStack_40 = (undefined4)uStack_80;
  uStack_3c = uStack_80._4_4_;
  cVar7 = (**(code **)(pFVar3->_padding_ + 0x48))(pFVar3,&local_58,local_b8);
  if ((cVar7 != '\0') &&
     (this_02 = local_b8._0_8_,
     (FWebMMediaTextureSample *)local_b8._0_8_ != (FWebMMediaTextureSample *)0x0)) {
    this->VideoFramesCurrentlyProcessing = this->VideoFramesCurrentlyProcessing + -1;
    if ((this_00->Object == (FSlateTexture2DRHIRef *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (this_00->Object->_padding_ != 0) {
      pFVar9 = TSharedPtr<FSlateTexture2DRHIRef,1>::operator->(this_00);
      (**(code **)(pFVar9->_padding_ + 0x10))(&pFVar9->_padding_);
    }
    if ((this_00->Object == (FSlateTexture2DRHIRef *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar9 = this_00->Object;
    lVar10 = (**(code **)(*(longlong *)this_02 + 8))(this_02,local_78);
    uVar1 = *(uint *)(lVar10 + 4);
    puVar11 = (uint *)(**(code **)(*(longlong *)this_02 + 8))(this_02,local_70);
    uVar2 = *puVar11;
    TVar12 = FWebMMediaTextureSample::GetTextureRef((FWebMMediaTextureSample *)this_02);
    FSlateTexture2DRHIRef::SetRHIRef(pFVar9,TVar12,uVar2,uVar1);
    if (((this->Viewport).Object == (FMovieViewport *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_a8.Object = this_00->Object;
    this_01 = (this->Viewport).Object;
    local_a8.WeakReferenceCount.ReferenceController =
         (this->SlateVideoTexture).SharedReferenceCount.ReferenceController;
    if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FMovieViewport::SetTexture(this_01,&local_a8);
  }
  if (((this->Samples).Object == (FMediaSamples *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (**(code **)(((this->Samples).Object)->_padding_ + 0x118))();
  if ((0 < iVar8) || (bVar5 = FWebMVideoDecoder::IsBusy((this->VideoDecoder).Ptr), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._8_8_);
  return bVar5;
}

// ForceCompletion @ 14f125d70

void __thiscall FWebMMovieStreamer::ForceCompletion(FWebMMovieStreamer *this)

{
  int *piVar1;
  
  if (this->bPlaying != false) {
    this->bPlaying = false;
  }
  DestructItems<FString,int>
            ((FString *)(this->MovieQueue).AllocatorInstance.Data,(this->MovieQueue).ArrayNum);
  piVar1 = &(this->MovieQueue).ArrayMax;
  (this->MovieQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MovieQueue).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetAspectRatio @ 14f125dd0

float __thiscall FWebMMovieStreamer::GetAspectRatio(FWebMMovieStreamer *this)

{
  int iVar1;
  FMovieViewport *pFVar2;
  FMovieViewport *pFVar3;
  code *pcVar4;
  code *pcVar5;
  bool bVar6;
  int *piVar7;
  longlong lVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((this->Viewport).Object == (FMovieViewport *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  pFVar2 = (this->Viewport).Object;
  pcVar5 = *(code **)(pFVar2->_padding_ + 0x10);
  if (pFVar2 == (FMovieViewport *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  pFVar3 = (this->Viewport).Object;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x10);
  piVar7 = (int *)(*pcVar5)(pFVar2,local_res8);
  iVar1 = *piVar7;
  lVar8 = (*pcVar4)(pFVar3,local_res10);
  return (float)iVar1 / (float)*(int *)(lVar8 + 4);
}

// GetMovieName @ 14f125eb0

FString * __thiscall
FWebMMovieStreamer::GetMovieName(FWebMMovieStreamer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->MovieName);
  return __return_storage_ptr__;
}

// GetTexture @ 14f125f80

/* WARNING: Removing unreachable block (ram,0x00014f125fdd) */

TRefCountPtr<FRHITexture> __thiscall FWebMMovieStreamer::GetTexture(FWebMMovieStreamer *this)

{
  FSlateTexture2DRHIRef *pFVar1;
  FRHIResource *this_00;
  FRHITexture *in_RDX;
  
  pFVar1 = (this->SlateVideoTexture).Object;
  if (pFVar1 == (FSlateTexture2DRHIRef *)0x0) {
    in_RDX->_padding_ = 0;
  }
  else {
    this_00 = (FRHIResource *)pFVar1->_padding_;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    in_RDX->_padding_ = (longlong)this_00;
  }
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetViewportInterface @ 14f126030

TSharedPtr<ISlateViewport,1> * __thiscall
FWebMMovieStreamer::GetViewportInterface
          (FWebMMovieStreamer *this,TSharedPtr<ISlateViewport,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (ISlateViewport *)(this->Viewport).Object;
  pTVar1 = (this->Viewport).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HandleApplicationHasEnteredForeground @ 14f1260f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWebMMovieStreamer::HandleApplicationHasEnteredForeground(FWebMMovieStreamer *this)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  if (4 < (byte)LogWebMMoviePlayer._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMoviePlayer);
  }
  if (this->bPaused != false) {
    QueryPerformanceCounter(&local_res8);
    dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->bPaused = false;
    this->StartTime =
         ((dVar1 + __real_4170000000000000) - this->TimeAtEnteringBackground) + this->StartTime;
    if (4 < (byte)LogWebMMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMoviePlayer);
    }
  }
  return;
}

// HandleApplicationWillEnterBackground @ 14f1261e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWebMMovieStreamer::HandleApplicationWillEnterBackground(FWebMMovieStreamer *this)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  if (4 < (byte)LogWebMMoviePlayer._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMoviePlayer);
  }
  if (this->bPaused == false) {
    QueryPerformanceCounter(&local_res8);
    dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->bPaused = true;
    this->TimeAtEnteringBackground = dVar1 + __real_4170000000000000;
  }
  return;
}

// Init @ 14f126280

bool __thiscall
FWebMMovieStreamer::Init
          (FWebMMovieStreamer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TEnumAsByte<EMoviePlaybackType> param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FDelegateHandle FVar7;
  
  pTVar1 = &this->MovieQueue;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar2,&pTVar1->AllocatorInstance,&(this->MovieQueue).ArrayNum,
                       &(this->MovieQueue).ArrayMax);
    ConstructItems<FString,FString,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10,
               (FString *)(param_1->AllocatorInstance).Data,iVar2);
  }
  if ((this->ResumeHandle).ID == 0) {
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FWebMMovieStreamer>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
                       (FWebMMovieStreamer *)&stack0x00000008,(pmf_0fdd9b3e *)this);
                    /* WARNING: Load size is inaccurate */
    (this->ResumeHandle).ID = *FVar7.ID;
  }
  if ((this->PauseHandle).ID == 0) {
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FWebMMovieStreamer>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
                       (FWebMMovieStreamer *)&stack0x00000010,(pmf_0fdd9b3e *)this);
                    /* WARNING: Load size is inaccurate */
    (this->PauseHandle).ID = *FVar7.ID;
  }
  bVar4 = StartNextMovie(this);
  return bVar4;
}

// IsLastMovieInPlaylist @ 14f1263f0

bool __thiscall FWebMMovieStreamer::IsLastMovieInPlaylist(FWebMMovieStreamer *this)

{
  return (this->MovieQueue).ArrayNum == 0;
}

// OnCurrentMovieClipFinished @ 14f126410

FOnCurrentMovieClipFinished * __thiscall
FWebMMovieStreamer::OnCurrentMovieClipFinished(FWebMMovieStreamer *this)

{
  return &this->OnCurrentMovieClipFinishedDelegate;
}

// ReadMoreFrames @ 14f126430

bool __thiscall FWebMMovieStreamer::ReadMoreFrames(FWebMMovieStreamer *this)

{
  int *piVar1;
  TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  TNode *pTVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> local_48;
  TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28 [2];
  
  auVar9._8_8_ = 0;
  auVar9._0_8_ = __real_4114585755555555;
  auVar9 = roundpd(auVar9,auVar9,1);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FWebMContainer::ReadFrames
            ((this->Container).Ptr,(FTimespan)(longlong)auVar9._0_8_,&local_38,&local_48);
  pTVar7 = ::operator_new(0x18);
  FVar5.Data = local_48.AllocatorInstance.Data;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    pTVar2 = &pTVar7->Item;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar1 = &(pTVar7->Item).ArrayMax;
    iVar6 = local_48.ArrayNum;
    (pTVar7->Item).ArrayNum = local_48.ArrayNum;
    if (local_48.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_48.ArrayNum,0,&pTVar2->AllocatorInstance,local_48.ArrayNum,piVar1);
      ConstructItems<TSharedPtr<FWebMFrame,1>,TSharedPtr<FWebMFrame,1>,int>
                ((pTVar2->AllocatorInstance).Data,(TSharedPtr<FWebMFrame,1> *)FVar5.Data,iVar6);
    }
    pTVar3 = (this->VideoFramesToDecodeLater).Head;
    (this->VideoFramesToDecodeLater).Head = pTVar7;
    pTVar3->NextNode = pTVar7;
  }
  pTVar7 = ((this->VideoFramesToDecodeLater).Tail)->NextNode;
  while ((pTVar7 != (TNode *)0x0 && (this->VideoFramesCurrentlyProcessing < 5))) {
    pTVar7 = ((this->VideoFramesToDecodeLater).Tail)->NextNode;
    if (pTVar7 != (TNode *)0x0) {
      pTVar2 = &pTVar7->Item;
      if (&local_48 != pTVar2) {
        DestructItems<TSharedPtr<FWebMFrame,1>,int>
                  ((TSharedPtr<FWebMFrame,1> *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
        if ((TSharedPtr<FWebMFrame,1> *)local_48.AllocatorInstance.Data !=
            (TSharedPtr<FWebMFrame,1> *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        local_48.AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = (pTVar7->Item).ArrayNum;
        local_48.ArrayMax = (pTVar7->Item).ArrayMax;
        (pTVar7->Item).ArrayNum = 0;
        (pTVar7->Item).ArrayMax = 0;
      }
      pTVar3 = (this->VideoFramesToDecodeLater).Tail;
      (this->VideoFramesToDecodeLater).Tail = pTVar7;
      if (pTVar2 != (TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *)local_28) {
        DestructItems<TSharedPtr<FWebMFrame,1>,int>
                  ((TSharedPtr<FWebMFrame,1> *)(pTVar2->AllocatorInstance).Data,
                   (pTVar7->Item).ArrayNum);
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pTVar7->Item).ArrayNum = 0;
        (pTVar7->Item).ArrayMax = 0;
      }
      DestructItems<TSharedPtr<FWebMFrame,1>,int>((TSharedPtr<FWebMFrame,1> *)0x0,0);
      if (pTVar3 != (TNode *)0x0) {
        DestructItems<TSharedPtr<FWebMFrame,1>,int>
                  ((TSharedPtr<FWebMFrame,1> *)(pTVar3->Item).AllocatorInstance.Data,
                   (pTVar3->Item).ArrayNum);
        pFVar4 = (pTVar3->Item).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pTVar3,0x18);
      }
      this->VideoFramesCurrentlyProcessing =
           this->VideoFramesCurrentlyProcessing + local_48.ArrayNum;
      FWebMVideoDecoder::DecodeVideoFramesAsync((this->VideoDecoder).Ptr,&local_48);
    }
    pTVar7 = ((this->VideoFramesToDecodeLater).Tail)->NextNode;
  }
  if (0 < local_38.ArrayNum) {
    FWebMAudioDecoder::DecodeAudioFramesAsync((this->AudioDecoder).Ptr,&local_38);
  }
  if ((local_48.ArrayNum < 1) && (local_38.ArrayNum < 1)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  DestructItems<TSharedPtr<FWebMFrame,1>,int>
            ((TSharedPtr<FWebMFrame,1> *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((TSharedPtr<FWebMFrame,1> *)local_48.AllocatorInstance.Data != (TSharedPtr<FWebMFrame,1> *)0x0
     ) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FWebMFrame,1>,int>
            ((TSharedPtr<FWebMFrame,1> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((TSharedPtr<FWebMFrame,1> *)local_38.AllocatorInstance.Data != (TSharedPtr<FWebMFrame,1> *)0x0
     ) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar8;
}

// ReleaseAcquiredResources @ 14f1266a0

void __thiscall FWebMMovieStreamer::ReleaseAcquiredResources(FWebMMovieStreamer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWebMVideoDecoder *this_00;
  FWebMAudioDecoder *this_01;
  FWebMContainer *pFVar3;
  FMovieViewport *pFVar4;
  code *pcVar5;
  FWeakReferencer<1> *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  this_00 = (this->VideoDecoder).Ptr;
  if (this_00 != (FWebMVideoDecoder *)0x0) {
    (this->VideoDecoder).Ptr = (FWebMVideoDecoder *)0x0;
    FWebMVideoDecoder::~FWebMVideoDecoder(this_00);
    ::operator_delete(this_00,0x70);
  }
  this_01 = (this->AudioDecoder).Ptr;
  if (this_01 != (FWebMAudioDecoder *)0x0) {
    (this->AudioDecoder).Ptr = (FWebMAudioDecoder *)0x0;
    FWebMAudioDecoder::~FWebMAudioDecoder(this_01);
    ::operator_delete(this_01,0x48);
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Samples != (TSharedPtr<FMediaSamples,1> *)&local_38) {
    (this->Samples).Object = (FMediaSamples *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Samples).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  pFVar3 = (this->Container).Ptr;
  if (pFVar3 != (FWebMContainer *)0x0) {
    (this->Container).Ptr = (FWebMContainer *)0x0;
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SlateVideoTexture != (TSharedPtr<FSlateTexture2DRHIRef,1> *)&local_28) {
    (this->SlateVideoTexture).Object = (FSlateTexture2DRHIRef *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SlateVideoTexture).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  if ((this->Viewport).Object == (FMovieViewport *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->Viewport).Object;
  local_18 = *(undefined4 *)&(pFVar4->SlateTexture).Object;
  uStack_14 = *(undefined4 *)((longlong)&(pFVar4->SlateTexture).Object + 4);
  pFVar6 = &(pFVar4->SlateTexture).WeakReferenceCount;
  uStack_10 = *(undefined4 *)&pFVar6->ReferenceController;
  uStack_c = *(undefined4 *)
              ((longlong)&(pFVar4->SlateTexture).WeakReferenceCount.ReferenceController + 4);
  pTVar7 = pFVar6->ReferenceController;
  (pFVar4->SlateTexture).Object = (FSlateTexture2DRHIRef *)0x0;
  (pFVar4->SlateTexture).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  return;
}

// SendAudio @ 14f126820

bool __thiscall FWebMMovieStreamer::SendAudio(FWebMMovieStreamer *this,float param_1)

{
  FMediaSamples *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  longlong *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_88 = 1;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0x7fffffffffffffff;
  local_a8 = (longlong *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  if (((this->Samples).Object == (FMediaSamples *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  uVar6 = uStack_70;
  uVar5 = uStack_80;
  pFVar1 = (this->Samples).Object;
  uVar3 = CONCAT71(uStack_87,local_88);
  uVar4 = CONCAT71(uStack_77,local_78);
  uStack_60 = uStack_80;
  uStack_50 = uStack_70;
  local_68 = uVar3;
  local_58 = uVar4;
  cVar9 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_68,&local_a8);
  while( true ) {
    if ((cVar9 == '\0') || (local_a8 == (longlong *)0x0)) {
      if (((this->Samples).Object == (FMediaSamples *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      iVar10 = (**(code **)(((this->Samples).Object)->_padding_ + 0xf8))();
      if ((0 < iVar10) || (bVar7 = FWebMAudioDecoder::IsBusy((this->AudioDecoder).Ptr), bVar7)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a0);
      return bVar7;
    }
    (**(code **)(*local_a8 + 0x30))(local_a8,local_98);
    if (((this->Samples).Object == (FMediaSamples *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) break;
    pFVar1 = (this->Samples).Object;
    uStack_40 = uVar5;
    uStack_30 = uVar6;
    local_48 = uVar3;
    local_38 = uVar4;
    cVar9 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_48,&local_a8);
  }
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return (bool)uVar8;
}

// StartNextMovie @ 14f126a40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWebMMovieStreamer::StartNextMovie(FWebMMovieStreamer *this)

{
  FString *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FMediaSamples *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FString *pFVar8;
  FWebMContainer *this_01;
  FMediaSamples *pFVar9;
  FWebMAudioDecoder *this_02;
  FWebMVideoDecoder *this_03;
  FMediaSamples *pFVar10;
  int iVar11;
  double dVar12;
  TRawPtrProxy<FMediaSamples> local_res8;
  LARGE_INTEGER local_res10;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FWebMVideoTrackInfo local_88;
  FWebMAudioTrackInfo local_78;
  FString local_50;
  FString local_40;
  
  if ((this->bPaused != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bPaused",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WebMMoviePlayer\\Source\\WebMMoviePlayer\\Private\\WebMMovieStreamer.cpp"
                         ,0x5a,L"Should not start next movie when paused!"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((this->MovieQueue).ArrayNum < 1) {
    if (4 < (byte)LogWebMMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMoviePlayer);
    }
    return false;
  }
  ReleaseAcquiredResources(this);
  pFVar10 = (FMediaSamples *)0x0;
  if (((this->MovieQueue).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar2 = (this->MovieQueue).AllocatorInstance.Data;
  this_00 = &this->MovieName;
  iVar7 = *(int *)(pFVar2 + 8);
  iVar11 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange(this_00,*(wchar_t **)pFVar2,iVar11);
  if (((this->MovieQueue).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar2 = (this->MovieQueue).AllocatorInstance.Data;
  if (*(void **)pFVar2 != (void *)0x0) {
    FMemory::Free(*(void **)pFVar2);
  }
  iVar7 = (this->MovieQueue).ArrayNum + -1;
  if (iVar7 != 0) {
    memmove(pFVar2,pFVar2 + 0x10,(longlong)iVar7 << 4);
  }
  piVar1 = &(this->MovieQueue).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->MovieQueue).AllocatorInstance,(this->MovieQueue).ArrayNum,
             &(this->MovieQueue).ArrayMax);
  pFVar8 = FPaths::ProjectContentDir(&local_50);
  ::FString::ConcatFC(&local_98,pFVar8,L"Movies/");
  ::FString::ConcatFF(&local_a8,&local_98,this_00);
  ::FString::ConcatFC(&local_c8,&local_a8,L".webm");
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  bVar5 = FPaths::FileExists(&local_c8);
  if (bVar5) {
    this_01 = ::operator_new(0x30);
    pFVar9 = pFVar10;
    if (this_01 != (FWebMContainer *)0x0) {
      pFVar9 = (FMediaSamples *)FWebMContainer::FWebMContainer(this_01);
    }
    pFVar3 = (FMediaSamples *)(this->Container).Ptr;
    if ((pFVar3 != pFVar9) &&
       ((this->Container).Ptr = (FWebMContainer *)pFVar9, pFVar3 != (FMediaSamples *)0x0)) {
      (**(code **)((vpx_codec_ctx *)&pFVar3->_padding_)->name)(pFVar3,1);
    }
    if (4 < (byte)LogWebMMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMoviePlayer);
    }
    bVar5 = FWebMContainer::Open((this->Container).Ptr,&local_c8);
    if (bVar5) {
      pFVar9 = ::operator_new(0x280);
      local_res8.Object = pFVar10;
      if (pFVar9 != (FMediaSamples *)0x0) {
        local_res8.Object = FMediaSamples::FMediaSamples(pFVar9,4,4,4,4,4);
      }
      TSharedPtr<FMediaSamples,1>::operator=<FMediaSamples>(&this->Samples,&local_res8);
      this_02 = ::operator_new(0x48);
      pFVar9 = pFVar10;
      if (this_02 != (FWebMAudioDecoder *)0x0) {
        pFVar9 = (FMediaSamples *)
                 FWebMAudioDecoder::FWebMAudioDecoder(this_02,(IWebMSamplesSink *)&this->_padding_);
      }
      pFVar3 = (FMediaSamples *)(this->AudioDecoder).Ptr;
      if ((pFVar3 != pFVar9) &&
         ((this->AudioDecoder).Ptr = (FWebMAudioDecoder *)pFVar9, pFVar3 != (FMediaSamples *)0x0)) {
        FWebMAudioDecoder::~FWebMAudioDecoder((FWebMAudioDecoder *)pFVar3);
        ::operator_delete(pFVar3,0x48);
      }
      this_03 = ::operator_new(0x70);
      if (this_03 != (FWebMVideoDecoder *)0x0) {
        pFVar10 = (FMediaSamples *)
                  FWebMVideoDecoder::FWebMVideoDecoder(this_03,(IWebMSamplesSink *)&this->_padding_)
        ;
      }
      pFVar9 = (FMediaSamples *)(this->VideoDecoder).Ptr;
      if ((pFVar9 != pFVar10) &&
         ((this->VideoDecoder).Ptr = (FWebMVideoDecoder *)pFVar10, pFVar9 != (FMediaSamples *)0x0))
      {
        FWebMVideoDecoder::~FWebMVideoDecoder((FWebMVideoDecoder *)pFVar9);
        ::operator_delete(pFVar9,0x70);
      }
      FWebMContainer::GetCurrentAudioTrackInfo((this->Container).Ptr,&local_78);
      if ((local_78.bIsValid == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultAudioTrack.bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WebMMoviePlayer\\Source\\WebMMoviePlayer\\Private\\WebMMovieStreamer.cpp"
                             ,0x7f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FWebMContainer::GetCurrentVideoTrackInfo((this->Container).Ptr,&local_88);
      if ((local_88.bIsValid == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultVideoTrack.bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WebMMoviePlayer\\Source\\WebMMoviePlayer\\Private\\WebMMovieStreamer.cpp"
                             ,0x82,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FWebMAudioDecoder::Initialize
                ((this->AudioDecoder).Ptr,local_78.CodecName,local_78.SampleRate,
                 local_78.NumOfChannels,local_78.CodecPrivateData,local_78.CodecPrivateDataSize);
      FWebMVideoDecoder::Initialize((this->VideoDecoder).Ptr,local_88.CodecName);
      QueryPerformanceCounter(&local_res10);
      dVar12 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      this->bPlaying = true;
      this->StartTime = dVar12 + __real_4170000000000000;
      bVar5 = true;
      goto LAB_14f126ea6;
    }
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    ::FString::operator=(this_00,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (1 < (byte)LogWebMMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMoviePlayer);
    }
    if (this_00 != &local_40) {
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->MovieName).Data.ArrayNum = 0;
      (this->MovieName).Data.ArrayMax = 0;
    }
  }
  bVar5 = false;
LAB_14f126ea6:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// Tick @ 14f126f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FWebMMovieStreamer::Tick(FWebMMovieStreamer *this,FRHICommandListBase *param_1,float param_2)

{
  FMediaSamples *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  FMovieViewport *this_00;
  longlong *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  TWeakPtr<FSlateTexture2DRHIRef,1> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [48];
  
  if (this->bPlaying == false) {
    bVar7 = this->bPaused == false;
  }
  else {
    bVar7 = false;
    if (this->bPaused == false) {
      if (this->TicksLeftToWaitPostCompletion == 0) {
        bVar7 = DisplayFrames(this,param_2);
        local_a8 = 1;
        uStack_90 = 0x7fffffffffffffff;
        local_b8 = (longlong *)0x0;
        pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        if (((this->Samples).Object == (FMediaSamples *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        uVar6 = uStack_90;
        uVar5 = uStack_a0;
        pFVar1 = (this->Samples).Object;
        uVar3 = CONCAT71(uStack_a7,local_a8);
        uVar4 = CONCAT71(uStack_97,local_98);
        uStack_70 = uStack_a0;
        uStack_60 = uStack_90;
        local_78 = uVar3;
        local_68 = uVar4;
        cVar10 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_78,&local_b8);
        while ((cVar10 != '\0' && (local_b8 != (longlong *)0x0))) {
          (**(code **)(*local_b8 + 0x30))(local_b8,local_38);
          if (((this->Samples).Object == (FMediaSamples *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          pFVar1 = (this->Samples).Object;
          uStack_50 = uVar5;
          uStack_40 = uVar6;
          local_58 = uVar3;
          local_48 = uVar4;
          cVar10 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_58,&local_b8);
        }
        if (((this->Samples).Object == (FMediaSamples *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        iVar12 = (**(code **)(((this->Samples).Object)->_padding_ + 0xf8))();
        if ((0 < iVar12) || (bVar8 = FWebMAudioDecoder::IsBusy((this->AudioDecoder).Ptr), bVar8)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_b0);
        bVar11 = ReadMoreFrames(this);
        if ((!bVar11 && !bVar8) && !bVar7) {
          this->TicksLeftToWaitPostCompletion = 1;
          this_00 = TSharedPtr<FMovieViewport,1>::operator->(&this->Viewport);
          local_88.Object = (FSlateTexture2DRHIRef *)0x0;
          local_88.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FMovieViewport::SetTexture(this_00,&local_88);
        }
      }
      else {
        iVar12 = this->TicksLeftToWaitPostCompletion + -1;
        this->TicksLeftToWaitPostCompletion = iVar12;
        if (iVar12 < 1) {
          this->TicksLeftToWaitPostCompletion = 0;
          bVar7 = StartNextMovie(this);
          return !bVar7;
        }
      }
      return false;
    }
  }
  return bVar7;
}

