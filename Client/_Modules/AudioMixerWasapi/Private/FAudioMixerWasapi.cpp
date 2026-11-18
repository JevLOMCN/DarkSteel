// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 49

// <lambda_invoker_cdecl> @ 148d426a0

void __cdecl
`Audio::FAudioMixerWasapi::InitializeHardware'::__l5::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FAudioMixerWasapi @ 148d428e0

FAudioMixerWasapi * __thiscall Audio::FAudioMixerWasapi::FAudioMixerWasapi(FAudioMixerWasapi *this)

{
  FAudioMixerPlatformSwappable::FAudioMixerPlatformSwappable((FAudioMixerPlatformSwappable *)this);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  (this->DeviceInfoCache).Ptr = (IAudioPlatformDeviceInfoCache *)0x0;
  (this->DeviceManager).Ptr = (IAudioMixerWasapiDeviceManager *)0x0;
  this->bIsInitialized = false;
  (this->DeviceSwapContext).Ptr = (FWasapiDeviceSwapContext *)0x0;
  return this;
}

// ~FAudioMixerWasapi @ 148d42ef0

void __thiscall Audio::FAudioMixerWasapi::~FAudioMixerWasapi(FAudioMixerWasapi *this)

{
  FWasapiDeviceSwapContext *pFVar1;
  IAudioMixerWasapiDeviceManager *pIVar2;
  IAudioPlatformDeviceInfoCache *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  pFVar1 = (this->DeviceSwapContext).Ptr;
  if (pFVar1 != (FWasapiDeviceSwapContext *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pIVar2 = (this->DeviceManager).Ptr;
  if (pIVar2 != (IAudioMixerWasapiDeviceManager *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->DeviceInfoCache).Ptr;
  if (pIVar3 != (IAudioPlatformDeviceInfoCache *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  return;
}

// operator() @ 148d43300

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> __thiscall
`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  undefined8 *puVar2;
  IAudioMixerWasapiDeviceManager *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FWasapiDeviceSwapResult *this_00;
  FWasapiDeviceSwapResult *pFVar8;
  TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> TVar9;
  FStaticBasicLogRecord *pFVar10;
  FDeviceSwapResult *in_RDX;
  FWasapiDeviceSwapResult *pFVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar12;
  bool bVar13;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18 [2];
  
  pFVar8 = (FWasapiDeviceSwapResult *)0x0;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x130);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pFVar11 = pFVar8;
  if (*(int *)(*(longlong *)this + 0x68) == 5) {
    pFVar11 = *(FWasapiDeviceSwapResult **)(*(longlong *)this + 0x220);
    *(undefined8 *)(*(longlong *)this + 0x220) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_PerformDeviceSwap");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId587,"FAudioMixerWasapi_PerformDeviceSwap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x24b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId587);
  }
  QueryPerformanceCounter(&local_res8);
  bVar5 = FWindowsPlatformMisc::CoInitialize(Multithreaded);
  if (pFVar11 == (FWasapiDeviceSwapResult *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    in_RDX->_padding_ = 0;
    if (bVar5) {
      FWindowsPlatformMisc::CoUninitialize();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)in_RDX;
  }
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  if ((longlong *)pFVar11[1]._padding_ == (longlong *)0x0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      pFVar10 = &::LOG_Static;
      goto LAB_148d43470;
    }
  }
  else {
    (**(code **)(*(longlong *)pFVar11[1]._padding_ + 0x48))();
    (**(code **)(*(longlong *)pFVar11[1]._padding_ + 0x38))();
    (**(code **)(*(longlong *)pFVar11[1]._padding_ + 0x10))();
    puVar2 = (undefined8 *)pFVar11[1]._padding_;
    if (puVar2 != (undefined8 *)0x0) {
      pFVar11[1]._padding_ = 0;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (3 < (byte)LogAudioMixer._0_1_) {
      pFVar10 = &::LOG_Static;
LAB_148d43470:
      UE::Logging::Private::BasicLog<4>(pFVar10,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  if ((pFVar11->bIsAggregateDevice == false) || ((int)pFVar11[1]._padding_ == 0)) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      pFVar10 = &::LOG_Static;
LAB_148d436ae:
      UE::Logging::Private::BasicLog<4>(pFVar10,(FLogCategoryBase *)&LogAudioMixer);
    }
LAB_148d436ba:
    in_RDX->_padding_ = (longlong)pFVar8;
    goto LAB_148d436bd;
  }
  this_00 = ::operator_new(0x78);
  if (this_00 != (FWasapiDeviceSwapResult *)0x0) {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    (this_00->NewDeviceManager).Ptr = (IAudioMixerWasapiDeviceManager *)0x0;
    *(undefined8 *)&this_00->bIsAggregateDevice = 0;
    pFVar8 = Audio::FWasapiDeviceSwapResult::FWasapiDeviceSwapResult(this_00);
  }
  Audio::FAudioMixerWasapi::CreateDeviceManager
            (SUB81(pFVar11[1]._padding_,0),&pFVar8->NewDeviceManager);
  pIVar3 = (pFVar8->NewDeviceManager).Ptr;
  if (pIVar3 == (IAudioMixerWasapiDeviceManager *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      pFVar10 = &::LOG_Static;
LAB_148d43504:
      UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    cVar6 = (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&pFVar11[1]._padding_,&pFVar11[1]._padding_)
    ;
    if (cVar6 == '\0') {
      if (2 < (byte)LogAudioMixer._0_1_) {
        pFVar10 = &::LOG_Static;
        goto LAB_148d43504;
      }
    }
    else {
      pIVar3 = (pFVar8->NewDeviceManager).Ptr;
      cVar6 = (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,&pFVar11[1]._padding_);
      if (cVar6 != '\0') {
        if (Audio::WasapiWinNotificationClient.Object != (FWindowsMMNotificationClient *)0x0) {
          if ((Audio::WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            TVar9.Ptr = (FDeviceSwapResult *)(*pcVar4)();
            return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)
                   TVar9.Ptr;
          }
          Audio::FWindowsMMNotificationClient::RegisterForSessionNotifications
                    (Audio::WasapiWinNotificationClient.Object,(FString *)&pFVar11->_padding_);
        }
        QueryPerformanceCounter(local_res18);
        pFVar8->_padding_ =
             (longlong)
             ((double)(ulonglong)(local_res18[0].QuadPart - (longlong)local_res8) *
              FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
        if (((int)pFVar11[1]._padding_ < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          TVar9.Ptr = (FDeviceSwapResult *)(*pcVar4)();
          return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)
                 TVar9.Ptr;
        }
        Audio::FAudioPlatformDeviceInfo::operator=
                  ((FAudioPlatformDeviceInfo *)&pFVar8->_padding_,
                   (FAudioPlatformDeviceInfo *)(pFVar11[1]._padding_ + 8));
        pFVar8->bIsAggregateDevice = SUB81(pFVar11[1]._padding_,0);
        iVar1 = (int)pFVar11->_padding_;
        iVar12 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange((FString *)&pFVar8->_padding_,(wchar_t *)pFVar11->_padding_,iVar12);
        if (3 < (byte)LogAudioMixer._0_1_) {
          pFVar10 = &::LOG_Static;
          goto LAB_148d436ae;
        }
        goto LAB_148d436ba;
      }
      if (2 < (byte)LogAudioMixer._0_1_) {
        pFVar10 = (FStaticBasicLogRecord *)&PTR_u_FAudioMixerWasa_151cdbc88;
        goto LAB_148d43504;
      }
    }
  }
  puVar2 = (undefined8 *)pFVar8->_padding_;
  in_RDX->_padding_ = 0;
  (*(code *)*puVar2)(pFVar8,1);
LAB_148d436bd:
  if (bVar5) {
    FWindowsPlatformMisc::CoUninitialize();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  (**(code **)pFVar11->_padding_)(pFVar11,1);
  return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)in_RDX;
}

// CheckThreadedDeviceSwap @ 148d43fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FAudioMixerWasapi::CheckThreadedDeviceSwap(FAudioMixerWasapi *this)

{
  longlong *lpCriticalSection;
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar2 = false;
  bVar4 = false;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap");
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1055,"FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x41f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1055);
  }
  if (((int)this->_padding_ != 5) && (this->_padding_ == 0)) goto LAB_14452726f;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((int)this->_padding_ == 5) && (this->_padding_ == 0)) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Blue,"FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_StartAsyncSwap");
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1070,
                 "FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_StartAsyncSwap",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                 ,0x42e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1070);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x168))(this);
    if (cVar1 == '\0') {
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x170))(this);
    }
