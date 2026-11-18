// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 57

// <lambda_invoker_cdecl> @ 146c74110

void __cdecl
`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::<lambda_2>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  FRHICommandListImmediate::EndFrame(param_1);
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThreadFlushResources,None);
  return;
}

// FDefaultGameMoviePlayer @ 146c76da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FDefaultGameMoviePlayer * __thiscall
FDefaultGameMoviePlayer::FDefaultGameMoviePlayer(FDefaultGameMoviePlayer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDefaultGameMoviePlayer *pFVar5;
  undefined8 uStack_30;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&_vftable__for__FTickableObjectRenderThread__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameMoviePlayer__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMoviePlayerProxyServer__;
  (this->MovieStreamers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MovieStreamers).ArrayNum = 0;
  (this->MovieStreamers).ArrayMax = 0;
  (this->ActiveMovieStreamer).Object = (IMovieStreamer *)0x0;
  (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MainWindow).Object = (SWindow *)0x0;
  (this->MainWindow).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LoadingScreenContents).Object = (SWidget *)0x0;
  (this->LoadingScreenContents).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->UserWidgetHolder).Object = (SBorder *)0x0;
  (this->UserWidgetHolder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VirtualRenderWindow).Object = (SVirtualWindow *)0x0;
  (this->VirtualRenderWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MovieViewportWeakPtr).Object = (SViewport *)0x0;
  (this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SyncMechanism = (FSlateLoadingSynchronizationMechanism *)0x0;
  (this->MovieStreamingIsDone).Counter = 1;
  (this->LoadingIsDone).Counter = 1;
  this->IsMoviePlaying = false;
  this->bUserCalledFinish = false;
  this->bMainWindowClosed = (TAtomic<bool>)0x0;
  (this->LoadingScreenAttributes).WidgetLoadingScreen.Object = (SWidget *)0x0;
  (this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->LoadingScreenAttributes).MoviePaths.ArrayNum = 0;
  (this->LoadingScreenAttributes).MoviePaths.ArrayMax = 0;
  (this->LoadingScreenAttributes).MinimumLoadingScreenDisplayTime = -1.0;
  (this->LoadingScreenAttributes).bAutoCompleteWhenLoadingCompletes = true;
  (this->LoadingScreenAttributes).bMoviesAreSkippable = true;
  (this->LoadingScreenAttributes).bWaitForManualStop = false;
  (this->LoadingScreenAttributes).bAllowInEarlyStartup = false;
  (this->LoadingScreenAttributes).bAllowEngineTick = false;
  (this->LoadingScreenAttributes).PlaybackType = '\0';
  *(undefined8 *)&this->OnPrepareLoadingScreenDelegate = 0;
  *(undefined8 *)&(this->OnPrepareLoadingScreenDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPrepareLoadingScreenDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPrepareLoadingScreenDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnMoviePlaybackStartedDelegate = 0;
  *(undefined8 *)&(this->OnMoviePlaybackStartedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePlaybackStartedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnMoviePlaybackStartedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnMoviePlaybackTickDelegate = 0;
  *(undefined8 *)&(this->OnMoviePlaybackTickDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePlaybackTickDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnMoviePlaybackTickDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnMoviePlaybackFinishedDelegate = 0;
  *(undefined8 *)&(this->OnMoviePlaybackFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMoviePlaybackFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnMoviePlaybackFinishedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnMovieClipFinishedDelegate = 0;
  *(undefined8 *)&(this->OnMovieClipFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMovieClipFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnMovieClipFinishedDelegate).field_0x18 = 2;
  this->LastPlayTime = 0.0;
  this->bInitialized = false;
  this->bIsPlayOnBlockingEnabled = false;
  this->bIsSlateThreadAllowed = true;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SyncMechanismCriticalSection,4000);
  (this->WidgetRenderer).Object = (FMoviePlayerWidgetRenderer *)0x0;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->UserWidgetDPIScaler).Object = (SDPIScaler *)0x0;
  (this->UserWidgetDPIScaler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ViewportDPIScale = 1.0;
  this->BlockingRefCount = 0;
  this->LastBlockingTickTime = 0.0;
  (this->OnAsyncLoadingFlushUpdateDelegateHandle).ID = 0;
  uStack_30 = CONCAT44((int)((ulonglong)uStack_30 >> 0x20),0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::IsLoadingMovieCurrentlyPlaying,(FWriteAccessScope *)&local_28);
  local_10 = 0x154f06968;
  puVar3 = UE::Core::Private::DelegateAllocate
                     (0x30,(FDelegateAllocation *)
                           &FCoreDelegates::IsLoadingMovieCurrentlyPlaying.field_0x8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = _vcall__104__flat______;
    puVar3[5] = uStack_30;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (puVar3[4] == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FDefaultGameMoviePlayer *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TMulticastDelegateRegistration<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
  ::AddRaw<FDefaultGameMoviePlayer>
            ((TMulticastDelegateRegistration<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::RegisterMovieStreamerDelegate,
             (FDefaultGameMoviePlayer *)&stack0x00000008,(pmf_13697305 *)this);
  return this;
}

// ~FDefaultGameMoviePlayer @ 146c77310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer(FDefaultGameMoviePlayer *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [32];
  FDestructionSentinel local_a8;
  code *local_88 [2];
  undefined **local_78;
  FDefaultGameMoviePlayer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FDefaultGameMoviePlayer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this->_padding_ = (longlong)&_vftable__for__FTickableObjectRenderThread__;
  this->_padding_ = (longlong)&_vftable__for__IGameMoviePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMoviePlayerProxyServer__;
  if (this->bInitialized == false) {
    if (GRHIGlobals.IsRHIInitialized != false) {
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::`9'::<lambda_1>,1,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_70 = this;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer_::__l9::TSTR_UnregisterMoviePlayerTickable140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::TSTR_UnregisterMoviePlayerTickable140>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar11);
        uVar13 = (ulonglong)local_28;
        if (2 < uVar13) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar12 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar12 = local_30;
            }
            (*(code *)(*pppuVar12)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar12 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar12 = local_60;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
  }
  else {
    Shutdown((FDefaultGameMoviePlayer *)&this->_padding_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::IsLoadingMovieCurrentlyPlaying,(FWriteAccessScope *)&local_a8);
  if ((FCoreDelegates::IsLoadingMovieCurrentlyPlaying._16_4_ != 0) &&
     (FCoreDelegates::IsLoadingMovieCurrentlyPlaying._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::IsLoadingMovieCurrentlyPlaying._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::IsLoadingMovieCurrentlyPlaying.field_0x8,0,0,
               0x10);
    FCoreDelegates::IsLoadingMovieCurrentlyPlaying._16_4_ = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  FlushRenderingCommands();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserWidgetDPIScaler).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SyncMechanismCriticalSection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMovieClipFinishedDelegate).field_0x8,
             *(int *)&(this->OnMovieClipFinishedDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnMovieClipFinishedDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMovieClipFinishedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePlaybackFinishedDelegate).field_0x8,
             *(int *)&(this->OnMoviePlaybackFinishedDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnMoviePlaybackFinishedDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePlaybackFinishedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePlaybackTickDelegate).field_0x8,
             *(int *)&(this->OnMoviePlaybackTickDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnMoviePlaybackTickDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePlaybackTickDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePlaybackStartedDelegate).field_0x8,
             *(int *)&(this->OnMoviePlaybackStartedDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnMoviePlaybackStartedDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePlaybackStartedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPrepareLoadingScreenDelegate).field_0x8,
             *(int *)&(this->OnPrepareLoadingScreenDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnPrepareLoadingScreenDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPrepareLoadingScreenDelegate);
  DestructItems<FString,int>
            ((FString *)(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data,
             (this->LoadingScreenAttributes).MoviePaths.ArrayNum);
  pFVar6 = (this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
             ReferenceController);
  pTVar7 = (this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualRenderWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserWidgetHolder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadingScreenContents).SharedReferenceCount.ReferenceController);
  pTVar7 = (this->MainWindow).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMovieStreamer,1>,int>
            ((TSharedPtr<IMovieStreamer,1> *)(this->MovieStreamers).AllocatorInstance.Data,
             (this->MovieStreamers).ArrayNum);
  pFVar6 = (this->MovieStreamers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
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
  this->_padding_ = (longlong)&___7IGameMoviePlayer__6B_;
  this->_padding_ = (longlong)&___7FTickableObjectRenderThread__6B_;
  FTickableObjectRenderThread::Unregister((FTickableObjectRenderThread *)this);
  return;
}

// BlockingFinished @ 146c784a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::BlockingFinished(FDefaultGameMoviePlayer *this)

{
  char cVar1;
  
  if ((this->OnMovieClipFinishedDelegate).field_0x11 != '\0') {
    cVar1 = (**(code **)(this[-1].OnAsyncLoadingFlushUpdateDelegateHandle.ID + 0x70))
                      (&this[-1].OnAsyncLoadingFlushUpdateDelegateHandle);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(this[-1].OnAsyncLoadingFlushUpdateDelegateHandle.ID + 0x68))
                        (&this[-1].OnAsyncLoadingFlushUpdateDelegateHandle);
      if (cVar1 != '\0') {
        if (5 < (byte)LogMoviePlayer._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
        }
        (**(code **)(this[-1].OnAsyncLoadingFlushUpdateDelegateHandle.ID + 0x58))
                  (&this[-1].OnAsyncLoadingFlushUpdateDelegateHandle,0);
      }
    }
    *(undefined4 *)((longlong)&(this->WidgetRenderer).SharedReferenceCount.ReferenceController + 4)
         = 0;
  }
  return;
}

// BlockingStarted @ 146c78520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::BlockingStarted(FDefaultGameMoviePlayer *this)

{
  int *piVar1;
  ulong64 uVar2;
  
  if (((this->OnMovieClipFinishedDelegate).field_0x11 != '\0') &&
     ((this->OnMovieClipFinishedDelegate).field_0x12 != '\0')) {
    piVar1 = (int *)((longlong)&(this->WidgetRenderer).SharedReferenceCount.ReferenceController + 4)
    ;
    if (5 < (byte)LogMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
    }
    uVar2 = this[-1].OnAsyncLoadingFlushUpdateDelegateHandle.ID;
    *piVar1 = *piVar1 + 1;
    (**(code **)(uVar2 + 0x48))(&this[-1].OnAsyncLoadingFlushUpdateDelegateHandle);
  }
  return;
}

// BlockingTick @ 146c78590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::BlockingTick(FDefaultGameMoviePlayer *this)

{
  FDelegateHandle *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FHttpModule *pFVar10;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar11;
  longlong lVar12;
  SDPIScaler *pSVar13;
  LARGE_INTEGER local_res8;
  FDestructionSentinel local_48 [2];
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
                         ,0x289,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = &this[-1].OnAsyncLoadingFlushUpdateDelegateHandle;
  cVar7 = (**(code **)(this[-1].OnAsyncLoadingFlushUpdateDelegateHandle.ID + 0x68))(pFVar1);
  if (cVar7 != '\0') {
    QueryPerformanceCounter(&local_res8);
    pSVar13 = (SDPIScaler *)
              ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000);
    dVar5 = (double)pSVar13 - (double)(this->UserWidgetDPIScaler).Object;
    if (__real_3fb99999a0000000 < dVar5) {
      (this->UserWidgetDPIScaler).Object = pSVar13;
      pFVar10 = FHttpModule::Get();
      if ((pFVar10->HttpManager == (FHttpManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HttpManager != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                             ,0x50,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(pFVar10->HttpManager->_padding_ + 8))(pFVar10->HttpManager,0);
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(pFVar1->ID + 0x98))(pFVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)local_48);
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
      bVar6 = false;
      uVar11 = (this_00->InvocationList).ArrayNum - 1;
      if (-1 < (int)uVar11) {
        lVar12 = (longlong)(int)uVar11 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar2 + lVar12 + 8) == 0) ||
              (plVar3 = *(longlong **)(pFVar2 + lVar12), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,(float)dVar5), cVar7 == '\0')) {
            bVar6 = true;
          }
          lVar12 = lVar12 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
      }
      if (local_48[0].bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
      }
      if (6 < (byte)LogMoviePlayer._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
      }
    }
  }
  return;
}

// CanPlayMovie @ 146c78930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::CanPlayMovie(FDefaultGameMoviePlayer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.AndroidDisableThreadedRenderingFirstLoad",1);
  if ((plVar6 == (longlong *)0x0) || (iVar5 = (**(code **)(*plVar6 + 200))(plVar6), iVar5 == 0)) {
    return true;
  }
  if ((GEngine != (UEngine *)0x0) &&
     (cVar4 = (**(code **)(GEngine->_padding_ + 0x2c0))(), cVar4 != '\0')) {
    return true;
  }
  return false;
}

// ForceCompletion @ 146c7bff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::ForceCompletion(FDefaultGameMoviePlayer *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined1 *)((longlong)&this->SyncMechanism + 1) = 1;
  LOCK();
  *(undefined4 *)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController = 1;
  UNLOCK();
  pFVar1 = (this->MovieStreamers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c7c00e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x10))();
    return;
  }
  return;
}

// Get @ 146c7c8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FDefaultGameMoviePlayer * __cdecl FDefaultGameMoviePlayer::Get(void)

{
  return MoviePlayer.Object;
}

// GetMovieHeight @ 146c7caa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOptionalSize __thiscall FDefaultGameMoviePlayer::GetMovieHeight(FDefaultGameMoviePlayer *this)

