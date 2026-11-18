// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMoviePlayer
// Functions: 13

// `dynamic_initializer_for_'LogWebMMoviePlayer'' @ 141453380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWebMMoviePlayer__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWebMMoviePlayer,L"LogWebMMoviePlayer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWebMMoviePlayer__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWebMMoviePlayer'' @ 1414533c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantWebMMoviePlayer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WebMMoviePlayer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WebMMoviePlayer",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWebMMoviePlayerModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14f1249e0

void * __thiscall
FWebMMoviePlayerModule::_scalar_deleting_destructor_(FWebMMoviePlayerModule *this,uint param_1)

{
  *this = (FWebMMoviePlayerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14f1252d0

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMovieStreamer::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMovieStreamer::_vector_deleting_destructor__adjustor_8__(FWebMMovieStreamer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FWebMMovieStreamer *)&this[-1].ResumeHandle,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f1252e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWebMMovieStreamer,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWebMMovieStreamer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f125310

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMediaSamples,SharedPointerInternals::DefaultDeleter<FMediaSamples>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMediaSamples,SharedPointerInternals::DefaultDeleter<FMediaSamples>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f125350

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMovieViewport,SharedPointerInternals::DefaultDeleter<FMovieViewport>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMovieViewport,SharedPointerInternals::DefaultDeleter<FMovieViewport>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f125390

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTexture2DRHIRef,SharedPointerInternals::DefaultDeleter<FSlateTexture2DRHIRef>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateTexture2DRHIRef,SharedPointerInternals::DefaultDeleter<FSlateTexture2DRHIRef>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f1253d0

void * __thiscall FMovieViewport::_scalar_deleting_destructor_(FMovieViewport *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FMovieViewport__6B_;
  pTVar5 = (this->SlateTexture).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateViewport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f125470

void * __thiscall
FWebMMovieStreamer::_scalar_deleting_destructor_(FWebMMovieStreamer *this,uint param_1)

{
  FWebMContainer *pFVar1;
  FWebMAudioDecoder *this_00;
  FWebMVideoDecoder *this_01;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->bPlaying = false;
  this->bPaused = false;
  this->_padding_ = (longlong)&_vftable__for__IMovieStreamer__;
  this->VideoFramesCurrentlyProcessing = 0;
  this->_padding_ = (longlong)&_vftable__for__IWebMSamplesSink__;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f125620

void * __thiscall IMovieStreamer::_scalar_deleting_destructor_(IMovieStreamer *this,uint param_1)

{
  *this = (IMovieStreamer)&___7IMovieStreamer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_WebMMoviePlayer @ 14f1271e0

void __cdecl IMPLEMENT_MODULE_WebMMoviePlayer(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogWebMMoviePlayer'' @ 150472150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWebMMoviePlayer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWebMMoviePlayer);
  return;
}