LAB_144527253:
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    bVar4 = bVar2;
  }
  else {
    bVar4 = bVar2;
    if ((this->_padding_ != 0) && (*(char *)(this->_padding_ + 0x68) != '\0')) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,
                 "FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_FinishedJobSwitchOver");
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1084,
                   "FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_FinishedJobSwitchOver",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                   ,0x43c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1084);
      }
      FAudioMixerPlatformSwappable::GetDeviceSwapResult((FAudioMixerPlatformSwappable *)this);
      if ((int)this->_padding_ != 0) {
        IAudioMixerPlatformInterface::StopRunningNullDevice((IAudioMixerPlatformInterface *)this);
      }
      IAudioMixerPlatformInterface::StopGeneratingAudio((IAudioMixerPlatformInterface *)this);
      bVar2 = true;
      cVar1 = (**(code **)(this->_padding_ + 0x180))(this);
      if ((cVar1 == '\0') && (2 < (byte)LogAudioMixer._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      goto LAB_144527253;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_14452726f:
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar4;
}

// CloseAudioStream @ 148d44080

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FAudioMixerWasapi::CloseAudioStream(FAudioMixerWasapi *this)

{
  longlong *lpCriticalSection;
  IAudioMixerWasapiDeviceManager *pIVar1;
  char cVar2;
  
  if ((this->bIsInitialized != false) && ((int)this->_padding_ != 0)) {
    lpCriticalSection = &this->_padding_;
    if (lpCriticalSection != (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FAudioMixerPlatformSwappable::ResetActiveDeviceSwapFuture
                ((FAudioMixerPlatformSwappable *)this);
      pIVar1 = (this->DeviceManager).Ptr;
      if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
        cVar2 = (**(code **)((longlong)*pIVar1 + 0x38))();
        if ((cVar2 == '\0') && (2 < (byte)LogAudioMixer._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      LOCK();
      *(undefined4 *)&this->_padding_ = 0;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  return false;
}

// CreateDeviceManager @ 148d44550

void __cdecl
Audio::FAudioMixerWasapi::CreateDeviceManager
          (bool param_1,
          TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWasapiAggregateDeviceMgr *this;
  FWasapiAggregateDeviceMgr *pFVar3;
  IAudioMixerWasapiDeviceManager *pIVar4;
  IAudioMixerWasapiDeviceManager IVar5;
  IAudioMixerWasapiDeviceManager *pIVar6;
  
  if (param_1) {
    this = ::operator_new(0x38);
    pFVar3 = (FWasapiAggregateDeviceMgr *)0x0;
    if (this != (FWasapiAggregateDeviceMgr *)0x0) {
      pFVar3 = FWasapiAggregateDeviceMgr::FWasapiAggregateDeviceMgr(this);
    }
    pIVar6 = param_2->Ptr;
    param_2->Ptr = (IAudioMixerWasapiDeviceManager *)pFVar3;
    if (pIVar6 == (IAudioMixerWasapiDeviceManager *)0x0) goto LAB_148d445c7;
    IVar5 = *pIVar6;
  }
  else {
    pIVar4 = ::operator_new(0x18);
    if (pIVar4 != (IAudioMixerWasapiDeviceManager *)0x0) {
      *pIVar4 = (IAudioMixerWasapiDeviceManager)&___7FWasapiDefaultDeviceMgr_Audio__6B_;
      pIVar4[1] = (IAudioMixerWasapiDeviceManager)0x0;
      pIVar4[2] = (IAudioMixerWasapiDeviceManager)0x0;
    }
    pIVar6 = param_2->Ptr;
    param_2->Ptr = pIVar4;
    if (pIVar6 == (IAudioMixerWasapiDeviceManager *)0x0) goto LAB_148d445c7;
    IVar5 = *pIVar6;
  }
  (**(code **)IVar5)(pIVar6);
LAB_148d445c7:
  if ((param_2->Ptr == (IAudioMixerWasapiDeviceManager *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_729850716096561121>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0x1f,"InDeviceManager"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EnqueueAsyncDeviceSwap @ 148d44ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap(FAudioMixerWasapi *this)

{
  longlong *lpCriticalSection;
  TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> *pTVar1;
  undefined ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  TUniqueFunction<void___cdecl(void)> local_78;
  code *local_48 [2];
  undefined **local_38;
  FAudioMixerWasapi *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_78._0_8_ = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                  ::Call;
    local_78._40_8_ = 0;
    local_30 = this;
    pTVar1 = Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>
                       ((TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                         *)local_88,TaskGraph,
                        (TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>
                         *)local_48,&local_78);
    if ((TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> *)
        &this->_padding_ != pTVar1) {
      this->_padding_ = *(longlong *)pTVar1;
      *(undefined8 *)pTVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,(FSharedReferencer<1> *)&pTVar1->field_0x8
                );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_88._8_8_);
    if (local_48[0] != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ExtractAggregateDeviceName @ 148d450a0

FString * __thiscall
Audio::FAudioMixerWasapi::ExtractAggregateDeviceName
          (FAudioMixerWasapi *this,FString *__return_storage_ptr__,FString *param_1)

{
  FWindowsMMDeviceCache::ExtractAggregateDeviceName(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetDefaultDeviceName @ 148d45130

FString * __thiscall
Audio::FAudioMixerWasapi::GetDefaultDeviceName
          (FAudioMixerWasapi *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDefaultOutputDeviceIndex @ 148d45150

bool __thiscall
Audio::FAudioMixerWasapi::GetDefaultOutputDeviceIndex(FAudioMixerWasapi *this,uint *param_1)

{
  *param_1 = 0xffffffff;
  return true;
}

// GetDeviceId @ 148d45160

FString * __thiscall
Audio::FAudioMixerWasapi::GetDeviceId(FAudioMixerWasapi *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(FString *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetDeviceInfoCache @ 148d45190

IAudioPlatformDeviceInfoCache * __thiscall
Audio::FAudioMixerWasapi::GetDeviceInfoCache(FAudioMixerWasapi *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x130))();
  if (cVar1 != '\0') {
    return (this->DeviceInfoCache).Ptr;
  }
  return (IAudioPlatformDeviceInfoCache *)0x0;
}

// GetMMDevice @ 148d451d0

TComPtr<IMMDevice> __thiscall
Audio::FAudioMixerWasapi::GetMMDevice(FAudioMixerWasapi *this,FString *param_1)

{
  code *pcVar1;
  FWindowsMMNotificationClient *this_00;
  bool bVar2;
  TComPtr<IMMDevice> TVar3;
  FString *in_R8;
  FString local_18;
  
  if (WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (TComPtr<IMMDevice>)(IMMDevice *)param_1;
  }
  if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3.RawPointer = (IMMDevice *)(*pcVar1)();
    return (TComPtr<IMMDevice>)TVar3.RawPointer;
  }
  this_00 = WasapiWinNotificationClient.Object;
  ::FString::FString(&local_18,in_R8);
  FWindowsMMNotificationClient::GetDevice(this_00,param_1);
  return (TComPtr<IMMDevice>)(IMMDevice *)param_1;
}

// GetNumFrames @ 148d452c0

int __thiscall Audio::FAudioMixerWasapi::GetNumFrames(FAudioMixerWasapi *this,int param_1)

{
  IAudioMixerWasapiDeviceManager *pIVar1;
  int iVar2;
  
  pIVar1 = (this->DeviceManager).Ptr;
  if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d452cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x28))();
    return iVar2;
  }
  return param_1;
}

// GetNumOutputDevices @ 148d45390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FAudioMixerWasapi::GetNumOutputDevices(FAudioMixerWasapi *this,uint *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FString *pFVar3;
  bool bVar4;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_GetNumOutputDevices");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId89,"FAudioMixerWasapi_GetNumOutputDevices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x59);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId89);
  }
  *param_1 = 0;
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
  if (plVar1 == (longlong *)0x0) {
    pFVar3 = ::FString::FString(&local_18,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                               );
    ::FString::FString(&local_28,L"FAudioMixerWasapi device cache not initialized");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_28,pFVar3,100,Warning);
    if ((FAudioPlatformDeviceInfo *)local_28.Data.AllocatorInstance.Data !=
        (FAudioPlatformDeviceInfo *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
    *param_1 = *(uint *)(lVar2 + 8);
    DestructItems<Audio::FAudioPlatformDeviceInfo,int>
              ((FAudioPlatformDeviceInfo *)local_28.Data.AllocatorInstance.Data,
               local_28.Data.ArrayNum);
    if ((FAudioPlatformDeviceInfo *)local_28.Data.AllocatorInstance.Data !=
        (FAudioPlatformDeviceInfo *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar4;
}

// GetOutputDeviceInfo @ 148d454f0

bool __thiscall
Audio::FAudioMixerWasapi::GetOutputDeviceInfo
          (FAudioMixerWasapi *this,uint param_1,FAudioPlatformDeviceInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  FAudioPlatformDeviceInfo *local_68;
  int local_60;
  FAudioPlatformDeviceInfo local_58;
  char local_10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_GetOutputDeviceInfo");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId107,"FAudioMixerWasapi_GetOutputDeviceInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  }
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
  if (plVar5 == (longlong *)0x0) {
LAB_148d4568a:
    bVar2 = false;
  }
  else {
    if (param_1 == 0xffffffff) {
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
      if (local_10 == '\0') goto LAB_148d4568a;
      FAudioPlatformDeviceInfo::operator=(param_2,&local_58);
      if (local_10 != '\0') {
        if (local_58.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.OutputChannelArray.AllocatorInstance.Data);
        }
        local_68 = (FAudioPlatformDeviceInfo *)local_58.Name.Data.AllocatorInstance.Data;
        if (local_58.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.DeviceId.Data.AllocatorInstance.Data);
          local_68 = (FAudioPlatformDeviceInfo *)local_58.Name.Data.AllocatorInstance.Data;
        }
        goto LAB_148d45662;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_68);
      if (((int)param_1 < 0) || (local_60 <= (int)param_1)) {
        DestructItems<Audio::FAudioPlatformDeviceInfo,int>(local_68,local_60);
        if (local_68 != (FAudioPlatformDeviceInfo *)0x0) {
          FMemory::Free(local_68);
        }
        goto LAB_148d4568a;
      }
      uVar4 = 0;
      if ((int)param_1 < local_60) {
        uVar4 = ~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FAudioPlatformDeviceInfo::operator=(param_2,local_68 + (int)param_1);
      DestructItems<Audio::FAudioPlatformDeviceInfo,int>(local_68,local_60);
LAB_148d45662:
      if (local_68 != (FAudioPlatformDeviceInfo *)0x0) {
        FMemory::Free(local_68);
      }
    }
    bVar2 = true;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar2;
}

// GetPlatformApi @ 148d456c0

FString * __thiscall
Audio::FAudioMixerWasapi::GetPlatformApi(FAudioMixerWasapi *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"WASAPIMixer");
  return __return_storage_ptr__;
}

// GetPlatformDeviceInfo @ 148d456f0

FAudioPlatformDeviceInfo * __thiscall
Audio::FAudioMixerWasapi::GetPlatformDeviceInfo
          (FAudioMixerWasapi *this,FAudioPlatformDeviceInfo *__return_storage_ptr__)

{
  FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo
            (__return_storage_ptr__,(FAudioPlatformDeviceInfo *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetPlatformSettings @ 148d45720

FAudioPlatformSettings * __thiscall
Audio::FAudioMixerWasapi::GetPlatformSettings
          (FAudioMixerWasapi *this,FAudioPlatformSettings *__return_storage_ptr__)

{
  FAudioPlatformSettings::GetPlatformSettings
            (__return_storage_ptr__,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return __return_storage_ptr__;
}

// InitDeviceSwapContextInternal @ 148d45770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal
          (FAudioMixerWasapi *this,FString *param_1,wchar_t *param_2,
          TOptional<Audio::FAudioPlatformDeviceInfo> *param_3)

{
  int *piVar1;
  longlong *lpCriticalSection;
  TUniquePtr<Audio::FWasapiDeviceSwapContext,TDefaultDelete<Audio::FWasapiDeviceSwapContext>_>
  *pTVar2;
  char cVar3;
  FWasapiDeviceSwapContext *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  longlong lVar13;
  FWasapiDeviceSwapContext *pFVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  FAudioPlatformDeviceInfo *pFVar17;
  FName *pFVar18;
  wchar_t *pwVar19;
  TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 auStackY_118 [32];
  TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> local_d8;
  FScriptContainerElement *local_c8;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  FName local_a8;
  FString local_a0;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar12 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_c8 = (FScriptContainerElement *)param_2;
  lVar13 = (**(code **)(this->_padding_ + 0x120))();
  if (lVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("GetDeviceInfoCache()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                        ,499,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = &this->DeviceSwapContext;
  if (pTVar2->Ptr == (FWasapiDeviceSwapContext *)0x0) {
    pFVar14 = ::operator_new(0xe0);
    if (pFVar14 == (FWasapiDeviceSwapContext *)0x0) {
      pFVar14 = (FWasapiDeviceSwapContext *)0x0;
    }
    else {
      ::FString::FString(&local_a0,(wchar_t *)local_c8);
      pFVar14->_padding_ = (longlong)&___7FDeviceSwapContext_Audio__6B_;
      ::FString::FString((FString *)&pFVar14->_padding_,param_1);
      plVar16 = &pFVar14->_padding_;
      *plVar16 = 0;
      local_c8 = local_a0.Data.AllocatorInstance.Data;
      piVar1 = (int *)((longlong)&pFVar14->_padding_ + 4);
      *(int *)&pFVar14->_padding_ = local_a0.Data.ArrayNum;
      if (local_a0.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)plVar16,local_a0.Data.ArrayNum,
                   piVar1);
        memcpy((void *)*plVar16,local_c8,(longlong)local_a0.Data.ArrayNum * 2);
      }
      *(undefined1 *)&pFVar14->_padding_ = 0;
      pFVar14->_padding_ = (longlong)&___7FWasapiDeviceSwapContext_Audio__6B_;
      bVar12 = true;
      (pFVar14->PlatformSettings).SampleRate = 48000;
      (pFVar14->PlatformSettings).CallbackBufferFrameSize = 0x400;
      (pFVar14->PlatformSettings).NumBuffers = 2;
      (pFVar14->PlatformSettings).MaxChannels = 0;
      (pFVar14->PlatformSettings).NumSourceWorkers = 0;
      (pFVar14->StreamParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar14->StreamParams).ArrayNum = 0;
      (pFVar14->StreamParams).ArrayMax = 0;
      *(undefined8 *)&pFVar14->ReadNextBufferCallback = 0;
      *(undefined8 *)&(pFVar14->ReadNextBufferCallback).field_0x28 = 0;
      (pFVar14->OldDeviceManager).Ptr = (IAudioMixerWasapiDeviceManager *)0x0;
      pFVar14->bIsAggregateDevice = false;
    }
    if ((bVar12) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (pTVar2 == (TUniquePtr<Audio::FWasapiDeviceSwapContext,TDefaultDelete<Audio::FWasapiDeviceSwapContext>_>
                   *)&local_90) {
      if (pFVar14 != (FWasapiDeviceSwapContext *)0x0) {
        puVar15 = (undefined8 *)pFVar14->_padding_;
        goto LAB_148d45972;
      }
    }
    else {
      pFVar4 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar14;
      if (pFVar4 != (FWasapiDeviceSwapContext *)0x0) {
        puVar15 = (undefined8 *)pFVar4->_padding_;
        pFVar14 = pFVar4;
LAB_148d45972:
        (*(code *)*puVar15)(pFVar14,1);
      }
    }
    pFVar14 = pTVar2->Ptr;
    if (pFVar14 != (FWasapiDeviceSwapContext *)0x0) {
      plVar16 = &pFVar14->_padding_;
      if (param_3 != (TOptional<Audio::FAudioPlatformDeviceInfo> *)plVar16) {
        cVar3 = (char)pFVar14->_padding_;
        if (param_3->bIsSet == false) {
          if (cVar3 != '\0') {
            if ((void *)pFVar14->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar14->_padding_);
            }
            if ((void *)pFVar14->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar14->_padding_);
            }
            if ((void *)*plVar16 != (void *)0x0) {
              FMemory::Free((void *)*plVar16);
            }
            *(undefined1 *)&pFVar14->_padding_ = 0;
          }
        }
        else {
          if (cVar3 != '\0') {
            if ((void *)pFVar14->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar14->_padding_);
            }
            if ((void *)pFVar14->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar14->_padding_);
            }
            if ((void *)*plVar16 != (void *)0x0) {
              FMemory::Free((void *)*plVar16);
            }
          }
          FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo
                    ((FAudioPlatformDeviceInfo *)plVar16,&param_3->TypedValue);
          *(undefined1 *)&pFVar14->_padding_ = 1;
        }
      }
      (**(code **)(this->_padding_ + 0x80))(this,&local_c0);
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      if ((char)pTVar2->Ptr->_padding_ == '\0') {
LAB_148d45b03:
        pFVar14 = pTVar2->Ptr;
        local_88 = *(longlong *)&pFVar14->ReadNextBufferCallback;
        uVar7 = *(undefined8 *)&(pFVar14->ReadNextBufferCallback).field_0x8;
        local_78 = *(longlong *)&(pFVar14->ReadNextBufferCallback).field_0x10;
        uStack_70 = *(undefined8 *)&(pFVar14->ReadNextBufferCallback).field_0x18;
        uVar6 = *(undefined8 *)&(pFVar14->ReadNextBufferCallback).field_0x20;
        plStack_60 = *(longlong **)&(pFVar14->ReadNextBufferCallback).field_0x28;
        *(code **)&pFVar14->ReadNextBufferCallback =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar14->ReadNextBufferCallback).field_0x8 = uStack_80;
        *(undefined4 *)&(pFVar14->ReadNextBufferCallback).field_0x10 = 0x51cdf778;
        *(undefined4 *)&(pFVar14->ReadNextBufferCallback).field_0x14 = 1;
        *(FAudioMixerWasapi **)&(pFVar14->ReadNextBufferCallback).field_0x18 = this;
        *(undefined4 *)&(pFVar14->ReadNextBufferCallback).field_0x20 = (undefined4)local_68;
        *(undefined4 *)&(pFVar14->ReadNextBufferCallback).field_0x24 = local_68._4_4_;
        *(undefined4 *)&(pFVar14->ReadNextBufferCallback).field_0x28 = 0;
        *(undefined4 *)&(pFVar14->ReadNextBufferCallback).field_0x2c = 0;
        local_68 = uVar6;
        uStack_80 = uVar7;
        if (local_88 != 0) {
          plVar16 = &local_78;
          if (plStack_60 != (longlong *)0x0) {
            plVar16 = plStack_60;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        pFVar14 = (this->DeviceSwapContext).Ptr;
        pTVar20 = &pFVar14->StreamParams;
        if (pTVar20 != &local_d8) {
          DestructItems<Audio::FWasapiRenderStreamParams,int>
                    ((FWasapiRenderStreamParams *)(pTVar20->AllocatorInstance).Data,
                     (pFVar14->StreamParams).ArrayNum);
          FVar8.Data = local_d8.AllocatorInstance.Data;
          iVar9 = local_d8.ArrayNum;
          piVar1 = &(pFVar14->StreamParams).ArrayMax;
          (pFVar14->StreamParams).ArrayNum = local_d8.ArrayNum;
          if ((local_d8.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,local_d8.ArrayNum,*piVar1,&pTVar20->AllocatorInstance,
                       local_d8.ArrayNum,piVar1);
            ConstructItems<Audio::FWasapiRenderStreamParams,Audio::FWasapiRenderStreamParams,int>
                      ((pTVar20->AllocatorInstance).Data,(FWasapiRenderStreamParams *)FVar8.Data,
                       iVar9);
          }
        }
        pFVar14 = (this->DeviceSwapContext).Ptr;
        bVar12 = true;
        (pFVar14->PlatformSettings).SampleRate = local_c0;
        (pFVar14->PlatformSettings).CallbackBufferFrameSize = iStack_bc;
        (pFVar14->PlatformSettings).NumBuffers = iStack_b8;
        (pFVar14->PlatformSettings).MaxChannels = uStack_b4;
        (pFVar14->PlatformSettings).NumSourceWorkers = local_b0;
      }
      else {
        plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
        pcVar5 = *(code **)(*plVar16 + 0x20);
        pFVar17 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator->
                            ((TOptional<Audio::FAudioPlatformDeviceInfo> *)&pTVar2->Ptr->_padding_);
        if ((pFVar17->DeviceId).Data.ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)(pFVar17->DeviceId).Data.AllocatorInstance.Data;
        }
        pFVar18 = ::FName::FName(&local_a8,pwVar19);
        bVar12 = (bool)(*pcVar5)(plVar16,*pFVar18);
        pTVar2->Ptr->bIsAggregateDevice = bVar12;
        pFVar17 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator*
                            ((TOptional<Audio::FAudioPlatformDeviceInfo> *)&pTVar2->Ptr->_padding_);
        bVar12 = InitStreamParams(this,pFVar17,iStack_bc,iStack_b8,local_c0,&local_d8);
        if (bVar12) goto LAB_148d45b03;
        if (2 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
        TOptional<Audio::FAudioPlatformDeviceInfo>::Reset
                  ((TOptional<Audio::FAudioPlatformDeviceInfo> *)&pTVar2->Ptr->_padding_);
        bVar12 = false;
      }
      DestructItems<Audio::FWasapiRenderStreamParams,int>
                ((FWasapiRenderStreamParams *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FWasapiRenderStreamParams *)local_d8.AllocatorInstance.Data !=
          (FWasapiRenderStreamParams *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      goto LAB_148d45c20;
    }
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    bVar12 = false;
    goto LAB_148d45c20;
  }
  bVar12 = false;
LAB_148d45c20:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar12;
}

// InitStreamParams @ 148d45c70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapi::InitStreamParams
          (FAudioMixerWasapi *this,uint param_1,int param_2,int param_3,int param_4,
          TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  FAudioPlatformDeviceInfo local_68;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_InitStreamParams");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId141,"FAudioMixerWasapi_InitStreamParams",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId141);
  }
  local_68.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Name.Data.ArrayNum = 0;
  local_68.Name.Data.ArrayMax = 0;
  local_68.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.DeviceId.Data.ArrayNum = 0;
  local_68.DeviceId.Data.ArrayMax = 0;
  local_68.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.OutputChannelArray.ArrayNum = 0;
  local_68.OutputChannelArray.ArrayMax = 0;
  ::FString::operator=(&local_68.Name,L"Unknown");
  ::FString::operator=(&local_68.DeviceId,L"Unknown");
  uVar1 = local_68.OutputChannelArray._8_8_;
  local_68.OutputChannelArray._8_8_ = local_68.OutputChannelArray._8_8_ & 0xffffffff00000000;
  local_68.NumChannels = 0;
  local_68.NumDirectOutChannels = 0;
  local_68.SampleRate = 0;
  local_68.Format = Unknown;
  if ((longlong)uVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_68.OutputChannelArray.AllocatorInstance,0,
               &local_68.OutputChannelArray.ArrayMax);
  }
  local_68.bIsSystemDefault = '\0';
  cVar2 = (**(code **)(this->_padding_ + 0x68))(this,param_1,&local_68);
  if (cVar2 == '\0') {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    bVar3 = false;
  }
  else {
    bVar3 = InitStreamParams(this,&local_68,param_2,param_3,param_4,param_5);
  }
  if (local_68.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.OutputChannelArray.AllocatorInstance.Data);
  }
  if (local_68.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.DeviceId.Data.AllocatorInstance.Data);
  }
  if (local_68.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Name.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar3;
}

// InitStreamParams @ 148d45e30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapi::InitStreamParams
          (FAudioMixerWasapi *this,FAudioPlatformDeviceInfo *param_1,int param_2,int param_3,
          int param_4,TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  FWindowsMMNotificationClient *this_00;
  FAudioPlatformDeviceInfo *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  FAudioPlatformDeviceInfo *pFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  FString local_res10;
  int local_res20;
  FAudioPlatformDeviceInfo *local_148;
  int local_140;
  undefined1 local_138 [8];
  FName local_130;
  FAudioPlatformDeviceInfo *local_128;
  FName local_120;
  FWasapiRenderStreamParams local_118;
  FWasapiRenderStreamParams local_b8;
  FString local_58;
  
  local_res10.Data.ArrayNum = param_2;
  local_res20 = param_3;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_InitStreamParams");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId155,"FAudioMixerWasapi_InitStreamParams",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x9b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId155);
  }
  lVar8 = (**(code **)(this->_padding_ + 0x120))(this);
  if ((lVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetDeviceInfoCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0x9c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
  pcVar1 = *(code **)(*plVar9 + 0x20);
  if ((param_1->DeviceId).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->DeviceId).Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_120,pwVar11);
  cVar5 = (*pcVar1)(plVar9,*pFVar10);
  if (cVar5 == '\0') {
    GetMMDevice(this,(FString *)local_138);
    if (local_138 != (undefined1  [8])0x0) {
      local_b8.MMDevice.RawPointer = (IMMDevice *)local_138;
      (**(code **)(*(longlong *)local_138 + 8))();
      FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo(&local_b8.HardwareDeviceInfo,param_1);
      local_b8.NumFrames = local_res10.Data.ArrayNum;
      local_b8.NumBuffers = local_res20;
      local_b8.SampleRate = param_4;
      iVar7 = param_5->ArrayNum;
      if (iVar7 == param_5->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar7 + 1;
      FWasapiRenderStreamParams::FWasapiRenderStreamParams
                ((FWasapiRenderStreamParams *)
                 ((param_5->AllocatorInstance).Data + (longlong)iVar7 * 0x60),&local_b8);
      if (local_b8.HardwareDeviceInfo.OutputChannelArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.HardwareDeviceInfo.OutputChannelArray.AllocatorInstance.Data);
      }
      if (local_b8.HardwareDeviceInfo.DeviceId.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.HardwareDeviceInfo.DeviceId.Data.AllocatorInstance.Data);
      }
      if (local_b8.HardwareDeviceInfo.Name.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.HardwareDeviceInfo.Name.Data.AllocatorInstance.Data);
      }
      if (local_b8.MMDevice.RawPointer != (IMMDevice *)0x0) {
        (**(code **)((longlong)*local_b8.MMDevice.RawPointer + 0x10))();
      }
      if (local_138 != (undefined1  [8])0x0) {
        (**(code **)(*(longlong *)local_138 + 0x10))();
      }
      goto LAB_148d46283;
    }
    if ((1 < (byte)LogAudioMixer._0_1_) &&
       (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer),
       local_138 != (undefined1  [8])0x0)) {
      (**(code **)(*(longlong *)local_138 + 0x10))();
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x120))();
    if (plVar9 == (longlong *)0x0) {
LAB_148d46283:
      bVar3 = true;
      goto LAB_148d46286;
    }
    if ((param_1->DeviceId).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->DeviceId).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_130,pwVar11);
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_148,local_130,1);
    iVar7 = local_140;
    local_128 = local_148 + local_140;
    pFVar12 = local_148;
    while( true ) {
      pFVar2 = local_128;
      if (local_140 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Audio::FAudioPlatformDeviceInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar2) {
        DestructItems<Audio::FAudioPlatformDeviceInfo,int>(local_148,local_140);
        if (local_148 != (FAudioPlatformDeviceInfo *)0x0) {
          FMemory::Free(local_148);
        }
        goto LAB_148d46283;
      }
      if (WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) break;
      if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      this_00 = WasapiWinNotificationClient.Object;
      ::FString::FString(&local_58,&pFVar12->DeviceId);
      FWindowsMMNotificationClient::GetDevice(this_00,&local_res10);
      if (local_res10.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_148d460ed;
      local_118.MMDevice.RawPointer = (IMMDevice *)local_res10.Data.AllocatorInstance.Data;
      (**(code **)(*(longlong *)local_res10.Data.AllocatorInstance.Data + 8))();
      FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo(&local_118.HardwareDeviceInfo,pFVar12);
      local_118.NumFrames = local_res10.Data.ArrayNum;
      local_118.NumBuffers = local_res20;
      local_118.SampleRate = param_4;
      iVar6 = param_5->ArrayNum;
      if (iVar6 == param_5->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar6 + 1;
      FWasapiRenderStreamParams::FWasapiRenderStreamParams
                ((FWasapiRenderStreamParams *)
                 ((param_5->AllocatorInstance).Data + (longlong)iVar6 * 0x60),&local_118);
      if (local_118.HardwareDeviceInfo.OutputChannelArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.HardwareDeviceInfo.OutputChannelArray.AllocatorInstance.Data);
      }
      if (local_118.HardwareDeviceInfo.DeviceId.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.HardwareDeviceInfo.DeviceId.Data.AllocatorInstance.Data);
      }
      if (local_118.HardwareDeviceInfo.Name.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.HardwareDeviceInfo.Name.Data.AllocatorInstance.Data);
      }
      if (local_118.MMDevice.RawPointer != (IMMDevice *)0x0) {
        (**(code **)((longlong)*local_118.MMDevice.RawPointer + 0x10))();
      }
      if (local_res10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_res10.Data.AllocatorInstance.Data + 0x10))();
      }
      pFVar12 = pFVar12 + 1;
    }
    local_res10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_148d460ed:
    if ((1 < (byte)LogAudioMixer._0_1_) &&
       (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer),
       local_res10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      (**(code **)(*(longlong *)local_res10.Data.AllocatorInstance.Data + 0x10))();
    }
    DestructItems<Audio::FAudioPlatformDeviceInfo,int>(local_148,local_140);
    if (local_148 != (FAudioPlatformDeviceInfo *)0x0) {
      FMemory::Free(local_148);
      bVar3 = false;
      goto LAB_148d46286;
    }
  }
  bVar3 = false;
LAB_148d46286:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar3;
}

