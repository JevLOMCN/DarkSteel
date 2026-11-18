// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// AssertFailed @ 14181cbc0

void __cdecl FDebug::AssertFailed(char *param_1,char *param_2,int param_3,wchar_t *param_4)

{
  AssertFailedImplV(param_1,param_2,param_3,(void *)0x0,param_4,&stack0x00000028);
  return;
}

// AssertFailedV @ 14181cd30

void __cdecl
FDebug::AssertFailedV(char *param_1,char *param_2,int param_3,wchar_t *param_4,char *param_5)

{
  AssertFailedImplV(param_1,param_2,param_3,(void *)0x0,param_4,param_5);
  return;
}

// CheckVerifyFailedImpl2 @ 14181e000

bool __cdecl
FDebug::CheckVerifyFailedImpl2(char *param_1,char *param_2,int param_3,wchar_t *param_4)

{
  bool bVar1;
  
  bVar1 = CheckVerifyFailedImpl2V(param_1,param_2,param_3,param_4,&stack0x00000028);
  return bVar1;
}

// CheckVerifyFailedImpl2V @ 14181e030

bool __cdecl
FDebug::CheckVerifyFailedImpl2V
          (char *param_1,char *param_2,int param_3,wchar_t *param_4,char *param_5)

{
  bool bVar1;
  bool bVar2;
  FOutputDeviceRedirector *pFVar3;
  void *unaff_retaddr;
  
  if (!GIsCriticalError) {
    StaticFailDebugV(L"Assertion failed: ",param_1,param_2,param_3,false,unaff_retaddr,
                     (wchar_t *)0x0,param_4,param_5);
  }
  pFVar3 = GetGlobalLogSingleton();
  if (pFVar3 == (FOutputDeviceRedirector *)0x0) {
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    bVar1 = GIgnoreDebugger;
    if (!bVar2) {
      FWindowsPlatformMisc::PromptForRemoteDebugging(false);
      AssertFailedImplV(param_1,param_2,param_3,unaff_retaddr,param_4,param_5);
    }
    return bVar2 && bVar1 == false;
  }
  pFVar3 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
  FOutputDeviceRedirector::Flush(pFVar3);
}

// CheckVerifyFailedImpl @ 14181e110

bool __cdecl
FDebug::CheckVerifyFailedImpl
          (char *param_1,char *param_2,int param_3,void *param_4,wchar_t *param_5)

{
  bool bVar1;
  FOutputDeviceRedirector *pFVar2;
  
  if (!GIsCriticalError) {
    StaticFailDebugV(L"Assertion failed: ",param_1,param_2,param_3,false,param_4,(wchar_t *)0x0,
                     param_5,&stack0x00000030);
  }
  pFVar2 = GetGlobalLogSingleton();
  if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
    pFVar2 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(pFVar2);
  }
  bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (!bVar1) {
    FWindowsPlatformMisc::PromptForRemoteDebugging(false);
    AssertFailedImplV(param_1,param_2,param_3,param_4,param_5,&stack0x00000030);
    return false;
  }
  return GIgnoreDebugger == false;
}

// DumpStackTraceToLog @ 141821230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDebug::DumpStackTraceToLog(wchar_t *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  char *_Str;
  size_t sVar3;
  wchar_t *pwVar4;
  FOutputDeviceRedirector *this;
  ForAnyElementType FVar5;
  uint uVar6;
  undefined1 auStackY_1b8 [32];
  FString local_188;
  FConditionalScopeLogTime local_178;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  _Str = malloc(0xffff);
  MemoryTrace_Alloc((ulong64)_Str,0xffff,0,0,0);
  ::FString::PrintfImpl(&local_188,L"FPlatformStackWalk::StackWalkAndDump");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar5.Data = local_188.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_178,true,(wchar_t *)FVar5.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Seconds);
  *_Str = '\0';
  FGenericPlatformStackWalk::StackWalkAndDumpEx(_Str,0xffff,1,1,(void *)0x0);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_178);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  sVar3 = strlen(_Str);
  local_38 = (int)sVar3;
  uVar6 = local_38 + 1;
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (0x80 < uVar6) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar6,2);
    FVar5.Data = local_48.Data;
  }
  local_40 = local_148;
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    local_40 = FVar5.Data;
  }
  pwVar4 = FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_40,uVar6,_Str,uVar6);
  if (pwVar4 == (wchar_t *)0x0) {
    bVar2 = CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LogFormattedMessageWithCallstack
            ((FName *)&LogOutputDevice.field_0x4,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AssertionMacros.cpp"
             ,0x34f,param_1,(wchar_t *)local_40,param_2);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  this = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
  FOutputDeviceRedirector::Flush(this);
}

