// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsHorde
// Functions: 7

// `dynamic_initializer_for_'ModuleRegistrantAnalyticsHorde'' @ 141445370

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnalyticsHorde__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnalyticsHorde";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnalyticsHorde",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAnalyticsHorde>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14ea18b20

void * __thiscall FAnalyticsHorde::_scalar_deleting_destructor_(FAnalyticsHorde *this,uint param_1)

{
  *this = (FAnalyticsHorde)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GetServerURL @ 14ea18b60

FString * __cdecl GetServerURL(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetServerURL'::__l2::_dynamic_atexit_destructor_for__ServerURL__);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (ServerURL.Data.ArrayNum < 2) {
    pwVar4 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar4,L"HordeServerUrl=",&ServerURL,true,(wchar_t **)0x0);
    if (!bVar3) {
      pFVar5 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_18,L"UE_HORDE_URL");
      if (pFVar5 != &ServerURL) {
        if (ServerURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(ServerURL.Data.AllocatorInstance.Data);
        }
        ServerURL.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ServerURL.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        ServerURL.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = ServerURL.Data.ArrayNum;
  _Src = ServerURL.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar6 = (longlong)ServerURL.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = ServerURL.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar6 * 2);
  }
  return __return_storage_ptr__;
}

// GetTelemetryAPI @ 14ea18ce0

FString * __cdecl GetTelemetryAPI(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetTelemetryAPI'::__l2::_dynamic_atexit_destructor_for__TelemetryAPI__);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (TelemetryAPI.Data.ArrayNum < 2) {
    pwVar4 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar4,L"HordeTelemetryApi=",&TelemetryAPI,true,(wchar_t **)0x0);
    if (!bVar3) {
      pFVar5 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_18,L"UE_HORDE_TELEMETRY_API");
      if (pFVar5 != &TelemetryAPI) {
        if (TelemetryAPI.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TelemetryAPI.Data.AllocatorInstance.Data);
        }
        TelemetryAPI.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TelemetryAPI.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        TelemetryAPI.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = TelemetryAPI.Data.ArrayNum;
  _Src = TelemetryAPI.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar6 = (longlong)TelemetryAPI.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = TelemetryAPI.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar6 * 2);
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_AnalyticsHorde @ 14ea18e90

void __cdecl IMPLEMENT_MODULE_AnalyticsHorde(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'ServerURL'' @ 15046d940

void __cdecl `GetServerURL'::__l2::_dynamic_atexit_destructor_for__ServerURL__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ServerURL.Data.AllocatorInstance.Data;
  if (ServerURL.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ServerURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TelemetryAPI'' @ 15046d960

void __cdecl `GetTelemetryAPI'::__l2::_dynamic_atexit_destructor_for__TelemetryAPI__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TelemetryAPI.Data.AllocatorInstance.Data;
  if (TelemetryAPI.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TelemetryAPI.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