// InitializeDeviceSwapContext @ 148d462c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapi::InitializeDeviceSwapContext
          (FAudioMixerWasapi *this,FString *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FScriptContainerElement *local_b8;
  int local_b0;
  int local_ac;
  FScriptContainerElement *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  Type local_8c;
  FScriptContainerElement *local_88;
  int local_80;
  int local_7c;
  byte local_78;
  char local_70;
  TOptional<Audio::FAudioPlatformDeviceInfo> local_68;
  
  lVar5 = (**(code **)(this->_padding_ + 0x120))();
  if ((lVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetDeviceInfoCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0x1d6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar7);
  local_68.bIsSet = false;
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
  (**(code **)(*plVar6 + 8))(plVar6,&local_b8,local_res8);
  if (local_70 != '\0') {
    cVar4 = (**(code **)(this->_padding_ + 0x128))(this,&local_b8);
    if (cVar4 == '\0') {
      if (3 < (byte)LogAudioMixer._0_1_) {
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      if (local_70 != '\0') {
        if (local_88 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88);
        }
        if (local_a8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_b8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      bVar2 = false;
      goto LAB_148d463fc;
    }
    if (local_70 != '\0') {
      local_68.TypedValue.Name.Data.AllocatorInstance.Data = local_b8;
      local_68.TypedValue.Name.Data.ArrayNum = local_b0;
      local_68.TypedValue.Name.Data.ArrayMax = local_ac;
      local_68.TypedValue.DeviceId.Data.AllocatorInstance.Data = local_a8;
      local_68.TypedValue.DeviceId.Data.ArrayNum = local_a0;
      local_68.TypedValue.DeviceId.Data.ArrayMax = local_9c;
      local_68.TypedValue.NumChannels = local_98;
      local_68.TypedValue.NumDirectOutChannels = local_94;
      local_68.TypedValue.SampleRate = local_90;
      local_68.TypedValue.Format = local_8c;
      local_68.TypedValue.OutputChannelArray.AllocatorInstance.Data = local_88;
      local_68.TypedValue.OutputChannelArray.ArrayNum = local_80;
      local_68.TypedValue.OutputChannelArray.ArrayMax = local_7c;
      local_68.bIsSet = true;
      local_68.TypedValue._64_1_ =
           local_68.TypedValue._64_1_ ^ (local_68.TypedValue._64_1_ ^ local_78) & 1;
    }
  }
  bVar2 = InitDeviceSwapContextInternal(this,param_1,param_2,&local_68);
LAB_148d463fc:
  if (local_68.bIsSet != false) {
    if (local_68.TypedValue.OutputChannelArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.TypedValue.OutputChannelArray.AllocatorInstance.Data);
    }
    if (local_68.TypedValue.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_68.TypedValue.DeviceId.Data.AllocatorInstance.Data);
    }
    if (local_68.TypedValue.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.TypedValue.Name.Data.AllocatorInstance.Data);
    }
  }
  return bVar2;
}