// DumpStackTraceToLog @ 141821420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDebug::DumpStackTraceToLog(Type param_1)

{
  DumpStackTraceToLog(L"=== FDebug::DumpStackTrace(): ===",param_1);
  return;
}

// EnsureFailed @ 1418221d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDebug::EnsureFailed(char *param_1,char *param_2,int param_3,void *param_4,wchar_t *param_5)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  atomic<unsigned___int64> aVar4;
  ulonglong uVar5;
  FWordMutex FVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  char *_Memory;
  FThreadHeartBeat *this;
  FGameThreadHitchHeartBeatThreaded *this_00;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar10;
  FOutputDeviceRedirector *this_01;
  wchar_t *pwVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  undefined1 auStackY_82c8 [32];
  FString local_8270;
  FString local_8260 [2];
  FString local_8240;
  char *local_8230;
  wchar_t *local_8228;
  FConditionalScopeLogTime local_8220;
  FConditionalScopeLogTime local_81f8 [2];
  FConditionalScopeLogTime local_81a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_8178;
  wchar_t local_8058 [16384];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1418221ef;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_82c8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0xa80) != 0) {
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_8228 = param_5;
    local_8230 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0xa80));
    pcVar2 = *(code **)(lVar1 + 0xa80);
    plVar12 = (longlong *)(lVar1 + 0xa90);
    if (*(longlong **)(lVar1 + 0xaa8) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar1 + 0xaa8);
    }
    uVar9 = (**(code **)(*plVar12 + 8))();
    cVar7 = (*pcVar2)(uVar9,&local_8230);
    if (cVar7 != '\0') {
      return;
    }
  }
  bVar14 = FCommandLine::bIsInitialized == false;
  if (bVar14) {
    FCommandLine::Set(L"");
  }
  if (FGenericPlatformTime::SecondsPerCycle == 0.0) goto joined_r0x000141822946;
  LOCK();
  NumEnsureFailures = (TAtomic<unsigned___int64>)((longlong)NumEnsureFailures + 1);
  UNLOCK();
  ::FString::PrintfImpl(&local_8270,L"FDebug::EnsureFailed");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_8270.Data.ArrayNum != 0) {
    FVar13.Data = local_8270.Data.AllocatorInstance.Data;
  }
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_8220,true,(wchar_t *)FVar13.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
             ScopeLog_Seconds);
  LOCK();
  ActiveEnsureCount = ActiveEnsureCount + 1;
  UNLOCK();
  StaticFailDebugV(L"Ensure condition failed: ",param_1,param_2,param_3,true,param_4,param_5,
                   (wchar_t *)0x0,(char *)0x0);
  bVar8 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((bVar8) && (GAlwaysReportCrash == false)) {
    if (GEnsuresAreErrors == 0) {
      if (2 < (byte)LogOutputDevice._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOutputDevice);
      }
    }
    else if (1 < (byte)LogOutputDevice._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOutputDevice);
    }