{
  TVector2<double> *pTVar1;
  float *in_RDX;
  TVector2<double> local_18;
  
  pTVar1 = GetMovieSize(this,&local_18);
  *in_RDX = (float)(pTVar1->field0_0x0)._s_0.Y;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// GetMovieName @ 146c7cad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FString * __thiscall
FDefaultGameMoviePlayer::GetMovieName(FDefaultGameMoviePlayer *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  void *local_18 [2];
  
  pFVar1 = (this->MovieStreamers).AllocatorInstance.Data;
  bVar3 = pFVar1 == (FScriptContainerElement *)0x0;
  if (bVar3) {
    pFVar2 = ::FString::FString(&local_28,L"");
  }
  else {
    pFVar2 = (FString *)(**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetMovieSize @ 146c7cc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FDefaultGameMoviePlayer::GetMovieSize
          (FDefaultGameMoviePlayer *this,TVector2<double> *__return_storage_ptr__)

{
  IMovieStreamer *pIVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TVector2<double> *pTVar7;
  FDeprecateSlateVector2D FVar8;
  SWindow *this_00;
  SWindow *pSVar9;
  SWindow *pSVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  
  pSVar10 = (SWindow *)(this->MainWindow).WeakReferenceCount.ReferenceController;
  this_00 = (SWindow *)0x0;
  pSVar9 = pSVar10;
  if (pSVar10 != (SWindow *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar10->_padding_;
    do {
      pSVar9 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_146c7cca5;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar10->_padding_;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        *(atomic<int> *)&pSVar10->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    this_00 = (this->MainWindow).Object;
    pSVar9 = pSVar10;
    if (this_00 != (SWindow *)0x0) goto LAB_146c7cccb;
  }
LAB_146c7cca5:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar10 = pSVar9;
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TVector2<double> *)(*pcVar2)();
    return pTVar7;
  }
LAB_146c7cccb:
  FVar8 = SWindow::GetClientSizeInScreen(this_00);
  dVar3 = (double)*(float *)FVar8;
  dVar4 = (double)*(float *)((longlong)FVar8 + 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar10);
  if ((((this->MovieStreamers).ArrayNum < 1) ||
      ((this->LoadingScreenAttributes).MoviePaths.ArrayNum < 1)) ||
     (pIVar1 = (this->ActiveMovieStreamer).Object, pIVar1 == (IMovieStreamer *)0x0)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  }
  else {
    fVar12 = (float)(**(code **)((longlong)*pIVar1 + 0x28))();
    dVar13 = (double)fVar12;
    if (dVar3 / dVar4 <= dVar13) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 / dVar13;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 * dVar13;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  return __return_storage_ptr__;
}

// GetMovieWidth @ 146c7cd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOptionalSize __thiscall FDefaultGameMoviePlayer::GetMovieWidth(FDefaultGameMoviePlayer *this)

{
  TVector2<double> *pTVar1;
  float *in_RDX;
  TVector2<double> local_18;
  
  pTVar1 = GetMovieSize(this,&local_18);
  *in_RDX = (float)(pTVar1->field0_0x0)._s_0.X;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// GetSlateBackgroundVisibility @ 146c7d0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EVisibility __thiscall
FDefaultGameMoviePlayer::GetSlateBackgroundVisibility(FDefaultGameMoviePlayer *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  if (((((this->MovieStreamers).ArrayNum < 1) ||
       ((this->LoadingScreenAttributes).MoviePaths.ArrayNum < 1)) ||
      ((this->ActiveMovieStreamer).Object == (IMovieStreamer *)0x0)) ||
     (EVar1.Value.Value = EVisibility::Collapsed.Value.Value,
     (this->MovieStreamingIsDone).Counter != 0)) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetStatId @ 146c7d0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TStatId __thiscall FDefaultGameMoviePlayer::GetStatId(FDefaultGameMoviePlayer *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FDefaultGameMoviePlayer::GetStatId(void)const_::_2_::FStat_FDefaultGameMoviePlayer>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FDefaultGameMoviePlayer ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FDefaultGameMoviePlayer::GetStatId(void)const_::_2_::FStat_FDefaultGameMoviePlayer>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FDefaultGameMoviePlayer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FDefaultGameMoviePlayer,*pFVar1,
                   L"FDefaultGameMoviePlayer","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FDefaultGameMoviePlayer;
  if (StatPtr_FDefaultGameMoviePlayer ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FDefaultGameMoviePlayer::GetStatId(void)const_::_2_::FStat_FDefaultGameMoviePlayer>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FDefaultGameMoviePlayer");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FDefaultGameMoviePlayer::GetStatId(void)const_::_2_::FStat_FDefaultGameMoviePlayer>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FDefaultGameMoviePlayer,*pFVar1,
                         L"FDefaultGameMoviePlayer","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetViewportDPIScale @ 146c7d2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __thiscall FDefaultGameMoviePlayer::GetViewportDPIScale(FDefaultGameMoviePlayer *this)

{
  return this->ViewportDPIScale;
}

// GetViewportVisibility @ 146c7d300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EVisibility __thiscall FDefaultGameMoviePlayer::GetViewportVisibility(FDefaultGameMoviePlayer *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  if (((((this->MovieStreamers).ArrayNum < 1) ||
       ((this->LoadingScreenAttributes).MoviePaths.ArrayNum < 1)) ||
      ((this->ActiveMovieStreamer).Object == (IMovieStreamer *)0x0)) ||
     (EVar1.Value.Value = EVisibility::Visible.Value.Value,
     (this->MovieStreamingIsDone).Counter != 0)) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// HasEarlyStartupMovie @ 146c7d340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::HasEarlyStartupMovie(FDefaultGameMoviePlayer *this)

{
  return *(char *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data + 7)
         == '\x01';
}

// Initialize @ 146c7d600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146c7de10) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::Initialize
          (FDefaultGameMoviePlayer *this,FSlateRenderer *param_1,TSharedPtr<SWindow,1> *param_2)

{
  double *pdVar1;
  byte *pbVar2;
  TSharedPtr<SBorder,1> *pTVar3;
  void **ppvVar4;
  float fVar5;
  SWindow *pSVar6;
  FDefaultGameMoviePlayer *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  SVirtualWindow *pSVar11;
  FSharedReferencer<1> FVar12;
  FSharedReferencer<1> FVar13;
  FSharedReferencer<1> FVar14;
  SViewport *pSVar15;
  FSharedReferencer<1> FVar16;
  FSharedReferencer<1> FVar17;
  FSharedReferencer<1> FVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  byte bVar23;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar24;
  TSharedRef<SWindow,1> *pTVar25;
  FArguments *pFVar26;
  FDeprecateSlateVector2D FVar27;
  TSharedRef<FMoviePlayerWidgetRenderer,1> *pTVar28;
  FArguments *pFVar29;
  undefined8 *puVar30;
  TSharedRef<FDefaultGameMoviePlayer,1> *pTVar31;
  ulong64 uVar32;
  FSlotArguments *pFVar33;
  longlong *plVar34;
  FArguments *pFVar35;
  FArguments *pFVar36;
  TSharedRef<FDefaultGameMoviePlayer_const_,1> *pTVar37;
  SViewport *pSVar38;
  SBox *pSVar39;
  SBox *pSVar40;
  FArguments *pFVar41;
  FArguments *pFVar42;
  ISlateStyle *pIVar43;
  FName *pFVar44;
  SBorder *pSVar45;
  SBorder *pSVar46;
  SDPIScaler *pSVar47;
  SDPIScaler *pSVar48;
  FArguments *pFVar49;
  SOverlay *pSVar50;
  SOverlay *pSVar51;
  SDefaultMovieBorder *pSVar52;
  SDefaultMovieBorder *pSVar53;
  undefined ***pppuVar54;
  ulonglong uVar55;
  TReferenceControllerBase<1> *pTVar56;
  undefined1 auStackY_1758 [32];
  uint uStack_171c;
  T0RequiredArgs local_1718;
  T0RequiredArgs local_1717;
  T0RequiredArgs local_1716;
  T0RequiredArgs local_1715;
  T0RequiredArgs local_1714;
  T0RequiredArgs local_1713;
  T0RequiredArgs local_1712 [2];
  undefined4 local_1710;
  FLLMScope local_170c;
  FLLMScope local_1708;
  FLLMScope local_1704;
  FLLMScope local_1700;
  FLLMScope local_16fc;
  FLLMScope local_16f8;
  FLLMScope local_16f4;
  TSharedPtr<SWindow,1> *local_16f0;
  SBox *local_16e8;
  FSharedReferencer<1> local_16e0;
  TReferenceControllerBase<1> *local_16d8;
  FName local_16d0;
  SVirtualWindow *local_16c8;
  FSharedReferencer<1> local_16c0;
  FArguments *local_16b8;
  FArguments *local_16b0;
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> local_16a8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1690;
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> local_1678;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1660;
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> local_1648;
  TSlateDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs> local_1630;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1618;
  TSharedPtr<SVirtualWindow,1> local_1600;
  SWindow *local_15f0;
  FSharedReferencer<1> local_15e8;
  TSharedRef<SWindow,1> local_15e0;
  FMoviePlayerWidgetRenderer *local_15d0;
  FSharedReferencer<1> local_15c8;
  FArguments *local_15c0;
  code *local_15b8;
  undefined8 uStack_15b0;
  FName local_15a8;
  FMemScope local_15a0;
  FName local_1598;
  FMemScope local_1590;
  FName local_1588;
  FName local_1580;
  FMemScope local_1578;
  FMemScope local_1570;
  FMemScope local_1568;
  TSharedRef<SWindow,1> local_1560;
  TSharedRef<SWidget,1> local_1550;
  undefined4 local_1540 [2];
  undefined4 local_1538 [2];
  FName local_1530;
  FMemScope local_1528;
  FSlateRenderer *local_1520;
  FMemScope local_1518;
  FName local_1510;
  FMemScope local_1508;
  TAttribute<FSlateBrush_const_*> local_1500;
  FDestructionSentinel local_14d8;
  undefined1 *local_14c0;
  FDestructionSentinel local_14b8;
  undefined1 *local_14a0;
  FDestructionSentinel local_1498;
  longlong *local_1480;
  TSharedRef<FDefaultGameMoviePlayer_const_,1> local_1478;
  SWidget *local_1468;
  TReferenceControllerBase<1> *pTStack_1460;
  SWidget *local_1458;
  TReferenceControllerBase<1> *pTStack_1450;
  SWidget *local_1448;
  TReferenceControllerBase<1> *pTStack_1440;
  FMoviePlayerWidgetRenderer *local_1438;
  TReferenceControllerBase<1> *pTStack_1430;
  SWidget *local_1428;
  TReferenceControllerBase<1> *pTStack_1420;
  undefined1 local_1418 [16];
  undefined1 local_1408 [64];
  TSharedRef<FMoviePlayerWidgetRenderer,1> local_13c8;
  TSharedRef<FDefaultGameMoviePlayer,1> local_13b8;
  TSharedRef<FDefaultGameMoviePlayer,1> local_13a8;
  code *local_1398;
  FSharedReferencer<1> FStack_1390;
  code *local_1388;
  FWeakReferencer<1> FStack_1380;
  FSlotArguments local_1378;
  FSlotArguments local_1318;
  undefined1 local_12b8 [528];
  undefined1 local_10a8 [40];
  FSharedReferencer<1> local_1080;
  undefined1 local_1060 [24];
  undefined1 local_1048 [504];
  undefined1 local_e50 [24];
  undefined1 local_e38 [32];
  FSharedReferencer<1> local_e18;
  undefined1 local_e10 [512];
  undefined1 local_c10 [32];
  FSharedReferencer<1> local_bf0;
  FArguments local_be8;
  FArguments local_9e0;
  FArguments local_7d8;
  FArguments local_498;
  code *local_b8 [2];
  undefined **local_a8;
  double *pdStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  double *pdStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1758;
  pdVar1 = &this[-1].LastBlockingTickTime;
  local_1710 = 0;
  local_16f0 = param_2;
  if ((this->OnMovieClipFinishedDelegate).field_0x18 != '\0') goto LAB_146c7edb9;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name168,L"SlateMoviePlayer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope((FLLMScope *)&local_1710,LLMScope_Name168,false,None,Default,true);
  FMemScope::FMemScope(&local_1570,&LLMScope_Name168,true);
  if (4 < (byte)LogMoviePlayer._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
  }
  local_90 = (undefined ***)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDefaultGameMoviePlayer::Initialize'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDefaultGameMoviePlayer::Initialize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pdStack_a0 = pdVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::Initialize_::__l2::TSTR_RegisterMoviePlayerTickable172>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_78 = local_a8;
    pdStack_70 = pdStack_a0;
    local_68 = local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar24 = (FRenderCommandTag *)
              TRenderCommandTag<`FDefaultGameMoviePlayer::Initialize'::__l2::TSTR_RegisterMoviePlayerTickable172>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar24);
    uVar55 = (ulonglong)local_58;
    if ((2 < uVar55) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar55] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      param_2 = local_16f0;
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar54 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar54 = local_60;
        }
        (*(code *)(*pppuVar54)[2])();
        param_2 = local_16f0;
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar55])(local_88);
      param_2 = local_16f0;
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar54 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar54 = local_90;
    }
    (*(code *)(*pppuVar54)[2])();
  }
  local_1408._24_8_ = (ulonglong)uStack_171c << 0x20;
  local_1408._16_8_ = OnPreLoadMap;
  (this->OnMovieClipFinishedDelegate).field_0x18 = 1;
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddRaw<FDefaultGameMoviePlayer>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreUObjectDelegates::PreLoadMap,(FDefaultGameMoviePlayer *)(local_1418 + 8),
             (pmf_8694e172 *)pdVar1);
  local_1408._40_8_ = CONCAT44(uStack_171c,0x10);
  local_1408._32_8_ = _vcall__16__flat______;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FDefaultGameMoviePlayer>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FDefaultGameMoviePlayer *)local_1418,(pmf_76adecd0 *)pdVar1
            );
  FWindowsPlatformSplash::Hide();
  if (param_2->Object == (SWindow *)0x0) {
    pTVar25 = UGameEngine::CreateGameWindow((TSharedRef<SWindow,1> *)(local_1408 + 0x30));
    bVar9 = true;
    bVar20 = false;
  }
  else {
    local_1560.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    local_1560.Object = param_2->Object;
    if (local_1560.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1560.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1560.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar25 = &local_1560;
    bVar9 = false;
    bVar20 = true;
  }
  FVar12.ReferenceController = local_1560.SharedReferenceCount.ReferenceController;
  pSVar6 = pTVar25->Object;
  local_15e0.SharedReferenceCount.ReferenceController =
       (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_15e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_15e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_15e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_15e0.Object = pSVar6;
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1408._56_8_);
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar20 = false;
  local_16c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar26 = SVirtualWindow::FArguments::FArguments(&local_9e0);
  FVar27 = SWindow::GetClientSizeInScreen(pSVar6);
  fVar5 = *(float *)((longlong)FVar27 + 4);
  (pFVar26->_Size).field0_0x0._s_0.X = (double)*(float *)FVar27;
  (pFVar26->_Size).field0_0x0._s_0.Y = (double)fVar5;
  FLLMScope::FLLMScope(&local_170c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1530 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1528,&local_1530,true);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
            (&local_1648,"SVirtualWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xca,&local_1718);
  FMemScope::~FMemScope(&local_1528);
  FLLMScope::~FLLMScope(&local_170c);
  pSVar11 = local_1648._Widget.Object;
  if ((local_1648._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1648._Widget.Object,(FSlateBaseNamedArgs *)pFVar26);
  SVirtualWindow::Construct(local_1648._Widget.Object,pFVar26);
  if ((local_1648._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_1648._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)((local_1648._Widget.Object)->_padding_ + 0x228))
                       (local_1648._Widget.Object);
    bVar23 = 0;
    if (cVar22 != '\0') goto LAB_146c7da9b;
  }
  else {
LAB_146c7da9b:
    bVar23 = 0x20;
  }
  *(byte *)&(local_1648._Widget.Object)->_padding_ =
       (byte)(local_1648._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1648._Widget.Object)->_padding_ =
       (byte)(local_1648._Widget.Object)->_padding_ | bVar23;
  if ((local_1648._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_1648._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1648._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar12.ReferenceController = local_1648._Widget.SharedReferenceCount.ReferenceController;
  local_1648._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1648._Widget.Object = (SVirtualWindow *)0x0;
  if ((pSVar11 == (SVirtualWindow *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1600.Object = pSVar11;
  local_1600.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->UserWidgetHolder;
  if ((TSharedPtr<SVirtualWindow,1> *)pTVar3 != &local_1600) {
    pTVar3->Object = (SBorder *)pSVar11;
    local_1600.Object = (SVirtualWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->UserWidgetHolder).SharedReferenceCount,&local_1600.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1600.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_9e0);
  local_1520 = param_1;
  pTVar28 = MakeShared<FMoviePlayerWidgetRenderer,1,TSharedRef<SWindow,1>_const_&,TSharedPtr<SVirtualWindow,1>_&,FSlateRenderer_*>
                      (&local_13c8,&local_15e0,(TSharedPtr<SVirtualWindow,1> *)pTVar3,&local_1520);
  local_15c8.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  local_15d0 = pTVar28->Object;
  if (local_15c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_15c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_15c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ppvVar4 = (this->SyncMechanismCriticalSection).CriticalSection.Opaque3 + 1;
  if (ppvVar4 != &local_15d0) {
    *ppvVar4 = local_15d0;
    local_15d0 = (FMoviePlayerWidgetRenderer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)
               ((this->SyncMechanismCriticalSection).CriticalSection.Opaque3 + 2),&local_15c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13c8.SharedReferenceCount.ReferenceController);
  pFVar29 = SDefaultMovieBorder::FArguments::FArguments((FArguments *)local_1048);
  local_15c0 = pFVar29;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar29->_OnKeyDown,
             (FWriteAccessScope *)&local_14d8);
  local_14c0 = &(pFVar29->_OnKeyDown).field_0x8;
  puVar30 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_14c0);
  uVar19 = uStack_15b0._4_4_;
  pTVar56 = local_16d8;
  if (puVar30 != (undefined8 *)0x0) {
    uStack_171c = uStack_15b0._4_4_;
    pTVar31 = TSharedFromThis<FDefaultGameMoviePlayer,1>::AsShared
                        ((TSharedFromThis<FDefaultGameMoviePlayer,1> *)&this->_padding_,&local_13b8)
    ;
    pTVar56 = (pTVar31->SharedReferenceCount).ReferenceController;
    pFVar7 = pTVar31->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar20 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar30 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar32 = FDelegateHandle::GenerateNewID();
    puVar30[2] = uVar32;
    *puVar30 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar30[3] = pFVar7;
    puVar30[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar30[5] = OnLoadingScreenKeyDown;
    puVar30[6] = (ulonglong)uVar19 << 0x20;
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13b8.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar20 = false;
  if (local_14d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14d8.Accessor,&local_14d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar29->_OnMouseButtonDown,
             (FWriteAccessScope *)&local_14b8);
  local_14a0 = &(pFVar29->_OnMouseButtonDown).field_0x8;
  puVar30 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_14a0);
  uVar19 = uStack_15b0._4_4_;
  pTVar56 = local_16d8;
  if (puVar30 != (undefined8 *)0x0) {
    uStack_171c = uStack_15b0._4_4_;
    pTVar31 = TSharedFromThis<FDefaultGameMoviePlayer,1>::AsShared
                        ((TSharedFromThis<FDefaultGameMoviePlayer,1> *)&this->_padding_,&local_13a8)
    ;
    pTVar56 = (pTVar31->SharedReferenceCount).ReferenceController;
    pFVar7 = pTVar31->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar20 = true;
    *puVar30 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar32 = FDelegateHandle::GenerateNewID();
    puVar30[2] = uVar32;
    *puVar30 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFDefaultGameMoviePlayer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar30[3] = pFVar7;
    puVar30[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar30[5] = OnLoadingScreenMouseButtonDown;
    puVar30[6] = (ulonglong)uVar19 << 0x20;
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13a8.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar20 = false;
  if (local_14b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14b8.Accessor,&local_14b8);
  }
  local_16b0 = SOverlay::FArguments::FArguments(&local_be8);
  pFVar33 = SOverlay::Slot(&local_1318,0);
  plVar34 = &pFVar33->_padding_;
  if ((longlong *)local_1540 != plVar34) {
    *(undefined4 *)plVar34 = 2;
    *(undefined1 *)((longlong)&pFVar33->_padding_ + 4) = 1;
  }
  if (plVar34 == (longlong *)0x0) {
    pFVar33 = (FSlotArguments *)0x0;
  }
  if ((longlong *)local_1538 != &pFVar33->_padding_) {
    *(undefined4 *)&pFVar33->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar33->_padding_ + 4) = 1;
  }
  local_16b8 = (FArguments *)(FSlotArguments *)0x0;
  if (pFVar33 != (FSlotArguments *)0xffffffffffffffb8) {
    local_16b8 = (FArguments *)pFVar33;
  }
  pFVar35 = SBox::FArguments::FArguments(&local_7d8);
  FStack_1390.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStack_171c << 0x20);
  local_1398 = GetMovieWidth;
  TAttribute<FOptionalSize>::Bind<FDefaultGameMoviePlayer>
            (&pFVar35->_WidthOverride,(FDefaultGameMoviePlayer *)&this[-1].LastBlockingTickTime,
             (pmf_88590489 *)&local_1398);
  FStack_1380.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStack_171c << 0x20);
  local_1388 = GetMovieHeight;
  TAttribute<FOptionalSize>::Bind<FDefaultGameMoviePlayer>
            (&pFVar35->_HeightOverride,(FDefaultGameMoviePlayer *)&this[-1].LastBlockingTickTime,
             (pmf_88590489 *)&local_1388);
  pFVar36 = SViewport::FArguments::FArguments((FArguments *)local_12b8);
  pFVar36->_EnableGammaCorrection = false;
  *(undefined1 *)((longlong)&pFVar36->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar36->_padding_,
             (FWriteAccessScope *)&local_1498);
  local_1480 = &pFVar36->_padding_;
  puVar30 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1480);
  pTVar56 = local_16d8;
  if (puVar30 != (undefined8 *)0x0) {
    uStack_171c = uStack_15b0._4_4_;
    pTVar37 = TSharedFromThis<FDefaultGameMoviePlayer,1>::AsShared
                        ((TSharedFromThis<FDefaultGameMoviePlayer,1> *)&this->_padding_,&local_1478)
    ;
    pTVar56 = (pTVar37->SharedReferenceCount).ReferenceController;
    local_16d0 = (FName)pTVar37->Object;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar56->SharedReferenceCount = (atomic<int>)((int)pTVar56->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar20 = true;
    *puVar30 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar32 = FDelegateHandle::GenerateNewID();
    puVar30[2] = uVar32;
    *puVar30 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVFDefaultGameMoviePlayer___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar30 + 3) = local_16d0;
    puVar30[4] = pTVar56;
    if (pTVar56 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar56->WeakReferenceCount = (atomic<int>)((int)pTVar56->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar30[5] = GetViewportVisibility;
    puVar30[6] = (ulonglong)uStack_15b0._4_4_ << 0x20;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar56);
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1478.SharedReferenceCount.ReferenceController);
  }
  if (local_1498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1498.Accessor,&local_1498);
  }
  FLLMScope::FLLMScope(&local_1708,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1518,&local_16d0,true);
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>
            (&local_1678,"SViewport",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xdc,&local_1717);
  FMemScope::~FMemScope(&local_1518);
  FLLMScope::~FLLMScope(&local_1708);
  FVar16.ReferenceController = local_1678._Widget.SharedReferenceCount.ReferenceController;
  pSVar15 = local_1678._Widget.Object;
  FVar12.ReferenceController = local_16c0.ReferenceController;
  if (local_1678._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1678._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1678._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_16c8 = (SVirtualWindow *)local_1678._Widget.Object;
  local_16c0.ReferenceController = local_1678._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  pSVar38 = TSharedPtr<SViewport,1>::operator->(&local_1678._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar38,(FSlateBaseNamedArgs *)pFVar36);
  SViewport::Construct(local_1678._Widget.Object,pFVar36);
  pSVar38 = TSharedPtr<SViewport,1>::operator->(&local_1678._Widget);
  if ((pSVar38->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar38->_padding_ + 0x228))(pSVar38);
    bVar23 = 0;
    if (cVar22 != '\0') goto LAB_146c7e159;
  }
  else {
LAB_146c7e159:
    bVar23 = 0x20;
  }
  *(byte *)&pSVar38->_padding_ = (byte)pSVar38->_padding_ & 0xdf;
  *(byte *)&pSVar38->_padding_ = (byte)pSVar38->_padding_ | bVar23;
  pSVar38 = TSharedPtr<SViewport,1>::operator->(&local_1678._Widget);
  pbVar2 = (byte *)((longlong)&pSVar38->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if (((SVirtualWindow *)local_1678._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1678._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1678._Widget.Object = (SViewport *)0x0;
  if (((SVirtualWindow *)pSVar15 == (SVirtualWindow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1468 = (pFVar35->_Content).Widget.Object;
  pTStack_1460 = (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar35->_Content).Widget.Object = (SWidget *)pSVar15;
  (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1460);
  FLLMScope::FLLMScope(&local_1704,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1510 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1508,&local_1510,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1660,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xd8,&local_1716);
  FMemScope::~FMemScope(&local_1508);
  FLLMScope::~FLLMScope(&local_1704);
  pSVar39 = TSharedPtr<SBox,1>::operator->(&local_1660._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar39,(FSlateBaseNamedArgs *)pFVar35);
  pSVar39 = local_1660._Widget.Object;
  SBox::Construct(local_1660._Widget.Object,pFVar35);
  pSVar40 = TSharedPtr<SBox,1>::operator->(&local_1660._Widget);
  if ((pSVar40->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar40->_padding_ + 0x228))(pSVar40);
    bVar23 = 0;
    if (cVar22 != '\0') goto LAB_146c7e2d7;
  }
  else {
LAB_146c7e2d7:
    bVar23 = 0x20;
  }
  *(byte *)&pSVar40->_padding_ = (byte)pSVar40->_padding_ & 0xdf;
  *(byte *)&pSVar40->_padding_ = (byte)pSVar40->_padding_ | bVar23;
  pSVar40 = TSharedPtr<SBox,1>::operator->(&local_1660._Widget);
  pbVar2 = (byte *)((longlong)&pSVar40->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1660._Widget.Object == (SBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar12.ReferenceController = local_1660._Widget.SharedReferenceCount.ReferenceController;
  local_1660._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1660._Widget.Object = (SBox *)0x0;
  if ((pSVar39 == (SBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar49 = local_16b8;
  local_16e8 = pSVar39;
  local_16e0.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SBox **)&local_16b8->_padding_ != &local_16e8) {
    local_16b8->_padding_ = (longlong)pSVar39;
    local_16e8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_16b8->_padding_,&local_16e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16e0.ReferenceController);
  local_16b8 = SOverlay::FArguments::operator+(local_16b0,(FSlotArguments *)pFVar49);
  local_16b0 = (FArguments *)SOverlay::Slot(&local_1378,0);
  pFVar41 = SDPIScaler::FArguments::FArguments((FArguments *)local_e10);
  pFVar42 = SBorder::FArguments::FArguments(&local_498);
  pIVar43 = FAppStyle::Get();
  pcVar8 = *(code **)((longlong)*pIVar43 + 0x50);
  pFVar44 = ::FName::FName((FName *)(local_1408 + 8),L"NoBorder");
  local_1500.Value = (FSlateBrush *)(*pcVar8)(pIVar43,*pFVar44);
  local_1500.bIsSet = true;
  local_1500.Getter._16_8_ = 0;
  local_1500.Getter._0_8_ = 0;
  local_1500.Getter._8_8_ = 0;
  pFVar42 = SBorder::FArguments::BorderImage(pFVar42,&local_1500);
  pFVar42 = SBorder::FArguments::Padding(pFVar42,0.0);
  FLLMScope::FLLMScope(&local_1700,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_15a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_15a0,&local_15a8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1690,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xe5,&local_1715);
  FMemScope::~FMemScope(&local_15a0);
  FLLMScope::~FLLMScope(&local_1700);
  if (local_1690._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1690._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1690._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1458 = (this->LoadingScreenContents).Object;
  pTStack_1450 = (this->LoadingScreenContents).SharedReferenceCount.ReferenceController;
  (this->LoadingScreenContents).Object = (SWidget *)local_1690._Widget.Object;
  (this->LoadingScreenContents).SharedReferenceCount.ReferenceController =
       local_1690._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1450);
  pSVar45 = TSharedPtr<SBorder,1>::operator->(&local_1690._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar45,(FSlateBaseNamedArgs *)pFVar42);
  pSVar45 = local_1690._Widget.Object;
  SBorder::Construct(local_1690._Widget.Object,pFVar42);
  pSVar46 = TSharedPtr<SBorder,1>::operator->(&local_1690._Widget);
  if ((pSVar46->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar46->_padding_ + 0x228))(pSVar46);
    bVar23 = 0;
    if (cVar22 != '\0') goto LAB_146c7e553;
  }
  else {
LAB_146c7e553:
    bVar23 = 0x20;
  }
  *(byte *)&pSVar46->_padding_ = (byte)pSVar46->_padding_ & 0xdf;
  *(byte *)&pSVar46->_padding_ = (byte)pSVar46->_padding_ | bVar23;
  pSVar46 = TSharedPtr<SBorder,1>::operator->(&local_1690._Widget);
  pbVar2 = (byte *)((longlong)&pSVar46->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1690._Widget.Object == (SBorder *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar14.ReferenceController = local_1690._Widget.SharedReferenceCount.ReferenceController;
  local_1690._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1690._Widget.Object = (SBorder *)0x0;
  if ((pSVar45 == (SBorder *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1448 = (pFVar41->_Content).Widget.Object;
  pTStack_1440 = (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar41->_Content).Widget.Object = (SWidget *)pSVar45;
  (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1440);
  FLLMScope::FLLMScope(&local_16fc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1598 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1590,&local_1598,true);
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
            (&local_16a8,"SDPIScaler",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xe3,&local_1714);
  FMemScope::~FMemScope(&local_1590);
  FLLMScope::~FLLMScope(&local_16fc);
  if (local_16a8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_16a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1438 = (this->WidgetRenderer).Object;
  pTStack_1430 = (this->WidgetRenderer).SharedReferenceCount.ReferenceController;
  (this->WidgetRenderer).Object = (FMoviePlayerWidgetRenderer *)local_16a8._Widget.Object;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController =
       local_16a8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1430);
  pSVar47 = TSharedPtr<SDPIScaler,1>::operator->(&local_16a8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar47,(FSlateBaseNamedArgs *)pFVar41);
  pSVar47 = local_16a8._Widget.Object;
  SDPIScaler::Construct(local_16a8._Widget.Object,pFVar41);
  pSVar48 = TSharedPtr<SDPIScaler,1>::operator->(&local_16a8._Widget);
  if ((pSVar48->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar48->_padding_ + 0x228))(pSVar48);
    bVar23 = 0;
    if (cVar22 != '\0') goto LAB_146c7e709;
  }
  else {
LAB_146c7e709:
    bVar23 = 0x20;
  }
  *(byte *)&pSVar48->_padding_ = (byte)pSVar48->_padding_ & 0xdf;
  *(byte *)&pSVar48->_padding_ = (byte)pSVar48->_padding_ | bVar23;
  pSVar48 = TSharedPtr<SDPIScaler,1>::operator->(&local_16a8._Widget);
  pbVar2 = (byte *)((longlong)&pSVar48->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_16a8._Widget.Object == (SDPIScaler *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar13.ReferenceController = local_16a8._Widget.SharedReferenceCount.ReferenceController;
  local_16a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_16a8._Widget.Object = (SDPIScaler *)0x0;
  if ((pSVar47 == (SDPIScaler *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1550.Object = (SWidget *)pSVar47;
  local_1550.SharedReferenceCount.ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar33 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_16b0,&local_1550);
  pFVar49 = SOverlay::FArguments::operator+(local_16b8,pFVar33);
  FLLMScope::FLLMScope(&local_16f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1588 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1568,&local_1588,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1618,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xd3,&local_1713);
  FMemScope::~FMemScope(&local_1568);
  FLLMScope::~FLLMScope(&local_16f8);
  pSVar50 = TSharedPtr<SOverlay,1>::operator->(&local_1618._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar50,(FSlateBaseNamedArgs *)pFVar49);
  pSVar50 = local_1618._Widget.Object;
  SOverlay::Construct(local_1618._Widget.Object,pFVar49);
  pSVar51 = TSharedPtr<SOverlay,1>::operator->(&local_1618._Widget);
  if ((pSVar51->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar51->_padding_ + 0x228))(pSVar51);
    bVar23 = 0;
    if (cVar22 != '\0') goto LAB_146c7e88d;
  }
  else {
LAB_146c7e88d:
    bVar23 = 0x20;
  }
  *(byte *)&pSVar51->_padding_ = (byte)pSVar51->_padding_ & 0xdf;
  *(byte *)&pSVar51->_padding_ = (byte)pSVar51->_padding_ | bVar23;
  pSVar51 = TSharedPtr<SOverlay,1>::operator->(&local_1618._Widget);
  pbVar2 = (byte *)((longlong)&pSVar51->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1618._Widget.Object == (SOverlay *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar18.ReferenceController = local_1618._Widget.SharedReferenceCount.ReferenceController;
  local_1618._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1618._Widget.Object = (SOverlay *)0x0;
  if ((pSVar50 == (SOverlay *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar29 = local_15c0;
  if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1428 = (local_15c0->_Content).Widget.Object;
  pTStack_1420 = (local_15c0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_15c0->_Content).Widget.Object = (SWidget *)pSVar50;
  (local_15c0->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar18.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1420);
  FLLMScope::FLLMScope(&local_16f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1580 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1578,&local_1580,true);
  TSlateDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs>
            (&local_1630,"SDefaultMovieBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xcf,local_1712);
  FMemScope::~FMemScope(&local_1578);
  FLLMScope::~FLLMScope(&local_16f4);
  pSVar52 = TSharedPtr<SDefaultMovieBorder,1>::operator->(&local_1630._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar52,(FSlateBaseNamedArgs *)pFVar29);
  pSVar52 = local_1630._Widget.Object;
  SDefaultMovieBorder::Construct(local_1630._Widget.Object,pFVar29);
  pSVar53 = TSharedPtr<SDefaultMovieBorder,1>::operator->(&local_1630._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar53);
  pSVar53 = TSharedPtr<SDefaultMovieBorder,1>::operator->(&local_1630._Widget);
  pbVar2 = (byte *)((longlong)&pSVar53->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if (((SWindow *)local_1630._Widget.Object == (SWindow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar17.ReferenceController = local_1630._Widget.SharedReferenceCount.ReferenceController;
  local_1630._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1630._Widget.Object = (SDefaultMovieBorder *)0x0;
  if (((SWindow *)pSVar52 == (SWindow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_15f0 = (SWindow *)pSVar52;
  local_15e8.ReferenceController = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MainWindow != (TWeakPtr<SWindow,1> *)&local_15f0) {
    (this->MainWindow).Object = (SWindow *)pSVar52;
    local_15f0 = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->MainWindow).WeakReferenceCount,&local_15e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1630._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1618._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1550.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1690._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_498);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bf0.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c10);
  if ((void *)local_c10._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c10._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c10);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_e10);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1378);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1660._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1678._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1060);
  if ((void *)local_1060._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1060._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1060);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1080.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a8);
  if ((void *)local_10a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_10a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_12b8._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_12b8);
  SBox::FArguments::~FArguments(&local_7d8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1318);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_be8._Slots.AllocatorInstance.Data,local_be8._Slots.ArrayNum);
  if ((FSlotArguments *)local_be8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_be8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_be8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e18.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e38);
  if ((void *)local_e38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e50);
  if ((void *)local_e50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e50);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1048);
  pSVar11 = local_16c8;
  (this->VirtualRenderWindow).Object = local_16c8;
  SharedPointerInternals::FWeakReferencer<1>::operator=
            ((FWeakReferencer<1> *)&(this->VirtualRenderWindow).SharedReferenceCount,&local_16c0);
  if ((pSVar11 == (SVirtualWindow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SViewport::SetActive((SViewport *)pSVar11,true);
  pSVar6 = local_15e0.Object;
  (this->ActiveMovieStreamer).Object = (IMovieStreamer *)local_15e0.Object;
  SharedPointerInternals::FWeakReferencer<1>::operator=
            ((FWeakReferencer<1> *)&(this->ActiveMovieStreamer).SharedReferenceCount,
             &local_15e0.SharedReferenceCount);
  uStack_15b0 = (ulonglong)uStack_171c << 0x20;
  local_15b8 = OnMainWindowClosed;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FDefaultGameMoviePlayer>
            ((TMulticastDelegateRegistration<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pSVar6->WindowClosedEvent,(FDefaultGameMoviePlayer *)local_1408,
             (pmf_28f26513 *)&this[-1].LastBlockingTickTime);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e0.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_1570);
  FLLMScope::~FLLMScope((FLLMScope *)&local_1710);
LAB_146c7edb9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_16f0->SharedReferenceCount).ReferenceController);
  return;
}

// IsInitialized @ 146c7ef40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::IsInitialized(FDefaultGameMoviePlayer *this)

{
  return (bool)(this->OnMovieClipFinishedDelegate).field_0x18;
}

// IsLastMovieInPlaylist @ 146c7ef60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::IsLastMovieInPlaylist(FDefaultGameMoviePlayer *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  
  pFVar1 = (this->MovieStreamers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c7ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)pFVar1 + 0x38))();
    return (bool)uVar2;
  }
  return false;
}

// IsLoadingFinished @ 146c7ef90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::IsLoadingFinished(FDefaultGameMoviePlayer *this)

{
  return *(int *)((longlong)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController + 4
                 ) != 0;
}

// IsMovieCurrentlyPlaying @ 146c7efc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::IsMovieCurrentlyPlaying(FDefaultGameMoviePlayer *this)

{
  return (this->MovieViewportWeakPtr).Object != (SViewport *)0x0;
}

// IsMovieStreamingFinished @ 146c7f090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::IsMovieStreamingFinished(FDefaultGameMoviePlayer *this)

{
  return (this->MovieStreamingIsDone).Counter != 0;
}

// IsStartupMoviePlaying @ 146c7f220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::IsStartupMoviePlaying(FDefaultGameMoviePlayer *this)

{
  return (bool)*(undefined1 *)&this->SyncMechanism;
}

// IsTickable @ 146c7f240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::IsTickable(FDefaultGameMoviePlayer *this)

{
  return true;
}

// LoadingScreenIsPrepared @ 146c7f270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::LoadingScreenIsPrepared(FDefaultGameMoviePlayer *this)

{
  longlong lVar1;
  
  lVar1._0_4_ = this->MovieStreamingIsDone;
  lVar1._4_4_ = this->LoadingIsDone;
  if ((lVar1 == 0) &&
     (((int)this->_padding_ < 1 ||
      (*(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
                ReferenceController < 1)))) {
    return false;
  }
  return true;
}

// MovieStreamingIsPrepared @ 146c7f2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::MovieStreamingIsPrepared(FDefaultGameMoviePlayer *this)

{
  if ((0 < (this->MovieStreamers).ArrayNum) &&
     (0 < (this->LoadingScreenAttributes).MoviePaths.ArrayNum)) {
    return true;
  }
  return false;
}

// OnAnyDown @ 146c7f500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
FDefaultGameMoviePlayer::OnAnyDown(FDefaultGameMoviePlayer *this,FReply *__return_storage_ptr__)

{
  IMovieStreamer *pIVar1;
  char cVar2;
  
  cVar2 = (**(code **)(this->_padding_ + 0x60))(&this->_padding_);
  if (cVar2 != '\0') {
    if ((this->LoadingScreenAttributes).bMoviesAreSkippable != false) {
      LOCK();
      (this->MovieStreamingIsDone).Counter = 1;
      UNLOCK();
      pIVar1 = (this->ActiveMovieStreamer).Object;
      if (pIVar1 != (IMovieStreamer *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
    }
    if ((this->MovieStreamingIsDone).Counter != 0) {
      this->bUserCalledFinish = true;
    }
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnLoadingScreenKeyDown @ 146c7f660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
FDefaultGameMoviePlayer::OnLoadingScreenKeyDown
          (FDefaultGameMoviePlayer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  OnAnyDown(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnLoadingScreenMouseButtonDown @ 146c7f680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
FDefaultGameMoviePlayer::OnLoadingScreenMouseButtonDown
          (FDefaultGameMoviePlayer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  OnAnyDown(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnMainWindowClosed @ 146c7f6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::OnMainWindowClosed
          (FDefaultGameMoviePlayer *this,TSharedRef<SWindow,1> *param_1)

{
  LOCK();
  this->bMainWindowClosed = (TAtomic<bool>)0x1;
  UNLOCK();
  return;
}

// OnMovieClipFinished @ 146c7f6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOnMovieClipFinished * __thiscall
FDefaultGameMoviePlayer::OnMovieClipFinished(FDefaultGameMoviePlayer *this)

{
  return (FOnMovieClipFinished *)&(this->OnMoviePlaybackFinishedDelegate).field_0x10;
}

// OnMoviePlaybackFinished @ 146c7f6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOnMoviePlaybackFinished * __thiscall
FDefaultGameMoviePlayer::OnMoviePlaybackFinished(FDefaultGameMoviePlayer *this)

{
  return (FOnMoviePlaybackFinished *)&(this->OnMoviePlaybackTickDelegate).field_0x10;
}

// OnMoviePlaybackStarted @ 146c7f700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOnMoviePlaybackStarted * __thiscall
FDefaultGameMoviePlayer::OnMoviePlaybackStarted(FDefaultGameMoviePlayer *this)

{
  return (FOnMoviePlaybackStarted *)&(this->OnPrepareLoadingScreenDelegate).field_0x10;
}

// OnMoviePlaybackTick @ 146c7f720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOnMoviePlaybackTick * __thiscall
FDefaultGameMoviePlayer::OnMoviePlaybackTick(FDefaultGameMoviePlayer *this)

{
  return (FOnMoviePlaybackTick *)&(this->OnMoviePlaybackStartedDelegate).field_0x10;
}

// OnPostLoadMap @ 146c7f740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::OnPostLoadMap(FDefaultGameMoviePlayer *this,UWorld *param_1)

{
  if (this->bIsPlayOnBlockingEnabled == false) {
    if (5 < (byte)LogMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
    }
    if ((this->LoadingScreenAttributes).bAllowEngineTick == false) {
                    /* WARNING: Could not recover jumptable at 0x000146c7f786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x58))(&this->_padding_,0);
      return;
    }
  }
  return;
}

// OnPreLoadMap @ 146c7f7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::OnPreLoadMap(FDefaultGameMoviePlayer *this,FString *param_1)

{
  char cVar1;
  
  if (this->bIsPlayOnBlockingEnabled == false) {
    if (5 < (byte)LogMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PostLoadMapWithWorld,this);
    cVar1 = (**(code **)(this->_padding_ + 0x48))(&this->_padding_);
    if (cVar1 != '\0') {
      TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
      AddRaw<FDefaultGameMoviePlayer>
                ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                  *)&FCoreUObjectDelegates::PostLoadMapWithWorld,
                 (FDefaultGameMoviePlayer *)&stack0x00000008,(pmf_0c63b6db *)this);
    }
  }
  return;
}

// OnPrepareLoadingScreen @ 146c7f830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FOnPrepareLoadingScreen * __thiscall
FDefaultGameMoviePlayer::OnPrepareLoadingScreen(FDefaultGameMoviePlayer *this)

{
  return (FOnPrepareLoadingScreen *)&(this->LoadingScreenAttributes).MinimumLoadingScreenDisplayTime
  ;
}

// PassLoadingScreenWindowBackToGame @ 146c7f850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::PassLoadingScreenWindowBackToGame(FDefaultGameMoviePlayer *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMovieStreamer *pIVar4;
  longlong *plVar5;
  UClass *pUVar6;
  UEngine *pUVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pUVar7 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar6 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) goto LAB_146c7f88e;
  }
  pUVar7 = (UEngine *)0x0;
LAB_146c7f88e:
  if (((((this->ActiveMovieStreamer).Object == (IMovieStreamer *)0x0) ||
       (pTVar3 = (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController,
       pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) ||
     (pUVar7 == (UEngine *)0x0)) {
    if (2 < (byte)LogMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
    }
  }
  else {
    pIVar4 = (this->ActiveMovieStreamer).Object;
    pTVar3 = (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar5 = (longlong *)pUVar7[1]._padding_;
    local_18 = SUB84(pIVar4,0);
    uStack_14 = (undefined4)((ulonglong)pIVar4 >> 0x20);
    uStack_10 = SUB84(pTVar3,0);
    uStack_c = (undefined4)((ulonglong)pTVar3 >> 0x20);
    *(undefined4 *)&pUVar7[1]._padding_ = local_18;
    *(undefined4 *)((longlong)&pUVar7[1]._padding_ + 4) = uStack_14;
    *(undefined4 *)&pUVar7[1]._padding_ = uStack_10;
    *(undefined4 *)((longlong)&pUVar7[1]._padding_ + 4) = uStack_c;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146c7f908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}

// PlayEarlyStartupMovies @ 146c7f950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::PlayEarlyStartupMovies(FDefaultGameMoviePlayer *this)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x30))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000146c7f96e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->_padding_ + 0x48))(this);
    return (bool)uVar2;
  }
  return false;
}

// PlayMovie @ 146c7f990

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FDefaultGameMoviePlayer::PlayMovie(FDefaultGameMoviePlayer *this)

{
  double *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  longlong lVar5;
  SWindow *this_00;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  atomic<int> aVar10;
  double dVar11;
  FSharedReferencer<1> FVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  atomic<int> aVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  SViewport *this_01;
  longlong *plVar20;
  TSharedRef<SWidget,1> *pTVar21;
  FDeprecateSlateVector2D FVar22;
  SWindow *pSVar23;
  atomic<int> *paVar24;
  FDelegateHandle FVar25;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  SWindow *pSVar26;
  SWindow *this_03;
  SWindow *this_04;
  longlong *plVar27;
  int iVar28;
  undefined1 local_res8 [8];
  uint local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  TSharedPtr<SViewport,1> local_128;
  SWidget *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  undefined8 local_108;
  FSharedReferencer<1> FStack_100;
  TSharedRef<ISlateViewport,1> local_f8;
  TSharedRef<SWidget,1> local_e8;
  TAttribute<float> local_d8;
  undefined1 local_b0 [48];
  ForAnyElementType local_80;
  code *local_78;
  IMovieStreamer *pIStack_70;
  TSharedRef<SWidget,1> local_68 [2];
  
  this_04 = (SWindow *)0x0;
  cVar13 = (**(code **)(this->_padding_ + 0x70))();
  if (cVar13 == '\0') {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &(this->LoadingScreenAttributes).MinimumLoadingScreenDisplayTime);
  }
  cVar13 = (**(code **)(this->_padding_ + 0x70))(this);
  if (cVar13 == '\0') {
    return false;
  }
  cVar13 = (**(code **)(this->_padding_ + 0x68))(this);
  if (cVar13 != '\0') {
    return false;
  }
  iVar16 = FWindowsPlatformMisc::NumberOfCores();
  if (iVar16 < 2) {
    return false;
  }
  lVar7._0_4_ = this->MovieStreamingIsDone;
  lVar7._4_4_ = this->LoadingIsDone;
  uVar18 = 0;
  if (((lVar7 == 0) &&
      (*(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
                ReferenceController < 1)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("LoadingScreenAttributes.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
                          ,0x161,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  *(undefined1 *)((longlong)&this->SyncMechanism + 1) = 0;
  QueryPerformanceCounter(&local_res18);
  dVar11 = __real_4170000000000000;
  *(double *)&(this->OnMovieClipFinishedDelegate).field_0x10 =
       (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  local_108 = 0;
  FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MovieStreamers !=
      (TArray<TSharedPtr<IMovieStreamer,1>,TSizedDefaultAllocator<32>_> *)&local_108) {
    (this->MovieStreamers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->MovieStreamers).ArrayNum,&FStack_100);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_100.ReferenceController);
  if ((0 < (int)this->_padding_) &&
     (0 < *(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
                   ReferenceController)) {
    local_res10 = (uint)this->_padding_;
    uVar19 = (ulonglong)(int)local_res10;
    plVar20 = (longlong *)this->_padding_;
    plVar27 = plVar20 + uVar19 * 2;
    while( true ) {
      if ((int)this->_padding_ != (int)uVar19) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<IMovieStreamer,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (plVar20 == plVar27) goto LAB_146c7fcdb;
      pTVar1 = (TReferenceControllerBase<1> *)plVar20[1];
      pFVar2 = (FScriptContainerElement *)*plVar20;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar2 == (FScriptContainerElement *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      cVar13 = (*(code *)**(undefined8 **)pFVar2)(pFVar2,&this->LoadingScreenAttributes);
      if (cVar13 != '\0') break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      uVar19 = (ulonglong)local_res10;
      plVar20 = plVar20 + 2;
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0._8_8_ = (this->MovieStreamers).AllocatorInstance.Data;
    local_b0._16_8_ = *(undefined8 *)&(this->MovieStreamers).ArrayNum;
    (this->MovieStreamers).AllocatorInstance.Data = pFVar2;
    *(TReferenceControllerBase<1> **)&(this->MovieStreamers).ArrayNum = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b0._16_8_);
    if ((((this->VirtualRenderWindow).Object != (SVirtualWindow *)0x0) &&
        (pTVar3 = (this->VirtualRenderWindow).SharedReferenceCount.ReferenceController,
        pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
      local_128.SharedReferenceCount.ReferenceController =
           (this->VirtualRenderWindow).SharedReferenceCount.ReferenceController;
      local_128.Object = (SViewport *)0x0;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        aVar10 = (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar10 == (atomic<int>)0x0) {
            local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146c7fbf9;
          }
          LOCK();
          aVar17 = (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar14 = aVar10 == aVar17;
          if (bVar14) {
            (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar10 + 1);
            aVar17 = aVar10;
          }
          UNLOCK();
          aVar10 = aVar17;
        } while (!bVar14);
      }
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        local_128.Object = (SViewport *)(this->VirtualRenderWindow).Object;
      }
LAB_146c7fbf9:
      this_01 = TSharedPtr<SViewport,1>::operator->(&local_128);
      if ((pFVar2 == (FScriptContainerElement *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      plVar20 = (longlong *)(**(code **)(*(longlong *)pFVar2 + 0x20))(pFVar2,local_b0 + 0x18);
      if ((*plVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      local_f8.Object = (ISlateViewport *)*plVar20;
      local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar20[1];
      plVar20[1] = 0;
      *plVar20 = 0;
      if ((local_f8.Object == (ISlateViewport *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      SViewport::SetViewportInterface(this_01,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_b0._32_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
LAB_146c7fcdb:
  if ((((this->MovieStreamers).AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
      (0 < (int)this->_padding_)) &&
     (0 < *(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
                   ReferenceController)) {
    return false;
  }
  if (((int)this->_padding_ < 1) ||
     (*(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
               ReferenceController < 1)) {
    uVar18 = 1;
  }
  LOCK();
  *(undefined4 *)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController = uVar18;
  UNLOCK();
  LOCK();
  iVar16 = 0;
  *(undefined4 *)
   ((longlong)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController + 4) = 0;
  UNLOCK();
  *(undefined1 *)&this->SyncMechanism = 1;
  if (((this->WidgetRenderer).Object == (FMoviePlayerWidgetRenderer *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_d8.Value = *(float *)&(this->UserWidgetDPIScaler).Object;
  local_d8.Getter._0_8_ = 0;
  local_d8.Getter._8_8_ = 0;
  local_d8.bIsSet = true;
  local_d8.Getter._16_8_ = 0;
  SDPIScaler::SetDPIScale((SDPIScaler *)(this->WidgetRenderer).Object,&local_d8);
  if (((this->LoadingScreenContents).Object == (SWidget *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_118 = SNullWidget::NullWidget.Object;
  pSVar4 = (this->LoadingScreenContents).Object;
  pcVar9 = *(code **)(pSVar4->_padding_ + 0x248);
  lVar5._0_4_ = this->MovieStreamingIsDone;
  lVar5._4_4_ = this->LoadingIsDone;
  if (lVar5 == 0) {
    local_e8.Object = SNullWidget::NullWidget.Object;
    local_e8.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar21 = &local_e8;
    iVar28 = 2;
  }
  else {
    pTVar21 = TSharedPtr<SWidget,1>::ToSharedRef
                        ((TSharedPtr<SWidget,1> *)&this->MovieStreamingIsDone,
                         (TSharedRef<SWidget,1> *)(local_b0 + 0x28));
    local_118 = pTVar21->Object;
    iVar28 = iVar16;
    iVar16 = 1;
  }
  FVar12.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
  pTStack_110 = (pTVar21->SharedReferenceCount).ReferenceController;
  if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_110->SharedReferenceCount = (atomic<int>)((int)pTStack_110->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar9)(pSVar4,&local_118);
  if (iVar28 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
  }
  if (iVar16 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_80.Data);
  }
  if (((this->UserWidgetHolder).Object == (SBorder *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  pSVar23 = (SWindow *)(this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController;
  this_00 = (SWindow *)(this->UserWidgetHolder).Object;
  pSVar26 = pSVar23;
  this_03 = this_04;
  if (pSVar23 != (SWindow *)0x0) {
    aVar10 = *(atomic<int> *)&pSVar23->_padding_;
    do {
      pSVar26 = this_04;
      if (aVar10 == (atomic<int>)0x0) goto LAB_146c7feb5;
      LOCK();
      aVar17 = *(atomic<int> *)&pSVar23->_padding_;
      bVar14 = aVar10 == aVar17;
      if (bVar14) {
        *(atomic<int> *)&pSVar23->_padding_ = (atomic<int>)((int)aVar10 + 1);
        aVar17 = aVar10;
      }
      UNLOCK();
      aVar10 = aVar17;
    } while (!bVar14);
    this_03 = (SWindow *)(this->ActiveMovieStreamer).Object;
    pSVar26 = pSVar23;
    if (this_03 != (SWindow *)0x0) goto LAB_146c7fedb;
  }
LAB_146c7feb5:
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar23 = pSVar26;
  if (bVar14) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
LAB_146c7fedb:
  FVar22 = SWindow::GetClientSizeInScreen(this_03);
  SWindow::Resize(this_00,*(FDeprecateVector2DParameter *)FVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar23);
  if (((this->UserWidgetHolder).Object == (SBorder *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  pSVar23 = (SWindow *)(this->UserWidgetHolder).Object;
  pTVar21 = TSharedPtr<SWidget,1>::ToSharedRef((TSharedPtr<SWidget,1> *)&this->MainWindow,local_68);
  SWindow::SetContent(pSVar23,pTVar21);
  lpCriticalSection = &this->LastPlayTime;
  if (lpCriticalSection != (double *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pSVar23 = ::operator_new(0x40);
    if (pSVar23 != (SWindow *)0x0) {
      pTVar1 = (this->SyncMechanismCriticalSection).CriticalSection.Opaque3[2];
      pvVar6 = (this->SyncMechanismCriticalSection).CriticalSection.Opaque3[1];
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        paVar24 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar24 = &pTVar1->SharedReferenceCount;
        LOCK();
        *paVar24 = (atomic<int>)((int)*paVar24 + 1);
        UNLOCK();
      }
      *(undefined1 *)&pSVar23->_padding_ = 0;
      *(undefined4 *)((longlong)&pSVar23->_padding_ + 4) = 0;
      *(undefined4 *)&pSVar23->_padding_ = 0;
      pSVar23->_padding_ = (longlong)pvVar6;
      pSVar23->_padding_ = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar24 = (atomic<int>)((int)*paVar24 + 1);
        UNLOCK();
      }
      pSVar23->_padding_ = (longlong)(this->MovieStreamers).AllocatorInstance.Data;
      lVar7 = *(longlong *)&(this->MovieStreamers).ArrayNum;
      pSVar23->_padding_ = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      this_04 = pSVar23;
    }
    (this->MovieViewportWeakPtr).Object = (SViewport *)this_04;
    FSlateLoadingSynchronizationMechanism::Initialize
              ((FSlateLoadingSynchronizationMechanism *)this_04);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    QueryPerformanceCounter(&local_res20);
    pTStack_110 = (TReferenceControllerBase<1> *)CONCAT44(pTStack_110._4_4_,0x18);
    local_118 = (SWidget *)_vcall__8__flat______;
    (this->UserWidgetDPIScaler).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar11);
    local_78 = _vcall__8__flat______;
    pIStack_70 = (IMovieStreamer *)pTStack_110;
    FVar25 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
             AddRaw<FDefaultGameMoviePlayer>
                       ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)&FCoreDelegates::OnAsyncLoadingFlushUpdate,
                        (FDefaultGameMoviePlayer *)local_b0,
                        (pmf_76adecd0 *)&this[-1].LastBlockingTickTime);
    uVar8 = *(undefined8 *)FVar25.ID;
    this->ViewportDPIScale = (float)(int)uVar8;
    this->BlockingRefCount = (int)((ulonglong)uVar8 >> 0x20);
    this_02 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
              (**(code **)(this->_padding_ + 0x90))(this);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_02);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterMovieStreamer @ 146c800d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::RegisterMovieStreamer
          (FDefaultGameMoviePlayer *this,TSharedPtr<IMovieStreamer,1> *param_1)

{
  int *piVar1;
  TSharedPtr<IMovieStreamer,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<IMovieStreamer,1> *pTVar7;
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar8;
  
  if (param_1->Object != (IMovieStreamer *)0x0) {
    pTVar2 = (TSharedPtr<IMovieStreamer,1> *)this->_padding_;
    for (pTVar7 = pTVar2; pTVar7 != pTVar2 + (int)this->_padding_; pTVar7 = pTVar7 + 1) {
      if (pTVar7->Object == param_1->Object) goto LAB_146c8022e;
    }
    if (((pTVar2 <= param_1) && (param_1 < pTVar2 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar6 + 1;
    puVar8 = (undefined8 *)((longlong)iVar6 * 0x10 + this->_padding_);
    *puVar8 = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    puVar8[1] = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((param_1->Object == (IMovieStreamer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
               *)(**(code **)((longlong)*param_1->Object + 0x58))();
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddRaw<FDefaultGameMoviePlayer>
              (this_00,(FDefaultGameMoviePlayer *)&stack0x00000010,
               (pmf_8694e172 *)&this[-1].LastBlockingTickTime);
  }
LAB_146c8022e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Resume @ 146c80280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::Resume(FDefaultGameMoviePlayer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MovieStreamers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c8028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x68))();
    return;
  }
  return;
}

// SetIsPlayOnBlockingEnabled @ 146c80320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::SetIsPlayOnBlockingEnabled(FDefaultGameMoviePlayer *this,bool param_1)

{
  IMoviePlayerProxyServer *pIVar1;
  
  if ((bool)(this->OnMovieClipFinishedDelegate).field_0x19 == param_1) {
    return;
  }
  (this->OnMovieClipFinishedDelegate).field_0x19 = param_1;
  if (param_1) {
    pIVar1 = (IMoviePlayerProxyServer *)&this->_padding_;
    if (this == (FDefaultGameMoviePlayer *)&DAT_00000010) {
      pIVar1 = (IMoviePlayerProxyServer *)0x0;
    }
    FMoviePlayerProxy::RegisterServer(pIVar1);
    return;
  }
  (**(code **)(this->_padding_ + 0x10))();
  FMoviePlayerProxy::UnregisterServer();
  return;
}

// SetIsSlateThreadAllowed @ 146c80380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::SetIsSlateThreadAllowed(FDefaultGameMoviePlayer *this,bool param_1)

{
  if (((bool)(this->OnMovieClipFinishedDelegate).field_0x12 != param_1) &&
     ((this->OnMovieClipFinishedDelegate).field_0x12 = param_1, !param_1)) {
                    /* WARNING: Could not recover jumptable at 0x000146c80395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))();
    return;
  }
  return;
}

// SetSlateOverlayWidget @ 146c803c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::SetSlateOverlayWidget
          (FDefaultGameMoviePlayer *this,TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (pSVar1 = (this->LoadingScreenContents).Object, pSVar1 != (SWidget *)0x0)) {
    pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
    pTVar3 = TSharedPtr<SWidget,1>::ToSharedRef(param_1,&local_18);
    (*pcVar2)(pSVar1,pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetViewportDPIScale @ 146c80430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::SetViewportDPIScale(FDefaultGameMoviePlayer *this,float param_1)

{
  void *pvVar1;
  
  pvVar1 = (this->SyncMechanismCriticalSection).CriticalSection.Opaque3[1];
  *(float *)&(this->UserWidgetDPIScaler).Object = param_1;
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((longlong)pvVar1 + 0x38) = 0;
  }
  return;
}

// SetupLoadingScreen @ 146c80460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::SetupLoadingScreen
          (FDefaultGameMoviePlayer *this,FLoadingScreenAttributes *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  FLoadingScreenAttributes *pFVar13;
  FLoadingScreenAttributes local_48;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar12 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.AndroidDisableThreadedRenderingFirstLoad",1);
  if (((plVar12 == (longlong *)0x0) ||
      (iVar11 = (**(code **)(*plVar12 + 200))(plVar12), iVar11 == 0)) ||
     ((GEngine != (UEngine *)0x0 &&
      (cVar10 = (**(code **)(GEngine->_padding_ + 0x2c0))(), cVar10 != '\0')))) {
    pTVar3 = (param_1->WidgetLoadingScreen).SharedReferenceCount.ReferenceController;
    pSVar4 = (param_1->WidgetLoadingScreen).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = *(TReferenceControllerBase<1> **)&this->IsMoviePlaying;
    *(SWidget **)&this->MovieStreamingIsDone = pSVar4;
    *(TReferenceControllerBase<1> **)&this->IsMoviePlaying = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar13 = &this->LoadingScreenAttributes;
    if (pFVar13 != (FLoadingScreenAttributes *)&param_1->MoviePaths) {
      DestructItems<FString,int>
                ((FString *)(pFVar13->WidgetLoadingScreen).Object,
                 *(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
                          ReferenceController);
      iVar11 = (param_1->MoviePaths).ArrayNum;
      piVar1 = (int *)((longlong)
                       &(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
                        ReferenceController + 4);
      pFVar5 = (param_1->MoviePaths).AllocatorInstance.Data;
      iVar2 = *piVar1;
      *(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
               ReferenceController = iVar11;
      if ((iVar11 == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,iVar2,(ForAnyElementType *)pFVar13,iVar11,piVar1);
        ConstructItems<FString,FString,int>
                  ((pFVar13->WidgetLoadingScreen).Object,(FString *)pFVar5,iVar11);
      }
    }
    *(float *)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data =
         param_1->MinimumLoadingScreenDisplayTime;
    *(bool *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data + 4) =
         param_1->bAutoCompleteWhenLoadingCompletes;
    *(bool *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data + 5) =
         param_1->bMoviesAreSkippable;
    *(bool *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data + 6) =
         param_1->bWaitForManualStop;
    *(bool *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data + 7) =
         param_1->bAllowInEarlyStartup;
    *(bool *)&(this->LoadingScreenAttributes).MoviePaths.ArrayNum = param_1->bAllowEngineTick;
    *(uchar *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.ArrayNum + 1) =
         (param_1->PlaybackType).Value;
  }
  else {
    local_48.MinimumLoadingScreenDisplayTime = -1.0;
    local_48.MoviePaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.MoviePaths.ArrayNum = 0;
    local_48.MoviePaths.ArrayMax = 0;
    local_48.bAllowEngineTick = false;
    local_48.PlaybackType.Value = '\0';
    local_48.WidgetLoadingScreen.Object = (SWidget *)0x0;
    local_48.WidgetLoadingScreen.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_48.bAutoCompleteWhenLoadingCompletes = true;
    local_48.bMoviesAreSkippable = true;
    local_48.bWaitForManualStop = false;
    local_48.bAllowInEarlyStartup = false;
    FLoadingScreenAttributes::operator=
              ((FLoadingScreenAttributes *)&this->MovieStreamingIsDone,&local_48);
    FVar8.Data = local_48.MoviePaths.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_48.MoviePaths.AllocatorInstance.Data,local_48.MoviePaths.ArrayNum);
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.WidgetLoadingScreen.SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogMoviePlayer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
      return;
    }
  }
  return;
}

// SetupLoadingScreenFromIni @ 146c806d0

/* WARNING: Removing unreachable block (ram,0x000146c808a1) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::SetupLoadingScreenFromIni(FDefaultGameMoviePlayer *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  size_t sVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  wchar_t *_Str;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString *local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  
  lVar9._0_4_ = this->MovieStreamingIsDone;
  lVar9._4_4_ = this->LoadingIsDone;
  if ((lVar9 == 0) &&
     (*(int *)&(this->LoadingScreenAttributes).WidgetLoadingScreen.SharedReferenceCount.
               ReferenceController < 1)) {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_40 = 0;
    local_res10[0] = false;
    local_68 = 0;
    pTStack_60 = (TReferenceControllerBase<1> *)0x0;
    local_48 = 0xbf800000;
    local_44 = 0x101;
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/MoviePlayer.MoviePlayerSettings",L"bWaitForMoviesToComplete",
               local_res10,&GGameIni);
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/MoviePlayer.MoviePlayerSettings",L"bMoviesAreSkippable",
               (bool *)((longlong)&local_44 + 1),&GGameIni);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_44 = CONCAT31(local_44._1_3_,local_res10[0] == false);
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"/Script/MoviePlayer.MoviePlayerSettings",L"StartupMovies",&local_b8,
               &GGameIni);
    if (local_b8.ArrayNum == 0) {
      ::FString::FString(&local_a8,L"Default_Startup");
      if (((local_b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = local_b8.ArrayNum;
      if (local_b8.ArrayNum == local_b8.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
      }
      local_b8.ArrayNum = iVar4 + 1;
      lVar9 = (longlong)iVar4;
      *(undefined8 *)(local_b8.AllocatorInstance.Data + lVar9 * 0x10) = 0;
      *(FScriptContainerElement **)(local_b8.AllocatorInstance.Data + lVar9 * 0x10) =
           local_a8.Data.AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_b8.AllocatorInstance.Data + lVar9 * 0x10 + 8) = local_a8.Data.ArrayNum;
      *(int *)(local_b8.AllocatorInstance.Data + lVar9 * 0x10 + 0xc) = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
    }
    local_98 = (FString *)0x0;
    local_90 = 0;
    pIVar6 = IFileManager::Get();
    pcVar1 = *(code **)((longlong)*pIVar6 + 0x78);
    pFVar7 = FPaths::ProjectContentDir(&local_78);
    ::FString::ConcatFC(&local_88,pFVar7,L"Movies");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar10.Data = local_88.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar6,&local_98,FVar10.Data,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    iVar4 = local_b8.ArrayNum;
    bVar2 = false;
    pFVar12 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 0x10;
    FVar10.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      pFVar11 = local_98 + (int)local_90;
      pFVar7 = local_98;
      if (local_98 == pFVar11) {
LAB_146c80a63:
        FVar10.Data = FVar10.Data + 0x10;
      }
      else {
        do {
          if (*(int *)(FVar10.Data + 8) == 0) {
            _Str = L"";
LAB_146c80977:
            sVar8 = wcslen(_Str);
            iVar5 = ::FString::Find(pFVar7,_Str,(int)sVar8,IgnoreCase,FromStart,-1);
            if (iVar5 != -1) {
              if (pFVar7 != (FString *)0x0) {
                bVar2 = true;
                if (((local_58.Data <= FVar10.Data) &&
                    (FVar10.Data < local_58.Data + (longlong)local_50._4_4_ * 0x10)) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar3)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar5 = (int)local_50;
                if ((int)local_50 == local_50._4_4_) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_58,(int *)((longlong)&local_50 + 4));
                }
                local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
                ::FString::FString((FString *)(local_58.Data + (longlong)iVar5 * 0x10),
                                   (FString *)FVar10.Data);
              }
              goto LAB_146c80a63;
            }
          }
          else {
            _Str = *(wchar_t **)FVar10.Data;
            if (_Str != (wchar_t *)0x0) goto LAB_146c80977;
          }
          pFVar7 = pFVar7 + 1;
        } while (pFVar7 != pFVar11);
        FVar10.Data = FVar10.Data + 0x10;
      }
    }
    if (bVar2) {
      local_44 = CONCAT13(1,(undefined3)local_44);
      (**(code **)(this->_padding_ + 0x20))(this,&local_68);
    }
    DestructItems<FString,int>(local_98,(int)local_90);
    if (local_98 != (FString *)0x0) {
      FMemory::Free(local_98);
    }
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  return;
}

// Shutdown @ 146c80b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::Shutdown(FDefaultGameMoviePlayer *this)

{
  double *pdVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  IMovieStreamer *pIVar6;
  SViewport *pSVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  atomic<int> aVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  undefined1 auStackY_158 [32];
  FLoadingScreenAttributes local_128;
  undefined8 local_f8;
  FSharedReferencer<1> FStack_f0;
  undefined8 local_e8;
  FSharedReferencer<1> FStack_e0;
  undefined8 local_d8;
  FSharedReferencer<1> FStack_d0;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  undefined8 local_b8 [2];
  code *local_a8 [2];
  undefined **local_98;
  double *pdStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  double *pdStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (4 < (byte)LogMoviePlayer._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMoviePlayer);
  }
  FMoviePlayerProxy::UnregisterServer();
  pTVar5 = (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController;
  pTVar14 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar5->SharedReferenceCount;
    do {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146c80bb5;
      LOCK();
      aVar10 = pTVar5->SharedReferenceCount;
      bVar15 = aVar4 == aVar10;
      if (bVar15) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar15);
    pIVar6 = (this->ActiveMovieStreamer).Object;
    pTVar14 = pTVar5;
    if (pIVar6 != (IMovieStreamer *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pIVar6 + 0xc6),
                 &this[-1].LastBlockingTickTime);
      LOCK();
      paVar2 = &pTVar5->SharedReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)pTVar5->_padding_)();
        LOCK();
        paVar2 = &pTVar5->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
    }
  }
LAB_146c80bb5:
  pdVar1 = &this[-1].LastBlockingTickTime;
  (**(code **)(this->_padding_ + 0x50))(this);
  (**(code **)(this->_padding_ + 0x58))(this,0);
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDefaultGameMoviePlayer::Shutdown'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDefaultGameMoviePlayer::Shutdown'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pdStack_90 = pdVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::Shutdown_::__l2::TSTR_UnregisterMoviePlayerTickable265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    pdStack_60 = pdStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FDefaultGameMoviePlayer::Shutdown'::__l2::TSTR_UnregisterMoviePlayerTickable265>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar11);
    uVar13 = (ulonglong)local_48;
    if ((2 < uVar13) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar12 = local_50;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar12 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar12 = local_80;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  (this->OnMovieClipFinishedDelegate).field_0x18 = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,pdVar1
            );
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PreLoadMap,pdVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,pdVar1);
  local_f8 = 0;
  FStack_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MainWindow != (TWeakPtr<SWindow,1> *)&local_f8) {
    (this->MainWindow).Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->MainWindow).WeakReferenceCount,&FStack_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_f0.ReferenceController);
  local_e8 = 0;
  FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LoadingScreenContents != (TSharedPtr<SWidget,1> *)&local_e8) {
    (this->LoadingScreenContents).Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadingScreenContents).SharedReferenceCount,&FStack_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e0.ReferenceController);
  if (&this->ActiveMovieStreamer != (TSharedPtr<IMovieStreamer,1> *)local_b8) {
    pTVar5 = (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController;
    (this->ActiveMovieStreamer).Object = (IMovieStreamer *)0x0;
    (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  local_d8 = 0;
  FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->UserWidgetHolder != (TSharedPtr<SBorder,1> *)&local_d8) {
    (this->UserWidgetHolder).Object = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->UserWidgetHolder).SharedReferenceCount,&FStack_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_d0.ReferenceController);
  DestructItems<TSharedPtr<IMovieStreamer,1>,int>
            ((TSharedPtr<IMovieStreamer,1> *)this->_padding_,(int)this->_padding_);
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar3);
  }
  local_c8 = 0;
  FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MovieStreamers !=
      (TArray<TSharedPtr<IMovieStreamer,1>,TSizedDefaultAllocator<32>_> *)&local_c8) {
    (this->MovieStreamers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->MovieStreamers).ArrayNum,&FStack_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c0.ReferenceController);
  local_128.MoviePaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.MoviePaths.ArrayNum = 0;
  local_128.MoviePaths.ArrayMax = 0;
  local_128.MinimumLoadingScreenDisplayTime = -1.0;
  local_128.WidgetLoadingScreen.Object = (SWidget *)0x0;
  local_128.WidgetLoadingScreen.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_128.bAutoCompleteWhenLoadingCompletes = true;
  local_128.bMoviesAreSkippable = true;
  local_128.bWaitForManualStop = false;
  local_128.bAllowInEarlyStartup = false;
  local_128.bAllowEngineTick = false;
  local_128.PlaybackType.Value = '\0';
  FLoadingScreenAttributes::operator=
            ((FLoadingScreenAttributes *)&this->MovieStreamingIsDone,&local_128);
  FVar9.Data = local_128.MoviePaths.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_128.MoviePaths.AllocatorInstance.Data,local_128.MoviePaths.ArrayNum);
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.WidgetLoadingScreen.SharedReferenceCount.ReferenceController);
  pSVar7 = (this->MovieViewportWeakPtr).Object;
  if (pSVar7 != (SViewport *)0x0) {
    FSlateLoadingSynchronizationMechanism::DestroySlateThread
              ((FSlateLoadingSynchronizationMechanism *)pSVar7);
    pdVar1 = &this->LastPlayTime;
    if (pdVar1 == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pdVar1);
    pSVar7 = (this->MovieViewportWeakPtr).Object;
    if (pSVar7 != (SViewport *)0x0) {
      FSlateLoadingSynchronizationMechanism::DestroySlateThread
                ((FSlateLoadingSynchronizationMechanism *)pSVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)&pSVar7->_padding_)->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)&pSVar7->_padding_)->ReferenceController);
      ::operator_delete(pSVar7,0x40);
    }
    (this->MovieViewportWeakPtr).Object = (SViewport *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)pdVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// StopMovie @ 146c81320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::StopMovie(FDefaultGameMoviePlayer *this)

{
  *(undefined8 *)&(this->OnMovieClipFinishedDelegate).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->SyncMechanism + 1) = 1;
  return;
}

// Suspend @ 146c81360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDefaultGameMoviePlayer::Suspend(FDefaultGameMoviePlayer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MovieStreamers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c8136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x60))();
    return;
  }
  return;
}

// Tick @ 146c81390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::Tick
          (FDefaultGameMoviePlayer *this,FRHICommandListImmediate *param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
                       ,0x2c2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((((this->MainWindow).Object != (SWindow *)0x0) &&
       (pTVar1 = (this->MainWindow).WeakReferenceCount.ReferenceController,
       pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) &&
     ((this->VirtualRenderWindow).Object != (SVirtualWindow *)0x0)) {
    cVar4 = (**(code **)(this->_padding_ + 0x60))(&this->_padding_);
    if ((cVar4 == '\0') && (GDynamicRHI != (FDynamicRHI *)0x0)) {
      cVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x360))();
      if (cVar4 == '\0') {
        lpCriticalSection = &this->SyncMechanismCriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((this->SyncMechanism != (FSlateLoadingSynchronizationMechanism *)0x0) &&
           ((this->SyncMechanism->IsSlateDrawEnqueued).Counter != 0)) {
          GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
          TickStreamer(this,param_1,param_2);
          LOCK();
          (this->SyncMechanism->IsSlateDrawEnqueued).Counter = 0;
          UNLOCK();
          FRHICommandListImmediate::EndFrame(param_1);
          FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThreadFlushResources,None);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  return;
}

// TickStreamer @ 146c814d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::TickStreamer
          (FDefaultGameMoviePlayer *this,FRHICommandListImmediate *param_1,float param_2)

{
  char cVar1;
  IMovieStreamer *pIVar2;
  
  if ((((0 < (this->MovieStreamers).ArrayNum) &&
       (0 < (this->LoadingScreenAttributes).MoviePaths.ArrayNum)) &&
      ((this->ActiveMovieStreamer).Object != (IMovieStreamer *)0x0)) &&
     ((this->MovieStreamingIsDone).Counter == 0)) {
    pIVar2 = TSharedPtr<IMovieStreamer,1>::operator->(&this->ActiveMovieStreamer);
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,param_1,param_2);
    if (cVar1 != '\0') {
      LOCK();
      (this->MovieStreamingIsDone).Counter = 1;
      UNLOCK();
    }
  }
  return;
}

// WaitForMovieToFinish @ 146c81600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDefaultGameMoviePlayer::WaitForMovieToFinish(FDefaultGameMoviePlayer *this,bool param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  double *lpCriticalSection;
  char cVar2;
  SViewport *pSVar3;
  SWindow *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  double dVar6;
  UEngine *this_01;
  ForAnyElementType FVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  char cVar12;
  atomic<int> aVar13;
  uint uVar14;
  SVirtualWindow *this_02;
  FSlateApplication *this_03;
  FRenderCommandList *pFVar15;
  FCommandList *pFVar16;
  FRenderCommandTag *pFVar17;
  TSharedRef<SWidget,1> *pTVar18;
  LPCRITICAL_SECTION lpCriticalSection_00;
  SBorder *pSVar19;
  longlong *plVar20;
  IMovieStreamer *pIVar21;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_04;
  UClass *pUVar22;
  undefined ***pppuVar23;
  TReferenceControllerBase<1> *pTVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  ForAnyElementType *this_05;
  longlong lVar30;
  bool bVar31;
  float fVar32;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  char local_1f8;
  char local_1f7;
  char local_1f6;
  char local_1f5;
  FLoadingScreenAttributes local_1f0;
  FDestructionSentinel local_1c0;
  LARGE_INTEGER local_1a8;
  TSharedRef<SWidget,1> local_1a0;
  SWidget *local_190;
  TReferenceControllerBase<1> *local_188;
  FDestructionSentinel local_180;
  TSharedRef<SWidget,1> local_160 [2];
  code *local_138 [2];
  undefined **local_128;
  double *pdStack_120;
  float local_118;
  undefined4 uStack_114;
  undefined ***local_110;
  code *local_108 [2];
  undefined **local_f8;
  code *pcStack_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  undefined1 local_d8 [16];
  undefined **local_c8;
  double *pdStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  byte local_a8;
  undefined1 local_98 [16];
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined ***local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_228;
  pTVar1 = &(this->LoadingScreenAttributes).MoviePaths;
  bVar31 = *(float *)&(pTVar1->AllocatorInstance).Data == 0.0;
  bVar11 = 0.0 < *(float *)&(pTVar1->AllocatorInstance).Data;
  cVar12 = bVar11 || bVar31;
  local_1f6 = cVar12;
  local_1f5 = param_1;
  cVar9 = (**(code **)(this->_padding_ + 0x70))();
  if ((cVar9 == '\0') || (cVar9 = (**(code **)(this->_padding_ + 0x68))(this), cVar9 == '\0')) {
    this_01 = GEngine;
    if (GEngine != (UEngine *)0x0) {
      pUVar22 = Z_Construct_UClass_UGameEngine_NoRegister();
      lVar25 = this_01->_padding_;
      iVar29 = (int)pUVar22->_padding_;
      if (((iVar29 <= *(int *)(lVar25 + 0x38)) &&
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar25 + 0x30) + (longlong)iVar29 * 8) ==
           &pUVar22->_padding_)) && (GIsRequestingExit == false)) {
        UGameEngine::SwitchGameWindowToUseGameViewport((UGameEngine *)this_01);
      }
    }
  }
  else {
    pSVar3 = (this->MovieViewportWeakPtr).Object;
    if (pSVar3 != (SViewport *)0x0) {
      FSlateLoadingSynchronizationMechanism::DestroySlateThread
                ((FSlateLoadingSynchronizationMechanism *)pSVar3);
      lpCriticalSection = &this->LastPlayTime;
      if (lpCriticalSection == (double *)0x0) {
LAB_146c82058:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pSVar3 = (this->MovieViewportWeakPtr).Object;
      if (pSVar3 != (SViewport *)0x0) {
        FSlateLoadingSynchronizationMechanism::DestroySlateThread
                  ((FSlateLoadingSynchronizationMechanism *)pSVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (((FSharedReferencer<1> *)&pSVar3->_padding_)->ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (((FSharedReferencer<1> *)&pSVar3->_padding_)->ReferenceController);
        ::operator_delete(pSVar3,0x40);
      }
      (this->MovieViewportWeakPtr).Object = (SViewport *)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (!bVar11 && !bVar31) {
      LOCK();
      *(undefined4 *)
       ((longlong)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController + 4) = 1;
      UNLOCK();
    }
    pTVar24 = (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar24->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar24 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146c81736;
        }
        LOCK();
        aVar13 = pTVar24->SharedReferenceCount;
        bVar31 = aVar5 == aVar13;
        if (bVar31) {
          pTVar24->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar13 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar13;
      } while (!bVar31);
      this_00 = (SWindow *)(this->ActiveMovieStreamer).Object;
      if (this_00 != (SWindow *)0x0) {
        pTVar18 = TSharedPtr<SWidget,1>::ToSharedRef
                            ((TSharedPtr<SWidget,1> *)&this->MainWindow,local_160);
        SWindow::SetContent(this_00,pTVar18);
      }
    }
LAB_146c81736:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    if ((this->UserWidgetHolder).Object != (SBorder *)0x0) {
      this_02 = TSharedPtr<SVirtualWindow,1>::operator->
                          ((TSharedPtr<SVirtualWindow,1> *)&this->UserWidgetHolder);
      local_1a0.Object = SNullWidget::NullWidget.Object;
      local_1a0.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent((SWindow *)this_02,&local_1a0);
    }
    cVar9 = *(char *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data +
                     4);
    cVar2 = *(char *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data +
                     6);
    local_1f8 = cVar2;
    local_1f7 = cVar9;
    this_03 = FSlateApplication::Get();
    dVar6 = __real_4170000000000000;
    dVar8 = __real_4170000000000000;
    if ((this->MainWindow).Object != (SWindow *)0x0) {
      FSlateApplication::SetAllUserFocus
                (this_03,(TSharedPtr<SWidget,1> *)&this->MainWindow,SetDirectly);
      dVar6 = __real_4170000000000000;
      dVar8 = __real_4170000000000000;
    }
    while (__real_4170000000000000 = dVar8, dVar8 = __real_4170000000000000,
          __real_4170000000000000 = dVar6, GIsRequestingExit == false) {
      if (cVar2 == '\0') {
        if (*(char *)((longlong)&this->SyncMechanism + 1) != '\0') goto LAB_146c817d8;
        if (cVar12 == '\0') {
          if ((*(int *)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController == 0) &&
             (cVar9 == '\0')) goto LAB_146c8181d;
          break;
        }
LAB_146c817e1:
        QueryPerformanceCounter(&local_1a8);
        if ((double)*(float *)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data <=
            ((double)local_1a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
            *(double *)&(this->OnMovieClipFinishedDelegate).field_0x10) break;
      }
      else if (*(char *)((longlong)&this->SyncMechanism + 1) != '\0') {
LAB_146c817d8:
        if (cVar12 != '\0') goto LAB_146c817e1;
        break;
      }
LAB_146c8181d:
      BeginExitIfRequested();
      if ((((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
          (*(char *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.ArrayNum + 1) == '\x02'))
         && ((cVar10 = (**(code **)(*(longlong *)(this->MovieStreamers).AllocatorInstance.Data +
                                   0x38))(), cVar10 != '\0' &&
             ((cVar2 == '\0' || (*(char *)((longlong)&this->SyncMechanism + 1) != '\0')))))) break;
      dVar6 = __real_4170000000000000;
      if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
        if (((((this->ActiveMovieStreamer).Object == (IMovieStreamer *)0x0) ||
             (pTVar24 = (this->ActiveMovieStreamer).SharedReferenceCount.ReferenceController,
             pTVar24 == (TReferenceControllerBase<1> *)0x0)) ||
            ((int)pTVar24->SharedReferenceCount < 1)) ||
           (*(char *)((longlong)&this->SyncMechanism + 2) != '\0')) {
          if ((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            pIVar21 = TSharedPtr<IMovieStreamer,1>::operator->
                                ((TSharedPtr<IMovieStreamer,1> *)&this->MovieStreamers);
            (**(code **)((longlong)*pIVar21 + 0x10))(pIVar21);
          }
          break;
        }
        FWindowsPlatformApplicationMisc::PumpMessages(true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FCoreDelegates::OnSamplingInput,(FWriteAccessScope *)&local_180);
        bVar31 = false;
        FCoreDelegates::OnSamplingInput._28_4_ = FCoreDelegates::OnSamplingInput._28_4_ + 1;
        iVar29 = FCoreDelegates::OnSamplingInput._16_4_ + -1;
        if (-1 < iVar29) {
          lVar30 = (longlong)iVar29;
          lVar25 = lVar30 << 4;
          bVar31 = false;
          do {
            if (((int)FCoreDelegates::OnSamplingInput._16_4_ <= iVar29) &&
               (local_208 = lVar30,
               local_200 = (longlong)(int)FCoreDelegates::OnSamplingInput._16_4_,
               bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((*(int *)(lVar25 + 8 + FCoreDelegates::OnSamplingInput._8_8_) == 0) ||
                (*(longlong **)(lVar25 + FCoreDelegates::OnSamplingInput._8_8_) == (longlong *)0x0))
               || (cVar12 = (**(code **)(**(longlong **)
                                           (lVar25 + FCoreDelegates::OnSamplingInput._8_8_) + 0x68))
                                      (), cVar12 == '\0')) {
              bVar31 = true;
            }
            lVar30 = lVar30 + -1;
            lVar25 = lVar25 + -0x10;
            iVar29 = iVar29 + -1;
            cVar12 = local_1f6;
          } while (-1 < iVar29);
        }
        FCoreDelegates::OnSamplingInput._28_4_ = FCoreDelegates::OnSamplingInput._28_4_ + -1;
        if (bVar31) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnSamplingInput,false);
        }
        if (local_180.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
        }
        FSlateApplication::PollGameDeviceState(this_03);
        FSlateApplication::FinishedInputThisFrame(this_03);
        fVar32 = (float)(this_03->CurrentTime - this_03->LastTickTime);
        if ((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          (**(code **)(*(longlong *)(this->MovieStreamers).AllocatorInstance.Data + 0x70))();
        }
        if (((GEngine != (UEngine *)0x0) && (local_1f5 != '\0')) &&
           ((char)(this->LoadingScreenAttributes).MoviePaths.ArrayNum != '\0')) {
          (**(code **)(GEngine->_padding_ + 0x2f8))(GEngine,fVar32);
        }
        if ((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          (**(code **)(*(longlong *)(this->MovieStreamers).AllocatorInstance.Data + 0x78))();
        }
        local_128 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::`28'::<lambda_1>,1,0>
                     ::_vftable_;
        pdStack_120 = &this[-1].LastBlockingTickTime;
        local_110 = (undefined ***)0x0;
        local_138[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
        uStack_114 = local_160[1].SharedReferenceCount.ReferenceController._4_4_;
        local_118 = fVar32;
        pFVar15 = FRenderCommandList::GetInstanceTLS();
        if (pFVar15 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::WaitForMovieToFinish_::__l28::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
        }
        else {
          pFVar16 = FRenderCommandList::GetRenderThread(pFVar15);
          local_b8._4_4_ = uStack_114;
          local_b8._0_4_ = local_118;
          local_d8._0_8_ = local_138[0];
          local_138[0] = (code *)0x0;
          local_b0 = local_110;
          local_110 = (undefined ***)0x0;
          local_c8 = local_128;
          pdStack_c0 = pdStack_120;
          local_a8 = 2;
          pFVar17 = (FRenderCommandTag *)
                    TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar16,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_d8,pFVar17);
          uVar26 = (ulonglong)local_a8;
          if ((2 < uVar26) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar31)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar26] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_d8._0_8_ != (code *)0x0) {
              pppuVar23 = (undefined ***)(local_d8 + 0x10);
              if (local_b0 != (undefined ***)0x0) {
                pppuVar23 = local_b0;
              }
              (*(code *)(*pppuVar23)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar26])(local_d8);
          }
        }
        if (local_138[0] != (code *)0x0) {
          pppuVar23 = &local_128;
          if (local_110 != (undefined ***)0x0) {
            pppuVar23 = local_110;
          }
          (*(code *)(*pppuVar23)[2])();
        }
        plVar20 = *(longlong **)&this_03->field_0x60;
        lpCriticalSection_00 = (LPCRITICAL_SECTION)(**(code **)(*plVar20 + 0x160))(plVar20);
        if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) goto LAB_146c82058;
        EnterCriticalSection(lpCriticalSection_00);
        FSlateApplication::Tick(this_03,All);
        (**(code **)(*plVar20 + 200))(plVar20);
        LeaveCriticalSection(lpCriticalSection_00);
        local_e0 = (undefined ***)0x0;
        local_f8 = &
                   ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        pcStack_f0 = `FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::<lambda_2>::
                     <lambda_invoker_cdecl>;
        local_108[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                       ::Call;
        pFVar15 = FRenderCommandList::GetInstanceTLS();
        if (pFVar15 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::WaitForMovieToFinish_::__l28::TSTR_FinishLoadingMovieFrame557>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_108);
        }
        else {
          pFVar16 = FRenderCommandList::GetRenderThread(pFVar15);
          local_98._0_8_ = local_108[0];
          local_108[0] = (code *)0x0;
          local_70 = local_e0;
          local_e0 = (undefined ***)0x0;
          local_88 = local_f8;
          pcStack_80 = pcStack_f0;
          local_78 = local_e8;
          local_68 = 2;
          pFVar17 = (FRenderCommandTag *)
                    TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_FinishLoadingMovieFrame557>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar16,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_98,pFVar17);
          uVar26 = (ulonglong)local_68;
          if ((2 < uVar26) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar31)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar26] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_98._0_8_ != (code *)0x0) {
              pppuVar23 = (undefined ***)(local_98 + 0x10);
              if (local_70 != (undefined ***)0x0) {
                pppuVar23 = local_70;
              }
              (*(code *)(*pppuVar23)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar26])(local_98);
          }
        }
        if (local_108[0] != (code *)0x0) {
          pppuVar23 = &local_f8;
          if (local_e0 != (undefined ***)0x0) {
            pppuVar23 = local_e0;
          }
          (*(code *)(*pppuVar23)[2])();
        }
        FlushRenderingCommands();
        cVar9 = local_1f7;
        cVar2 = local_1f8;
        dVar6 = __real_4170000000000000;
        if ((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          (**(code **)(*(longlong *)(this->MovieStreamers).AllocatorInstance.Data + 0x80))();
          cVar9 = local_1f7;
          cVar2 = local_1f8;
          dVar6 = __real_4170000000000000;
        }
      }
    }
    if ((this->LoadingScreenContents).Object != (SWidget *)0x0) {
      pSVar19 = TSharedPtr<SBorder,1>::operator->
                          ((TSharedPtr<SBorder,1> *)&this->LoadingScreenContents);
      pcVar4 = *(code **)(pSVar19->_padding_ + 0x248);
      local_190 = SNullWidget::NullWidget.Object;
      local_188 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar4)(pSVar19,&local_190);
    }
    LOCK();
    *(undefined4 *)
     ((longlong)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController + 4) = 1;
    UNLOCK();
    lVar25._0_4_ = this->ViewportDPIScale;
    lVar25._4_4_ = this->BlockingRefCount;
    *(undefined1 *)&this->SyncMechanism = 0;
    if (lVar25 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::OnAsyncLoadingFlushUpdate,(FWriteAccessScope *)&local_1c0);
      uVar28 = 0;
      uVar26 = uVar28;
      iVar29 = FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_;
      if (0 < (int)FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_) {
        do {
          uVar27 = (uint)uVar28;
          uVar14 = 0;
          if ((int)uVar27 < iVar29) {
            uVar14 = ~uVar27 >> 0x1f;
          }
          if (uVar14 == 0) {
            local_200 = (longlong)iVar29;
            local_208 = (longlong)(int)uVar27;
            bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            iVar29 = FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_;
            if (bVar31) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          this_05 = (ForAnyElementType *)(FCoreDelegates::OnAsyncLoadingFlushUpdate._8_8_ + uVar26);
          if (((*(int *)&this_05[1].Data != 0) && (this_05->Data != (FScriptContainerElement *)0x0))
             && (plVar20 = (longlong *)(**(code **)(*(longlong *)this_05->Data + 0x40))(),
                iVar29 = FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_, *plVar20 == lVar25)) {
            if ((*(int *)&this_05[1].Data != 0) && (this_05->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_05->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_05,0,0,0x10)
              ;
              *(undefined4 *)&this_05[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FCoreDelegates::OnAsyncLoadingFlushUpdate,false);
            break;
          }
          uVar28 = (ulonglong)(uVar27 + 1);
          uVar26 = uVar26 + 0x10;
        } while ((int)(uVar27 + 1) < iVar29);
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
    }
    this->ViewportDPIScale = 0.0;
    this->BlockingRefCount = 0;
    if (((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) &&
       ((plVar20 = (longlong *)(**(code **)((longlong)*(GEngine->XRSystem).Object + 0x140))(),
        plVar20 != (longlong *)0x0 && ((this->MovieViewportWeakPtr).Object == (SViewport *)0x0)))) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
    LOCK();
    *(undefined4 *)&(this->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController = 1;
    UNLOCK();
    FlushRenderingCommands();
    if ((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      pIVar21 = TSharedPtr<IMovieStreamer,1>::operator->
                          ((TSharedPtr<IMovieStreamer,1> *)&this->MovieStreamers);
      (**(code **)((longlong)*pIVar21 + 0x10))(pIVar21);
      if ((this->MovieStreamers).AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        pIVar21 = TSharedPtr<IMovieStreamer,1>::operator->
                            ((TSharedPtr<IMovieStreamer,1> *)&this->MovieStreamers);
        (**(code **)((longlong)*pIVar21 + 0x40))(pIVar21);
      }
    }
    local_1f0.MoviePaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.MoviePaths.ArrayNum = 0;
    local_1f0.MoviePaths.ArrayMax = 0;
    local_1f0.MinimumLoadingScreenDisplayTime = -1.0;
    local_1f0.WidgetLoadingScreen.Object = (SWidget *)0x0;
    local_1f0.WidgetLoadingScreen.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_1f0.bAutoCompleteWhenLoadingCompletes = true;
    local_1f0.bMoviesAreSkippable = true;
    local_1f0.bWaitForManualStop = false;
    local_1f0.bAllowInEarlyStartup = false;
    local_1f0.bAllowEngineTick = false;
    local_1f0.PlaybackType.Value = '\0';
    FLoadingScreenAttributes::operator=
              ((FLoadingScreenAttributes *)&this->MovieStreamingIsDone,&local_1f0);
    FVar7.Data = local_1f0.MoviePaths.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_1f0.MoviePaths.AllocatorInstance.Data,local_1f0.MoviePaths.ArrayNum)
    ;
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.WidgetLoadingScreen.SharedReferenceCount.ReferenceController);
    this_04 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
              (**(code **)(this->_padding_ + 0xa0))(this);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_04);
  }
  return;
}

// WillAutoCompleteWhenLoadFinishes @ 146c82080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FDefaultGameMoviePlayer::WillAutoCompleteWhenLoadFinishes(FDefaultGameMoviePlayer *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  
  if (*(char *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.AllocatorInstance.Data + 4) !=
      '\0') {
    return true;
  }
  if (((*(char *)((longlong)&(this->LoadingScreenAttributes).MoviePaths.ArrayNum + 1) == '\x02') &&
      (pFVar1 = (this->MovieStreamers).AllocatorInstance.Data,
      pFVar1 != (FScriptContainerElement *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)pFVar1 + 0x38))(), cVar2 != '\0')) {
    return true;
  }
  return false;
}