// InitializeHardware @ 148d46870

bool __thiscall Audio::FAudioMixerWasapi::InitializeHardware(FAudioMixerWasapi *this)

{
  bool bVar1;
  bool bVar2;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_InitializeHardware");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId36,"FAudioMixerWasapi_InitializeHardware",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x24);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId36);
  }
  (**(code **)(this->_padding_ + 8))(&this->_padding_);
  bVar1 = IAudioMixer::ShouldRecycleThreads();
  if (bVar1) {
    local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_10 = 0;
    local_20 = `Audio::FAudioMixerWasapi::InitializeHardware'::__l5::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    IAudioMixerPlatformInterface::CreateNullDeviceThread
              ((IAudioMixerPlatformInterface *)this,(TFunction<void___cdecl(void)> *)local_38,
               __real_3f800000,true);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return true;
}

// IsDeviceInfoValid @ 148d48110

bool __thiscall
Audio::FAudioMixerWasapi::IsDeviceInfoValid
          (FAudioMixerWasapi *this,FAudioPlatformDeviceInfo *param_1)

{
  if (0 < param_1->NumChannels) {
    return 0 < param_1->SampleRate;
  }
  return false;
}

// IsInitialized @ 148d48130

bool __thiscall Audio::FAudioMixerWasapi::IsInitialized(FAudioMixerWasapi *this)

{
  return this->bIsInitialized;
}

// OnDefaultCaptureDeviceChanged @ 148d481b0

void __thiscall
Audio::FAudioMixerWasapi::OnDefaultCaptureDeviceChanged
          (FAudioMixerWasapi *this,EAudioDeviceRole param_1,FString *param_2)

{
  UAudioDeviceNotificationSubsystem *pUVar1;
  
  pUVar1 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar1 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x18))(&pUVar1->_padding_,param_1,param_2);
  }
  return;
}

// OnDefaultRenderDeviceChanged @ 148d481f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerWasapi::OnDefaultRenderDeviceChanged
          (FAudioMixerWasapi *this,EAudioDeviceRole param_1,FString *param_2)

{
  code *pcVar1;
  FWindowsMMNotificationClient *this_00;
  bool bVar2;
  FString *pFVar3;
  UAudioDeviceNotificationSubsystem *pUVar4;
  FString local_38;
  FString local_28;
  
  if ((param_1 & ~Communications) == Console) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = WasapiWinNotificationClient.Object;
      pFVar3 = ::FString::FString(&local_28,param_2);
      FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_38,pFVar3);
      Audio::ToString(param_1);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((char)this->_padding_ != '\0') {
      (**(code **)(*(longlong *)&this[-1].bIsInitialized + 0xc0))
                (&this[-1].bIsInitialized,param_2,1,
                 L"FAudioMixerWasapi::OnDefaultRenderDeviceChanged");
    }
  }
  pUVar4 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar4 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x20))(&pUVar4->_padding_,param_1,param_2);
  }
  return;
}

// OnDeviceAdded @ 148d48330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerWasapi::OnDeviceAdded(FAudioMixerWasapi *this,FString *param_1,bool param_2)

{
  void *_Src;
  int iVar1;
  FWindowsMMNotificationClient *this_00;
  FString *pFVar2;
  UAudioDeviceNotificationSubsystem *pUVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  bool bVar6;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  FString local_28;
  
  if (!param_2) {
    return;
  }
  local_40 = (int)this->_padding_;
  lVar5 = (longlong)local_40;
  _Src = (void *)this->_padding_;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar5 * 2);
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 == local_40) {
    if (iVar1 < 2) goto LAB_148d484d8;
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)this->_padding_,(wchar_t *)local_48.Data);
    bVar6 = iVar1 == 0;
  }
  else {
    bVar6 = iVar1 + local_40 == 1;
  }
  if (bVar6) goto LAB_148d484d8;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_40) {
    if (1 < iVar1) {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,(wchar_t *)local_48.Data)
      ;
      bVar6 = iVar1 == 0;
      goto LAB_148d48410;
    }
  }
  else {
    bVar6 = iVar1 + local_40 == 1;
LAB_148d48410:
    if (!bVar6) goto LAB_148d484d8;
  }
  if (3 < (byte)LogAudioMixer._0_1_) {
    this_00 = TSharedPtr<Audio::FWindowsMMNotificationClient,1>::operator->
                        (&WasapiWinNotificationClient);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar4.Data = local_48.Data;
    }
    pFVar2 = ::FString::FString(&local_28,(wchar_t *)FVar4.Data);
    FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_38,pFVar2);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((char)this->_padding_ != '\0') {
    (**(code **)(*(longlong *)&this[-1].bIsInitialized + 0xc0))
              (&this[-1].bIsInitialized,&local_48,1,L"FAudioMixerWasapi::OnDeviceAdded");
  }
LAB_148d484d8:
  pUVar3 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar3 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x28))(&pUVar3->_padding_,param_1,param_2);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// OnDeviceRemoved @ 148d48530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerWasapi::OnDeviceRemoved(FAudioMixerWasapi *this,FString *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  FWindowsMMNotificationClient *this_00;
  int iVar3;
  FString *pFVar4;
  UAudioDeviceNotificationSubsystem *pUVar5;
  bool bVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (!param_2) {
    return;
  }
  iVar3 = (int)this->_padding_;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)this->_padding_,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_148d48576;
    }
  }
  else {
    bVar6 = iVar3 + iVar1 == 1;
LAB_148d48576:
    if (!bVar6) goto LAB_148d48682;
  }
  if (2 < (byte)LogAudioMixer._0_1_) {
    if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = WasapiWinNotificationClient.Object;
    pFVar4 = ::FString::FString(&local_18,param_1);
    FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_28,pFVar4);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((char)this->_padding_ != '\0') {
    pcVar2 = *(code **)(*(longlong *)&this[-1].bIsInitialized + 0xc0);
    ::FString::FString(&local_38,L"");
    (*pcVar2)(&this[-1].bIsInitialized,&local_38,1,L"FAudioMixerWasapi::OnDeviceRemoved");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_148d48682:
  pUVar5 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar5 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar5->_padding_ + 0x30))(&pUVar5->_padding_,param_1,param_2);
  }
  return;
}

// OnDeviceStateChanged @ 148d486c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerWasapi::OnDeviceStateChanged
          (FAudioMixerWasapi *this,FString *param_1,EAudioDeviceState param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  FWindowsMMNotificationClient *this_00;
  FString *pFVar3;
  UAudioDeviceNotificationSubsystem *pUVar4;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  if (!param_3) {
    return;
  }
  iVar2 = (int)this->_padding_;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)this->_padding_,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_148d4870e;
    }
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
LAB_148d4870e:
    if (!bVar5) goto LAB_148d487b5;
  }
  if ((((this->_padding_ & 1) == 0) && (param_2 - Disabled < 3)) && (3 < (byte)LogAudioMixer._0_1_))
  {
    this_00 = TSharedPtr<Audio::FWindowsMMNotificationClient,1>::operator->
                        (&WasapiWinNotificationClient);
    pFVar3 = ::FString::FString(&local_18,param_1);
    FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_28,pFVar3);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
LAB_148d487b5:
  pUVar4 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar4 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x38))(&pUVar4->_padding_,param_1,param_2,param_3);
  }
  return;
}

// OnFormatChanged @ 148d487f0

void __thiscall
Audio::FAudioMixerWasapi::OnFormatChanged
          (FAudioMixerWasapi *this,FString *param_1,FFormatChangedData *param_2)

{
  longlong *lpCriticalSection;
  int iVar1;
  IAudioMixerWasapiDeviceManager *pIVar2;
  bool bVar3;
  int iVar4;
  FAudioPlatformDeviceInfo *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FString local_18;
  
  bVar3 = false;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((int)this->_padding_ == 5) {
    pIVar2 = (this->DeviceManager).Ptr;
    if ((pIVar2 != (IAudioMixerWasapiDeviceManager *)0x0) && (*(char *)(pIVar2 + 0xe) != '\0')) {
      pFVar5 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator->
                         ((TOptional<Audio::FAudioPlatformDeviceInfo> *)(pIVar2 + 5));
      iVar4 = (param_1->Data).ArrayNum;
      iVar1 = (pFVar5->DeviceId).Data.ArrayNum;
      if (iVar1 == iVar4) {
        if (1 < iVar1) {
          iVar4 = wcscmp((wchar_t *)(pFVar5->DeviceId).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar7 = iVar4 == 0;
          goto LAB_148d4886f;
        }
      }
      else {
        bVar7 = iVar4 + iVar1 == 1;
LAB_148d4886f:
        if (!bVar7) goto LAB_148d488a6;
      }
      bVar3 = true;
    }
LAB_148d488a6:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (!bVar3) {
      return;
    }
  }
  else {
    iVar4 = (int)this->_padding_;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar1) {
      if (1 < iVar4) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)this->_padding_,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar4 == 0;
        goto LAB_148d4889f;
      }
    }
    else {
      bVar7 = iVar4 + iVar1 == 1;
LAB_148d4889f:
      if (!bVar7) goto LAB_148d488a6;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  ::FString::PrintfImpl(&local_18,L"FAudioMixerWasapi - OnFormatChange for live audio device");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  (**(code **)(*(longlong *)&this[-1].bIsInitialized + 0xc0))
            (&this[-1].bIsInitialized,param_1,1,FVar6.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSessionDisconnect @ 148d48930

void __thiscall
Audio::FAudioMixerWasapi::OnSessionDisconnect(FAudioMixerWasapi *this,EDisconnectReason param_1)

{
  FString *pFVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  if (param_1 == FormatChanged) {
    pcVar2 = *(code **)(*(longlong *)&this[-1].bIsInitialized + 0xc0);
    pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x50))(this,&local_18);
    pwVar3 = L"FAudioMixerWasapi::OnSessionDisconnect() - FormatChanged";
  }
  else {
    if (param_1 == DeviceRemoval) {
      return;
    }
    pcVar2 = *(code **)(*(longlong *)&this[-1].bIsInitialized + 0xc0);
    ::FString::FString(&local_18,L"");
    pwVar3 = L"FAudioMixerWasapi::OnSessionDisconnect() - Other";
    pFVar1 = &local_18;
  }
  (*pcVar2)(&this[-1].bIsInitialized,pFVar1,1,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OpenAudioStream @ 148d489c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapi::OpenAudioStream
          (FAudioMixerWasapi *this,FAudioMixerOpenStreamParams *param_1)

{
  int iVar1;
  IAudioMixerWasapiDeviceManager *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  FName *pFVar11;
  FString *pFVar12;
  undefined ***pppuVar13;
  int iVar14;
  wchar_t *pwVar15;
  bool bVar16;
  undefined1 auStackY_178 [32];
  TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> local_138;
  FString local_128;
  int local_118;
  int local_114;
  Type local_110 [2];
  FAudioPlatformDeviceInfo local_108;
  FString *local_b8;
  FAudioMixerOpenStreamParams *local_b0;
  FString local_a8;
  FName local_98;
  FString local_90;
  code *local_78 [2];
  undefined **local_68;
  FAudioMixerWasapi *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_b0 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FAudioMixerWasapi_OpenAudioStream");
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId197,"FAudioMixerWasapi_OpenAudioStream",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0xc5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId197);
  }
  lVar9 = (**(code **)(this->_padding_ + 0x120))(this);
  pwVar15 = L"";
  if ((lVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetDeviceInfoCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0xc6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  *(uint *)&this->_padding_ = param_1->OutputDeviceIndex;
  *(uint *)((longlong)&this->_padding_ + 4) = param_1->NumFrames;
  *(int *)&this->_padding_ = param_1->NumBuffers;
  this->_padding_ = (longlong)param_1->AudioMixer;
  *(uint *)&this->_padding_ = param_1->SampleRate;
  *(int *)((longlong)&this->_padding_ + 4) = param_1->MaxSources;
  *(bool *)&this->_padding_ = param_1->bRestoreIfRemoved;
  *(bool *)((longlong)&this->_padding_ + 1) = param_1->bUseSystemAudioDevice;
  local_b8 = &param_1->AudioDeviceId;
  ::FString::operator=((FString *)&this->_padding_,local_b8);
  *(undefined4 *)&this->_padding_ = 0;
  FAudioPlatformDeviceInfo::Reset((FAudioPlatformDeviceInfo *)&this->_padding_);
  LOCK();
  *(undefined4 *)&this->_padding_ = 0;
  UNLOCK();
  local_114 = (int)this->_padding_;
  uVar8 = (undefined4)this->_padding_;
  iVar14 = *(int *)((longlong)&this->_padding_ + 4);
  *(int *)&this->_padding_ = local_114;
  this->_padding_ = this->_padding_;
  *(undefined4 *)&this->_padding_ = uVar8;
  *(int *)((longlong)&this->_padding_ + 4) = iVar14;
  *(bool *)&this->_padding_ = param_1->bUseSystemAudioDevice;
  local_118 = (int)this->_padding_;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_InitStreamParams");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId141,"FAudioMixerWasapi_InitStreamParams",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId141);
  }
  local_108.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Name.Data.ArrayNum = 0;
  local_108.Name.Data.ArrayMax = 0;
  local_108.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.DeviceId.Data.ArrayNum = 0;
  local_108.DeviceId.Data.ArrayMax = 0;
  local_108.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.OutputChannelArray.ArrayNum = 0;
  local_108.OutputChannelArray.ArrayMax = 0;
  ::FString::operator=(&local_108.Name,L"Unknown");
  ::FString::operator=(&local_108.DeviceId,L"Unknown");
  local_108.NumChannels = 0;
  local_108.NumDirectOutChannels = 0;
  local_108.SampleRate = 0;
  local_108.Format = Unknown;
  if ((longlong)local_108.OutputChannelArray._8_8_ < 0) {
    local_108.OutputChannelArray._8_8_ =
         (ulonglong)(uint)local_108.OutputChannelArray.ArrayMax << 0x20;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_108.OutputChannelArray.AllocatorInstance,0,
               &local_108.OutputChannelArray.ArrayMax);
  }
  else {
    local_108.OutputChannelArray._8_8_ =
         (ulonglong)(uint)local_108.OutputChannelArray.ArrayMax << 0x20;
  }
  local_108.bIsSystemDefault = '\0';
  cVar6 = (**(code **)(this->_padding_ + 0x68))(this,uVar8,&local_108);
  if (cVar6 == '\0') {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (local_108.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.OutputChannelArray.AllocatorInstance.Data);
    }
    if (local_108.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.DeviceId.Data.AllocatorInstance.Data);
    }
    if (local_108.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Name.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar7 = false;
  }
  else {
    bVar7 = InitStreamParams(this,&local_108,iVar14,local_114,local_118,&local_138);
    if (local_108.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.OutputChannelArray.AllocatorInstance.Data);
    }
    if (local_108.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.DeviceId.Data.AllocatorInstance.Data);
    }
    if (local_108.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Name.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar7 == false) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_110[0] = DefaultChannel;
    local_110[1] = 1;
    TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<enum_EAudioMixerChannel::Type,int>
              (&this->_padding_,local_110,2,*(int *)((longlong)&this->_padding_ + 4));
    *(undefined4 *)&this->_padding_ = 2;
    *(int *)&this->_padding_ = (int)this->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
LAB_148d49010:
    LOCK();
    *(undefined4 *)&this->_padding_ = 1;
    UNLOCK();
    this->bIsInitialized = true;
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    bVar4 = true;
  }
  else {
    if ((local_138.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FAudioPlatformDeviceInfo::operator=
              ((FAudioPlatformDeviceInfo *)&this->_padding_,
               (FAudioPlatformDeviceInfo *)(local_138.AllocatorInstance.Data + 8));
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
    pcVar3 = *(code **)(*plVar10 + 0x20);
    if ((local_b8->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(local_b8->Data).AllocatorInstance.Data;
    }
    pFVar11 = ::FName::FName(&local_98,pwVar15);
    bVar4 = (bool)(*pcVar3)(plVar10,*pFVar11);
    plVar10 = &this->_padding_;
    if (bVar4 == false) {
      iVar1 = (int)this->_padding_;
      iVar14 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar14 = 0;
      }
      ::FString::AssignRange((FString *)plVar10,(wchar_t *)this->_padding_,iVar14);
    }
    else {
      FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_128,(FString *)&this->_padding_);
      if ((FString *)plVar10 != &local_128) {
        if ((void *)*plVar10 != (void *)0x0) {
          FMemory::Free((void *)*plVar10);
        }
        *plVar10 = (longlong)local_128.Data.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_128.Data.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_128.Data.ArrayMax;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    CreateDeviceManager(bVar4,&this->DeviceManager);
    pIVar2 = (this->DeviceManager).Ptr;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::`12'::<lambda_1>,0,0>
                ::_vftable_;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,void>
                  ::Call;
    local_50 = (undefined ***)0x0;
    local_60 = this;
    if ((pIVar2 == (IAudioMixerWasapiDeviceManager *)0x0) ||
       (cVar6 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_138,local_78), cVar6 == '\0')) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_729850716096560913>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0xef,
                         "DeviceManager.IsValid() && DeviceManager->InitializeHardware(StreamParams, ReadNextBufferCallback)"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar12 = ::FString::FString(&local_90,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                                  );
      ::FString::FString(&local_a8,
                         L"FAudioMixerWasapi::OpenAudioStream DeviceManager->InitializeHardware() failed"
                        );
      IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
                ((IAudioMixerPlatformInterface *)this,&local_a8,pFVar12,0xf1,Warning);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar8 = (**(code **)((longlong)*(this->DeviceManager).Ptr + 0x20))();
      pIVar2 = (this->DeviceManager).Ptr;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar8;
      if ((pIVar2 != (IAudioMixerWasapiDeviceManager *)0x0) &&
         (cVar6 = (**(code **)((longlong)*pIVar2 + 0x30))(), cVar6 != '\0')) {
        if (local_b0->bRestoreIfRemoved != false) {
          ::FString::operator=((FString *)&this->_padding_,(FString *)&this->_padding_);
        }
        if (local_78[0] != (code *)0x0) {
          pppuVar13 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar13 = local_50;
          }
          (*(code *)(*pppuVar13)[2])();
        }
        goto LAB_148d49010;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_729850716096560903>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0xf9,
                         "DeviceManager.IsValid() && DeviceManager->OpenAudioStream(StreamParams)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar13 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar13 = local_50;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    bVar4 = false;
  }
  DestructItems<Audio::FWasapiRenderStreamParams,int>
            ((FWasapiRenderStreamParams *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if ((FWasapiRenderStreamParams *)local_138.AllocatorInstance.Data !=
      (FWasapiRenderStreamParams *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar4;
}

// PerformDeviceSwap @ 148d49ab0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> __cdecl
Audio::FAudioMixerWasapi::PerformDeviceSwap
          (TUniquePtr<Audio::FWasapiDeviceSwapContext,TDefaultDelete<Audio::FWasapiDeviceSwapContext>_>
           *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  IAudioMixerWasapiDeviceManager *pIVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  FWasapiDeviceSwapResult *this;
  FWasapiDeviceSwapContext *pFVar9;
  TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> TVar10;
  FStaticBasicLogRecord *pFVar11;
  longlong *in_RDX;
  int iVar12;
  bool bVar13;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_PerformDeviceSwap");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId587,"FAudioMixerWasapi_PerformDeviceSwap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x24b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId587);
  }
  QueryPerformanceCounter(&local_res10);
  bVar6 = FWindowsPlatformMisc::CoInitialize(Multithreaded);
  if (*in_RDX == 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    pFVar9 = (FWasapiDeviceSwapContext *)0x0;
    if (*(longlong **)(*in_RDX + 0xd0) == (longlong *)0x0) {
      if (3 < (byte)LogAudioMixer._0_1_) {
        pFVar11 = &::LOG_Static;
        goto LAB_148d49bf8;
      }
    }
    else {
      (**(code **)(**(longlong **)(*in_RDX + 0xd0) + 0x48))();
      (**(code **)(**(longlong **)(*in_RDX + 0xd0) + 0x38))();
      (**(code **)(**(longlong **)(*in_RDX + 0xd0) + 0x10))();
      puVar2 = *(undefined8 **)(*in_RDX + 0xd0);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(*in_RDX + 0xd0) = 0;
        (**(code **)*puVar2)(puVar2,1);
      }
      if (3 < (byte)LogAudioMixer._0_1_) {
        pFVar11 = &::LOG_Static;
LAB_148d49bf8:
        UE::Logging::Private::BasicLog<4>(pFVar11,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    if ((*(char *)(*in_RDX + 0x70) != '\0') && (*(int *)(*in_RDX + 0x98) != 0)) {
      this = ::operator_new(0x78);
      if (this != (FWasapiDeviceSwapResult *)0x0) {
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        (this->NewDeviceManager).Ptr = (IAudioMixerWasapiDeviceManager *)0x0;
        *(undefined8 *)&this->bIsAggregateDevice = 0;
        pFVar9 = (FWasapiDeviceSwapContext *)FWasapiDeviceSwapResult::FWasapiDeviceSwapResult(this);
      }
      CreateDeviceManager(*(bool *)(*in_RDX + 0xd8),
                          (TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
                           *)&pFVar9->_padding_);
      pIVar3 = ((TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
                 *)&pFVar9->_padding_)->Ptr;
      if (pIVar3 == (IAudioMixerWasapiDeviceManager *)0x0) {
        if (2 < (byte)LogAudioMixer._0_1_) {
          pFVar11 = &::LOG_Static;
LAB_148d49c8c:
          UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else {
        cVar7 = (**(code **)((longlong)*pIVar3 + 8))(pIVar3,*in_RDX + 0x90,*in_RDX + 0xa0);
        if (cVar7 == '\0') {
          if (2 < (byte)LogAudioMixer._0_1_) {
            pFVar11 = &::LOG_Static;
            goto LAB_148d49c8c;
          }
        }
        else {
          pIVar3 = ((TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
                     *)&pFVar9->_padding_)->Ptr;
          cVar7 = (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,*in_RDX + 0x90);
          if (cVar7 != '\0') {
            lVar4 = *in_RDX;
            if (WasapiWinNotificationClient.Object != (FWindowsMMNotificationClient *)0x0) {
              if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                TVar10.Ptr = (FDeviceSwapResult *)(*pcVar5)();
                return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>
                        )TVar10.Ptr;
              }
              FWindowsMMNotificationClient::RegisterForSessionNotifications
                        (WasapiWinNotificationClient.Object,(FString *)(lVar4 + 8));
            }
            QueryPerformanceCounter(local_res18);
            pFVar9->_padding_ =
                 (longlong)
                 ((double)(ulonglong)(local_res18[0].QuadPart - (longlong)local_res10) *
                  FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
            lVar4 = *in_RDX;
            if ((*(int *)(lVar4 + 0x98) < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              TVar10.Ptr = (FDeviceSwapResult *)(*pcVar5)();
              return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>
                     )TVar10.Ptr;
            }
            FAudioPlatformDeviceInfo::operator=
                      ((FAudioPlatformDeviceInfo *)&pFVar9->_padding_,
                       (FAudioPlatformDeviceInfo *)(*(longlong *)(lVar4 + 0x90) + 8));
            *(bool *)&pFVar9->_padding_ = *(bool *)(*in_RDX + 0xd8);
            iVar1 = *(int *)(*in_RDX + 0x20);
            iVar12 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar12 = 0;
            }
            ::FString::AssignRange
                      ((FString *)&pFVar9->_padding_,*(wchar_t **)(*in_RDX + 0x18),iVar12);
            if (3 < (byte)LogAudioMixer._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            }
            param_1->Ptr = pFVar9;
            goto LAB_148d49e7f;
          }
          if (2 < (byte)LogAudioMixer._0_1_) {
            pFVar11 = (FStaticBasicLogRecord *)&PTR_u_FAudioMixerWasa_151cdbc88;
            goto LAB_148d49c8c;
          }
        }
      }
      puVar2 = (undefined8 *)pFVar9->_padding_;
      param_1->Ptr = (FWasapiDeviceSwapContext *)0x0;
      (*(code *)*puVar2)(pFVar9,1);
      goto LAB_148d49e7f;
    }
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  param_1->Ptr = (FWasapiDeviceSwapContext *)0x0;
LAB_148d49e7f:
  if (bVar6) {
    FWindowsPlatformMisc::CoUninitialize();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)
         (FDeviceSwapResult *)param_1;
}

// PostDeviceSwap @ 148d49ec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FAudioMixerWasapi::PostDeviceSwap(FAudioMixerWasapi *this)

{
  longlong *lpCriticalSection;
  longlong *this_00;
  TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
  *pTVar1;
  int iVar2;
  longlong lVar3;
  IAudioMixerWasapiDeviceManager *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  FString local_28;
  
  if (((this->DeviceSwapContext).Ptr != (FWasapiDeviceSwapContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!DeviceSwapContext.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0x2b5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar6 = false;
  if (this->_padding_ != 0) {
    lVar3 = this->_padding_;
    while (*(char *)(lVar3 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar3 + 0x60) + 0x20))(*(longlong **)(lVar3 + 0x60),0xffffffff,0)
      ;
    }
    plVar9 = *(longlong **)(lVar3 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      cVar8 = (**(code **)(*plVar9 + 8))(plVar9);
      if (cVar8 == '\0') {
        if (1 < (byte)LogAudioMixer._0_1_) {
          (**(code **)(*plVar9 + 8))(plVar9);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else {
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Blue,
                   "FAudioMixerWasapiFAudioMixerWasapi_CheckThreadedDeviceSwap_EndSwap");
        bVar11 = -1 < CpuChannel->Enabled;
        if (bVar11) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId700,
                     "FAudioMixerWasapiFAudioMixerWasapi_CheckThreadedDeviceSwap_EndSwap",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                     ,700);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId700);
        }
        lpCriticalSection = &this->_padding_;
        if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        FAudioPlatformDeviceInfo::operator=
                  ((FAudioPlatformDeviceInfo *)&this->_padding_,
                   (FAudioPlatformDeviceInfo *)(plVar9 + 1));
        this_00 = &this->_padding_;
        if ((char)plVar9[0xe] == '\0') {
          iVar2 = (int)this->_padding_;
          iVar10 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar10 = 0;
          }
          ::FString::AssignRange((FString *)this_00,(wchar_t *)this->_padding_,iVar10);
        }
        else {
          FWindowsMMDeviceCache::ExtractAggregateDeviceName(&local_28,(FString *)&this->_padding_);
          if ((FString *)this_00 != &local_28) {
            if ((void *)*this_00 != (void *)0x0) {
              FMemory::Free((void *)*this_00);
            }
            *this_00 = (longlong)local_28.Data.AllocatorInstance.Data;
            *(int *)&this->_padding_ = local_28.Data.ArrayNum;
            *(int *)((longlong)&this->_padding_ + 4) = local_28.Data.ArrayMax;
            local_28.Data.ArrayNum = 0;
            local_28.Data.ArrayMax = 0;
            local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        if (3 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
        iVar10 = *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
        if (iVar10 < 1) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_729850716096560428>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                             ,0x2d4,"NumOutputSamples > 0");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        else {
          FOutputBuffer::Init((FOutputBuffer *)&this->_padding_,(IAudioMixer *)this->_padding_,
                              iVar10,(int)this->_padding_,*(Type *)((longlong)&this->_padding_ + 4))
          ;
        }
        pTVar1 = &this->DeviceManager;
        if ((pTVar1->Ptr != (IAudioMixerWasapiDeviceManager *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!DeviceManager",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                               ,0x2d9,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        plVar9 = plVar9 + 0xd;
        if (pTVar1 != (TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
                       *)plVar9) {
          pIVar4 = pTVar1->Ptr;
          pTVar1->Ptr = (IAudioMixerWasapiDeviceManager *)*plVar9;
          *plVar9 = 0;
          if (pIVar4 != (IAudioMixerWasapiDeviceManager *)0x0) {
            (**(code **)*pIVar4)(pIVar4,1);
          }
        }
        bVar6 = true;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (bVar11) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
      }
      goto LAB_148d4a227;
    }
  }
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
LAB_148d4a227:
  FAudioMixerPlatformSwappable::ResetActiveDeviceSwapFuture((FAudioMixerPlatformSwappable *)this);
  return bVar6;
}

// PreDeviceSwap @ 148d4a260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FAudioMixerWasapi::PreDeviceSwap(FAudioMixerWasapi *this)

{
  TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
  *pTVar1;
  longlong *lpCriticalSection;
  FWasapiDeviceSwapContext *pFVar2;
  IAudioMixerWasapiDeviceManager *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TUniquePtr<Audio::IAudioMixerWasapiDeviceManager,TDefaultDelete<Audio::IAudioMixerWasapiDeviceManager>_>
  *pTVar7;
  
  pTVar1 = &this->DeviceManager;
  if (pTVar1->Ptr == (IAudioMixerWasapiDeviceManager *)0x0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return true;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->DeviceSwapContext).Ptr;
  if (pFVar2 == (FWasapiDeviceSwapContext *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return false;
  }
  if (((pFVar2->OldDeviceManager).Ptr != (IAudioMixerWasapiDeviceManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!DeviceSwapContext->OldDeviceManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                         ,0x29e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar7 = &((this->DeviceSwapContext).Ptr)->OldDeviceManager;
  if (pTVar7 != pTVar1) {
    pIVar3 = pTVar7->Ptr;
    pTVar7->Ptr = pTVar1->Ptr;
    pTVar1->Ptr = (IAudioMixerWasapiDeviceManager *)0x0;
    if (pIVar3 != (IAudioMixerWasapiDeviceManager *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// RegisterDeviceChangedListener @ 148d4a3d0

void __thiscall Audio::FAudioMixerWasapi::RegisterDeviceChangedListener(FAudioMixerWasapi *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FWindowsMMNotificationClient *this_00;
  FAudioMixerWasapi *pFVar4;
  FAudioMixerWasapi *pFVar5;
  FWindowsMMDeviceCache *this_01;
  FAudioMixerWasapi *pFVar6;
  FSharedReferencer<1> local_10;
  
  pFVar6 = (FAudioMixerWasapi *)0x0;
  if (WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
    this_00 = ::operator_new(0xb8);
    pFVar4 = pFVar6;
    if (this_00 != (FWindowsMMNotificationClient *)0x0) {
      pFVar4 = (FAudioMixerWasapi *)
               FWindowsMMNotificationClient::FWindowsMMNotificationClient(this_00);
    }
    pFVar5 = ::operator_new(0x18);
    local_10.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (pFVar5 != (FAudioMixerWasapi *)0x0) {
      *(undefined4 *)&pFVar5->_padding_ = 1;
      pFVar5->_padding_ =
           (longlong)
           &SharedPointerInternals::
            TReferenceControllerWithDeleter<Audio::FWindowsMMNotificationClient,`Audio::FAudioMixerWasapi::RegisterDeviceChangedListener'::`5'::<lambda_1>,1>
            ::_vftable_;
      *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 1;
      (((FWindowsRecursiveMutex *)&pFVar5->_padding_)->CriticalSection).Opaque1[0] = pFVar4;
      local_10.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    }
    WasapiWinNotificationClient.Object = (FWindowsMMNotificationClient *)pFVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&WasapiWinNotificationClient.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  if (this->_padding_ == 0) {
    bVar3 = FAudioDeviceManager::IsAggregateDeviceSupportEnabled();
    this_01 = ::operator_new(0xa8);
    pFVar4 = pFVar6;
    if (this_01 != (FWindowsMMDeviceCache *)0x0) {
      pFVar4 = (FAudioMixerWasapi *)FWindowsMMDeviceCache::FWindowsMMDeviceCache(this_01,bVar3);
    }
    puVar1 = (undefined8 *)this->_padding_;
    pFVar5 = (FAudioMixerWasapi *)&pFVar4->_padding_;
    if (pFVar4 == (FAudioMixerWasapi *)0x0) {
      pFVar5 = pFVar6;
    }
    this->_padding_ = (longlong)pFVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = (FAudioMixerWasapi *)(this->_padding_ + -8);
    if (this->_padding_ == 0) {
      pFVar4 = pFVar6;
    }
    FWindowsMMNotificationClient::RegisterDeviceChangedListener
              (WasapiWinNotificationClient.Object,(IAudioMixerDeviceChangedListener *)pFVar4);
  }
  if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this == (FAudioMixerWasapi *)&DAT_00000010) {
    this = pFVar6;
  }
  FWindowsMMNotificationClient::RegisterDeviceChangedListener
            (WasapiWinNotificationClient.Object,(IAudioMixerDeviceChangedListener *)this);
  return;
}

// RegisterForSessionEvents @ 148d4a580

void __cdecl Audio::FAudioMixerWasapi::RegisterForSessionEvents(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
    return;
  }
  if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FWindowsMMNotificationClient::RegisterForSessionNotifications
            (WasapiWinNotificationClient.Object,param_1);
  return;
}

// ShouldUseDeviceInfoCache @ 148d4a720

bool __thiscall Audio::FAudioMixerWasapi::ShouldUseDeviceInfoCache(FAudioMixerWasapi *this)

{
  return true;
}

// StartAudioStream @ 148d4a870

bool __thiscall Audio::FAudioMixerWasapi::StartAudioStream(FAudioMixerWasapi *this)

{
  IAudioMixerWasapiDeviceManager *pIVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  
  if (this->bIsInitialized == false) {
    return false;
  }
  if (this->_padding_ == 0) {
    IAudioMixerPlatformInterface::BeginGeneratingAudio((IAudioMixerPlatformInterface *)this);
  }
  else {
    LOCK();
    *(undefined4 *)&this->_padding_ = 4;
    UNLOCK();
  }
  pIVar1 = (this->DeviceManager).Ptr;
  if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x18))();
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148d4a8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)((longlong)*(this->DeviceManager).Ptr + 0x40))();
      return (bool)uVar4;
    }
  }
  if ((int)this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsUsingNullDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                       ,0x14a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  IAudioMixerPlatformInterface::StartRunningNullDevice((IAudioMixerPlatformInterface *)this);
  return true;
}

// StopAudioStream @ 148d4ad80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FAudioMixerWasapi::StopAudioStream(FAudioMixerWasapi *this)

{
  longlong *lpCriticalSection;
  IAudioMixerWasapiDeviceManager *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if (this->bIsInitialized == false) {
    pFVar5 = ::FString::FString(&local_18,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                               );
    ::FString::FString(&local_28,L"FAudioMixerWasapi::StopAudioStream() not initialized.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_28,pFVar5,0x157,Warning);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (((int)this->_padding_ != 2) && ((int)this->_padding_ != 0)) {
      if (((int)this->_padding_ == 4) || ((int)this->_padding_ == 5)) {
        IAudioMixerPlatformInterface::StopGeneratingAudio((IAudioMixerPlatformInterface *)this);
      }
      pIVar1 = (this->DeviceManager).Ptr;
      if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x48))();
      }
      if ((int)this->_padding_ != 2) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioStreamInfo.StreamState == EAudioOutputStreamState::Stopped",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                           ,0x16f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    if ((int)this->_padding_ != 0) {
      IAudioMixerPlatformInterface::StopRunningNullDevice((IAudioMixerPlatformInterface *)this);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SubmitBuffer @ 148d4b0f0

void __thiscall Audio::FAudioMixerWasapi::SubmitBuffer(FAudioMixerWasapi *this,uchar *param_1)

{
  IAudioMixerWasapiDeviceManager *pIVar1;
  bool bVar2;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FAudioMixerWasapi_SubmitBuffer");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId385,"FAudioMixerWasapi_SubmitBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x181);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId385);
  }
  pIVar1 = (this->DeviceManager).Ptr;
  if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x50))
              (pIVar1,param_1,*(undefined4 *)((longlong)&this->_padding_ + 4));
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// SubmitDirectOutBuffer @ 148d4b360

void __thiscall
Audio::FAudioMixerWasapi::SubmitDirectOutBuffer
          (FAudioMixerWasapi *this,int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  IAudioMixerWasapiDeviceManager *pIVar1;
  bool bVar2;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FAudioMixerWasapi_SubmitDirectOutBuffer");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId395,"FAudioMixerWasapi_SubmitDirectOutBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
               ,0x18b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
  }
  pIVar1 = (this->DeviceManager).Ptr;
  if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,param_1,param_2);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// SynchronousDeviceSwap @ 148d4b650

/* WARNING: Removing unreachable block (ram,0x000148d4b8f9) */

void __thiscall Audio::FAudioMixerWasapi::SynchronousDeviceSwap(FAudioMixerWasapi *this)

{
  longlong *lpCriticalSection;
  FWasapiDeviceSwapContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEvent *pFVar5;
  FFutureState *this_00;
  TUniquePtr<Audio::FWasapiDeviceSwapContext,TDefaultDelete<Audio::FWasapiDeviceSwapContext>_>
  local_res8;
  FWasapiDeviceSwapContext *local_res10;
  FFutureState *local_38;
  FSharedReferencer<1> local_30;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->DeviceSwapContext).Ptr;
  (this->DeviceSwapContext).Ptr = (FWasapiDeviceSwapContext *)0x0;
  local_res10 = pFVar1;
  PerformDeviceSwap(&local_res8);
  if (pFVar1 != (FWasapiDeviceSwapContext *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pTVar4 = ::operator_new(0x90);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio_________00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5]._padding_ = 0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[6]._padding_ = 0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[7]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar4 + 1),4000);
    pTVar4[4]._padding_ = 0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00 = (FFutureState *)(pTVar4 + 1);
    pTVar4[7]._padding_ = (longlong)pFVar5;
    *(undefined1 *)&pTVar4[7].SharedReferenceCount = 0;
    if ((this_00 == (FFutureState *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (this_00 == (FFutureState *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0xcd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00[1].Mutex.CriticalSection.Opaque1[0] = local_res8.Ptr;
  local_res8.Ptr = (FWasapiDeviceSwapContext *)0x0;
  FFutureState::MarkComplete(this_00);
  if ((this_00 == (FFutureState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = this_00;
  local_30.ReferenceController = pTVar4;
  if ((FFutureState **)&this->_padding_ != &local_38) {
    this->_padding_ = (longlong)this_00;
    local_38 = (FFutureState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  if (((this_00 != (FFutureState *)0x0) && (this_00->bComplete == (TAtomic<bool>)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
                    /* WARNING: Could not recover jumptable at 0x000148d4b915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// TeardownHardware @ 148d4b930

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FAudioMixerWasapi::TeardownHardware(FAudioMixerWasapi *this)

{
  longlong *lpCriticalSection;
  IAudioMixerWasapiDeviceManager *pIVar1;
  char cVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  if (this->bIsInitialized == false) {
    pFVar3 = ::FString::FString(&local_18,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                               );
    ::FString::FString(&local_28,
                       L"FAudioMixerWasapi::TeardownHardware called when not fully initialized. Check for init errors earlier in the log."
                      );
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_28,pFVar3,0x38,Warning);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (this->DeviceManager).Ptr;
    if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
      cVar2 = (**(code **)((longlong)*pIVar1 + 0x10))();
      if (cVar2 == '\0') {
        pFVar3 = ::FString::FString(&local_18,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapi.cpp"
                                   );
        ::FString::FString(&local_28,
                           L"FAudioMixerWasapi::TeardownHardware DeviceManager->TeardownHardware() failed."
                          );
        IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
                  ((IAudioMixerPlatformInterface *)this,&local_28,pFVar3,0x40,Warning);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    this->bIsInitialized = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnregisterDeviceChangedListener @ 148d4bd00

void __thiscall Audio::FAudioMixerWasapi::UnregisterDeviceChangedListener(FAudioMixerWasapi *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FAudioMixerWasapi *pFVar4;
  
  if (WasapiWinNotificationClient.Object != (FWindowsMMNotificationClient *)0x0) {
    if (this->_padding_ != 0) {
      if (WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = (FAudioMixerWasapi *)(this->_padding_ + -8);
      if (this->_padding_ == 0) {
        pFVar4 = (FAudioMixerWasapi *)0x0;
      }
      FWindowsMMNotificationClient::UnRegisterDeviceDeviceChangedListener
                (WasapiWinNotificationClient.Object,(IAudioMixerDeviceChangedListener *)pFVar4);
      puVar1 = (undefined8 *)this->_padding_;
      if (puVar1 != (undefined8 *)0x0) {
        this->_padding_ = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    if (WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (this == (FAudioMixerWasapi *)&DAT_00000010) {
      this = (FAudioMixerWasapi *)0x0;
    }
    FWindowsMMNotificationClient::UnRegisterDeviceDeviceChangedListener
              (WasapiWinNotificationClient.Object,(IAudioMixerDeviceChangedListener *)this);
  }
  return;
}

// UnregisterForSessionEvents @ 148d4bdf0

void __cdecl Audio::FAudioMixerWasapi::UnregisterForSessionEvents(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
    return;
  }
  if ((WasapiWinNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FWindowsMMNotificationClient::UnregisterForSessionNotifications
            (WasapiWinNotificationClient.Object);
  return;
}