LAB_141822925:
    LOCK();
    ActiveEnsureCount = ActiveEnsureCount + -1;
    UNLOCK();
  }
  else {
    TCString<wchar_t>::SnprintfImpl
              (local_8058,0x4000,
               L"Ensure condition failed: %hs  [File:%hs] [Line: %i] \r\n%s\r\nStack: \r\n");
    _Memory = malloc(0xffff);
    MemoryTrace_Alloc((ulong64)_Memory,0xffff,0,0,0);
    if (_Memory != (char *)0x0) {
      this = FThreadHeartBeat::GetNoInit();
      if (this != (FThreadHeartBeat *)0x0) {
        FThreadHeartBeat::SuspendHeartBeat(this,false);
      }
      this_00 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(this_00);
      ::FString::PrintfImpl(local_8260,L"FPlatformStackWalk::StackWalkAndDump");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_8260[0].Data.ArrayNum != 0) {
        FVar13.Data = local_8260[0].Data.AllocatorInstance.Data;
      }
      FConditionalScopeLogTime::FConditionalScopeLogTime
                (local_81f8,true,(wchar_t *)FVar13.Data,(TKeyValuePair<double,unsigned_int> *)0x0,
                 ScopeLog_Seconds);
      *_Memory = '\0';
      FGenericPlatformStackWalk::StackWalkAndDumpEx(_Memory,0xffff,param_4,1,(void *)0x0);
      FConditionalScopeLogTime::~FConditionalScopeLogTime(local_81f8);
      if (local_8260[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8260[0].Data.AllocatorInstance.Data);
      }
      pTVar10 = StringCast<wchar_t,128,char>(&local_8178,_Memory);
      TCString<wchar_t>::StrncatTruncateDest(local_8058,0x4000,pTVar10->Ptr);
      if ((void *)local_8178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_8178._padding_);
      }
      MemoryTrace_Free((ulong64)_Memory,0,0);
      free(_Memory);
      LogFormattedMessageWithCallstack
                ((FName *)&LogOutputDevice.field_0x4,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AssertionMacros.cpp"
                 ,0x21f,L"=== Handled ensure: ===",local_8058,(GEnsuresAreErrors == 0) + Error);
      this_01 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(this_01);
    }
    pwVar11 = FCommandLine::Get();
    bVar8 = FParse::Param(pwVar11,L"nocrashreports");
    if (!bVar8) {
      bVar8 = GEnsuresAreErrors != 0;
      if (GEnsuresAreErrors == 0) {
        if (2 < (byte)LogOutputDevice._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOutputDevice);
        }
      }
      else if (1 < (byte)LogOutputDevice._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOutputDevice);
      }
      if (bVar8) {
        ::FString::PrintfImpl(&local_8240,L"SendNewReport");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_8240.Data.ArrayNum != 0) {
          FVar13.Data = local_8240.Data.AllocatorInstance.Data;
        }
        FConditionalScopeLogTime::FConditionalScopeLogTime
                  (&local_81a8,true,(wchar_t *)FVar13.Data,(TKeyValuePair<double,unsigned_int> *)0x0
                   ,ScopeLog_Seconds);
        LOCK();
        bVar8 = FailDebugMutex.State == (atomic<unsigned___int64>)0x0;
        if (bVar8) {
          FailDebugMutex.State = (atomic<unsigned___int64>)0x1;
        }
        UNLOCK();
        if (!bVar8) {
          UE::FWordMutex::LockSlow(&FailDebugMutex);
        }
        ReportEnsure(local_8058,param_4);
        FVar6 = FailDebugMutex;
        GErrorHist[0] = L'\0';
        GErrorExceptionDescription[0] = L'\0';
        LOCK();
        aVar4 = FailDebugMutex.State + -1;
        UNLOCK();
        uVar5 = (ulonglong)FailDebugMutex.State & 2;
        uVar3 = (ulonglong)FailDebugMutex.State & 0xfffffffffffffffc;
        FailDebugMutex.State = aVar4;
        if ((uVar3 != 0) && (uVar5 == 0)) {
          UE::FWordMutex::UnlockSlow(&FailDebugMutex,(ulong64)FVar6.State);
        }
        FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_81a8);
        if (local_8240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8240.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_141822925;
    }
  }
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_8220);
  if (local_8270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8270.Data.AllocatorInstance.Data);
  }
