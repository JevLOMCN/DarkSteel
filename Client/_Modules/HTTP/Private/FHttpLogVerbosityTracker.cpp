// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 7

// FHttpLogVerbosityTracker @ 14314cec0

/* WARNING: Enum "Type": Some values do not have unique names */

FHttpLogVerbosityTracker * __thiscall
FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::FHttpLogVerbosityTracker
          (FHttpLogVerbosityTracker *this)

{
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  
  this->NumRetriedRequests = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->NumRetriedRequestsLock,4000);
  this->OriginalVerbosity = Error;
  this->TargetVerbosity = NoLogging;
  UpdateSettingsFromConfig(this);
  this_00 = FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FHttpRetrySystem::FManager::FHttpLogVerbosityTracker>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
              *)this_00,(FHttpLogVerbosityTracker *)&stack0x00000008,(pmf_b3c3edc6)this);
  return this;
}

// ~FHttpLogVerbosityTracker @ 1431503a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::~FHttpLogVerbosityTracker
          (FHttpLogVerbosityTracker *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
                    /* WARNING: Could not recover jumptable at 0x0001431503c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->NumRetriedRequestsLock);
  return;
}

// DecrementRetriedRequests @ 14315c3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::DecrementRetriedRequests
          (FHttpLogVerbosityTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->NumRetriedRequestsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->NumRetriedRequests = this->NumRetriedRequests + -1;
  if (this->NumRetriedRequests < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRetriedRequests >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpRetrySystem.cpp"
                       ,0x2e1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NumRetriedRequests == 0) {
    if (2 < (byte)LogHttp._0_1_) {
      ::ToString(this->OriginalVerbosity);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogHttp,this->OriginalVerbosity);
  }
                    /* WARNING: Could not recover jumptable at 0x00014315c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Get @ 143160830

/* WARNING: Enum "Type": Some values do not have unique names */

FHttpLogVerbosityTracker * __cdecl FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::Get(void)

{
  bool bVar1;
  Type TVar2;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&Tracker.NumRetriedRequestsLock,4000);
      Tracker.OriginalVerbosity = Error;
      Tracker.TargetVerbosity = NoLogging;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"HTTP.Retry",L"RetryManagerVerbosityLevel",&local_18,&GEngineIni);
      if (bVar1) {
        TVar2 = ParseLogVerbosityFromString(&local_18);
        Tracker.TargetVerbosity = TVar2;
      }
      else {
        Tracker._48_2_ = Tracker._48_2_ & 0xff;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      this = FCoreDelegates::TSOnConfigSectionsChanged();
      TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
      ::AddRaw<FHttpRetrySystem::FManager::FHttpLogVerbosityTracker>
                ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                  *)this,(FHttpLogVerbosityTracker *)&stack0x00000008,(pmf_b3c3edc6)0x155065038);
      atexit(`FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::Get'::__l2::
             _dynamic_atexit_destructor_for__Tracker__);
      _Init_thread_footer(&::_TSS0);
      return &Tracker;
    }
  }
  return &Tracker;
}

// IncrementRetriedRequests @ 14316a900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::IncrementRetriedRequests
          (FHttpLogVerbosityTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->NumRetriedRequestsLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->NumRetriedRequests = this->NumRetriedRequests + 1;
    if (this->NumRetriedRequests == 1) {
      this->OriginalVerbosity = LogHttp._0_1_;
      if (this->TargetVerbosity != NoLogging) {
        if (2 < (byte)LogHttp._0_1_) {
          ::ToString(this->TargetVerbosity);
          ::ToString(this->OriginalVerbosity);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogHttp,this->TargetVerbosity);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014316a996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnConfigSectionsChanged @ 143170e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::OnConfigSectionsChanged
          (FHttpLogVerbosityTracker *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  FString local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  bVar4 = false;
  if (iVar3 == GEngineIni.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)GEngineIni.Data.AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
      goto LAB_143170ecb;
    }
LAB_143170ed2:
    ::FString::FString(&local_18,L"HTTP.Retry");
    iVar3 = local_18.Data.ArrayNum + -1;
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    bVar4 = true;
    iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (param_2,uVar2,&local_18);
    if (iVar3 != -1) {
      bVar5 = true;
      goto LAB_143170f29;
    }
  }
  else {
    bVar5 = iVar3 + GEngineIni.Data.ArrayNum == 1;
LAB_143170ecb:
    if (bVar5) goto LAB_143170ed2;
  }
  bVar5 = false;
  if (!bVar4) {
    return;
  }
LAB_143170f29:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    UpdateSettingsFromConfig(this);
  }
  return;
}

// UpdateSettingsFromConfig @ 14318ac20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::UpdateSettingsFromConfig
          (FHttpLogVerbosityTracker *this)

{
  bool bVar1;
  Type TVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"HTTP.Retry",L"RetryManagerVerbosityLevel",&local_18,&GEngineIni);
  if (bVar1) {
    TVar2 = ParseLogVerbosityFromString(&local_18);
  }
  else {
    TVar2 = NoLogging;
  }
  this->TargetVerbosity = TVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