joined_r0x000141822946:
  if (bVar14) {
    FCommandLine::CmdLineVersion = FCommandLine::CmdLineVersion + 1;
    FCommandLine::bIsInitialized = false;
    FCommandLine::LoggingOriginalCmdLine[0] = L'\0';
    FCommandLine::LoggingCmdLine[0] = L'\0';
    FCommandLine::OriginalCmdLine[0] = L'\0';
    FCommandLine::CmdLine[0] = L'\0';
  }
  return;
}

// GetNumEnsureFailures @ 141826670

ulong64 __cdecl FDebug::GetNumEnsureFailures(void)

{
  return (ulong64)NumEnsureFailures;
}

// HasAsserted @ 141828a50

bool __cdecl FDebug::HasAsserted(void)

{
  return bHasAsserted;
}

// IsEnsuring @ 14182a690

bool __cdecl FDebug::IsEnsuring(void)

{
  return 0 < ActiveEnsureCount;
}

// LogAssertFailedMessageImpl @ 14182b9b0

void __cdecl
FDebug::LogAssertFailedMessageImpl
          (char *param_1,char *param_2,int param_3,void *param_4,wchar_t *param_5)

{
  if (!GIsCriticalError) {
    StaticFailDebugV(L"Assertion failed: ",param_1,param_2,param_3,false,param_4,(wchar_t *)0x0,
                     param_5,&stack0x00000030);
  }
  return;
}

// LogAssertFailedMessageImplV @ 14182ba10

void __cdecl
FDebug::LogAssertFailedMessageImplV
          (char *param_1,char *param_2,int param_3,void *param_4,wchar_t *param_5,char *param_6)

{
  if (!GIsCriticalError) {
    StaticFailDebugV(L"Assertion failed: ",param_1,param_2,param_3,false,param_4,(wchar_t *)0x0,
                     param_5,param_6);
  }
  return;
}

// LogFormattedMessageWithCallstack @ 14182ba90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDebug::LogFormattedMessageWithCallstack
          (FName *param_1,char *param_2,int param_3,wchar_t *param_4,wchar_t *param_5,Type param_6)

{
  wchar_t wVar1;
  FName FVar2;
  bool bVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined1 auStackY_8a8 [32];
  FName local_860;
  wchar_t local_858 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  FVar2 = *param_1;
  local_860 = FVar2;
  if (!FCommandLine::bIsInitialized) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar3 = FParse::Param(FCommandLine::CmdLine,L"CrashForUAT");
  if (bVar3) {
    if (FCommandLine::bIsInitialized == false) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    bVar3 = FParse::Param(FCommandLine::CmdLine,L"stdout");
    if ((!bVar3) || (FVar2 == (FName)0x0)) goto LAB_14182bc3e;
    bVar3 = true;
    FMsg::LogfImpl(param_2,param_3,&local_860,param_6,L"begin: stack for UAT");
  }
  else {
LAB_14182bc3e:
    bVar3 = false;
    if (FVar2 == (FName)0x0) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"%s\n");
      bVar3 = false;
      goto LAB_14182bbc0;
    }
  }
  FMsg::LogfImpl(param_2,param_3,&local_860,param_6,L"%s");
  FMsg::LogfImpl(param_2,param_3,&local_860,param_6,L"");
LAB_14182bbc0:
  do {
    pwVar5 = local_858;
    iVar7 = 0x3ff;
    pwVar6 = param_5;
    do {
      wVar1 = *pwVar6;
      if (((wVar1 == L'\0') || (wVar1 == L'\r')) || (wVar1 == L'\n')) break;
      *pwVar5 = wVar1;
      wVar1 = pwVar6[1];
      if (((wVar1 == L'\0') || (wVar1 == L'\r')) || (wVar1 == L'\n')) {
        pwVar5 = pwVar5 + 1;
        pwVar6 = pwVar6 + 1;
        break;
      }
      pwVar5[1] = wVar1;
      wVar1 = pwVar6[2];
      if (((wVar1 == L'\0') || (wVar1 == L'\r')) || (wVar1 == L'\n')) {
        pwVar5 = pwVar5 + 2;
        pwVar6 = pwVar6 + 2;
        break;
      }
      pwVar5[2] = wVar1;
      pwVar6 = pwVar6 + 3;
      pwVar5 = pwVar5 + 3;
      iVar7 = iVar7 + -3;
    } while (0 < iVar7);
    *pwVar5 = L'\0';
    FGenericPlatformStricmp::Strnicmp(param_5,L"0x",2);
    if (FVar2 == (FName)0x0) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"%s%s\n");
    }
    else {
      FMsg::LogfImpl(param_2,param_3,&local_860,param_6,L"%s%s");
    }
    if (*pwVar6 == L'\0') {
      if (bVar3) {
        FMsg::LogfImpl(param_2,param_3,&local_860,param_6,L"end: stack for UAT");
      }
      return;
    }
    if ((*pwVar6 != L'\r') || (lVar4 = 4, pwVar6[1] != L'\n')) {
      lVar4 = 2;
    }
    param_5 = (wchar_t *)(lVar4 + (longlong)pwVar6);
  } while( true );
}

// OptionallyLogFormattedEnsureMessageReturningFalseImpl @ 14182cc50

bool __cdecl
FDebug::OptionallyLogFormattedEnsureMessageReturningFalseImpl
          (bool param_1,char *param_2,char *param_3,int param_4,void *param_5,wchar_t *param_6,
          char *param_7)

{
  ulonglong uVar1;
  atomic<unsigned___int64> aVar2;
  ulonglong uVar3;
  FWordMutex FVar4;
  ulong64 *puVar5;
  bool bVar6;
  
  if (param_1) {
    LOCK();
    bVar6 = AssertionMacros_Private::FormatMutex.State == (atomic<unsigned___int64>)0x0;
    if (bVar6) {
      AssertionMacros_Private::FormatMutex.State = (atomic<unsigned___int64>)0x1;
    }
    UNLOCK();
    if (!bVar6) {
      UE::FWordMutex::LockSlow(&AssertionMacros_Private::FormatMutex);
    }
    puVar5 = __local_stdio_printf_options();
    __stdio_common_vswprintf(*puVar5,AssertionMacros_Private::FormatBuffer,0xffff,param_6,0,param_7)
    ;
    EnsureFailed(param_2,param_3,param_4,param_5,AssertionMacros_Private::FormatBuffer);
    FVar4 = AssertionMacros_Private::FormatMutex;
    LOCK();
    aVar2 = AssertionMacros_Private::FormatMutex.State + -1;
    UNLOCK();
    uVar3 = (ulonglong)AssertionMacros_Private::FormatMutex.State & 2;
    uVar1 = (ulonglong)AssertionMacros_Private::FormatMutex.State & 0xfffffffffffffffc;
    AssertionMacros_Private::FormatMutex.State = aVar2;
    if ((uVar1 != 0) && (uVar3 == 0)) {
      UE::FWordMutex::UnlockSlow(&AssertionMacros_Private::FormatMutex,(ulong64)FVar4.State);
    }
  }
  return false;
}

// OptionallyLogFormattedEnsureMessageReturningFalseImpl @ 14182cd40

bool __cdecl
FDebug::OptionallyLogFormattedEnsureMessageReturningFalseImpl
          (bool param_1,char *param_2,char *param_3,int param_4,void *param_5,wchar_t *param_6)

{
  OptionallyLogFormattedEnsureMessageReturningFalseImpl
            (param_1,param_2,param_3,param_4,param_5,param_6,&stack0x00000038);
  return false;
}

// ProcessFatalError @ 14182da50

void __cdecl FDebug::ProcessFatalError(void *param_1)

{
  bHasAsserted = true;
  GError->ProgramCounter = param_1;
  FOutputDevice::LogfImpl((FOutputDevice *)GError,L"%s");
  return;
}

