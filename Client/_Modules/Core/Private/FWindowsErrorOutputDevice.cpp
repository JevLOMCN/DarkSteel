// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FWindowsErrorOutputDevice @ 141a9c490

FWindowsErrorOutputDevice * __thiscall
FWindowsErrorOutputDevice::FWindowsErrorOutputDevice(FWindowsErrorOutputDevice *this)

{
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FWindowsErrorOutputDevice__6B_;
  return this;
}

// HandleError @ 141ab1190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsErrorOutputDevice::HandleError(FWindowsErrorOutputDevice *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  FOutputDeviceRedirector *this_00;
  wchar_t *pwVar5;
  longlong *plVar6;
  int local_res10 [6];
  FReadAccessScope local_28;
  
  LOCK();
  iVar1 = CallCount + 1;
  UNLOCK();
  if (CallCount == 0) {
    GIsGuarded = false;
    GLogConsole = (FOutputDeviceConsole *)0x0;
    GErrorHist[0x3fff] = L'\0';
    GIsRunning = false;
    GIsCriticalError = true;
    CallCount = iVar1;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnHandleSystemError);
    ::FDebug::LogFormattedMessageWithCallstack
              ((FName *)&LogWindows.field_0x4,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsErrorOutputDevice.cpp"
               ,0x75,L"=== Critical error: ===",GErrorHist,Error);
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(this_00);
    (**(code **)(*(longlong *)this + 0x60))(this);
    if (((GIgnoreDebugger != false) || (BVar4 = IsDebuggerPresent(), BVar4 == 0)) ||
       (GAlwaysReportCrash != false)) {
      pwVar5 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar5,L"CrashForUAT");
      if (!bVar2) {
        local_res10[0] = 0;
        pwVar5 = FCommandLine::Get();
        FParse::Value(pwVar5,L"AutomatedPerfTesting=",local_res10);
        bVar2 = FApp::IsUnattended();
        if ((bVar2) && (local_res10[0] != 0)) {
          pwVar5 = FCommandLine::Get();
          bVar2 = FParse::Param(pwVar5,L"KillAllPopUpBlockingWindows");
          if (bVar2) {
            if (2 < (byte)LogWindows._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Attempting_to_r_1506f13a0,
                         (FLogCategoryBase *)&LogWindows);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &FWindowsPlatformProcess::LaunchURLOverrideDelegate,&local_28);
            if (((FWindowsPlatformProcess::LaunchURLOverrideDelegate._16_4_ == 0) ||
                (FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_ == 0)) ||
               (cVar3 = (**(code **)(*(longlong *)
                                      FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_ +
                                    0x38))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_28);
            if (bVar2) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &FWindowsPlatformProcess::LaunchURLOverrideDelegate,&local_28);
              plVar6 = (longlong *)0x0;
              if (FWindowsPlatformProcess::LaunchURLOverrideDelegate._16_4_ != 0) {
                plVar6 = (longlong *)FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_;
              }
              (**(code **)(*plVar6 + 0x60))(plVar6,L"KillAllPopUpBlockingWindows.bat");
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_28);
            }
            else {
              FWindowsPlatformProcess::LaunchURLInternal
                        (L"KillAllPopUpBlockingWindows.bat",(wchar_t *)0x0,(FString *)0x0);
            }
          }
        }
      }
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreDelegates::OnShutdownAfterError);
    return;
  }
  if ((byte)LogWindows._0_1_ < 2) {
    CallCount = iVar1;
    return;
  }
  CallCount = iVar1;
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  return;
}

// HandleErrorRestoreUI @ 141ab13b0

void __thiscall FWindowsErrorOutputDevice::HandleErrorRestoreUI(FWindowsErrorOutputDevice *this)

{
  return;
}

// Serialize @ 141abff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsErrorOutputDevice::Serialize
          (FWindowsErrorOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  wchar_t wVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  wchar_t *pwVar8;
  size_t sVar9;
  FPlatformMemoryStats *pFVar10;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  FOutputDeviceRedirector *pFVar11;
  HANDLE hProcess;
  undefined *puVar12;
  wchar_t wVar13;
  bool bVar14;
  undefined1 auStackY_928 [32];
  wchar_t *local_8e8;
  wchar_t **local_8e0;
  wchar_t *local_8d8;
  void *local_8d0;
  FPlatformMemoryStats local_8c8;
  WCHAR local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_928;
  local_8e8 = param_1;
  if (!GIgnoreDebugger) {
    BVar5 = IsDebuggerPresent();
    if (BVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (GIsCriticalError == false) {
    GIsCriticalError = true;
    if (1 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*_&>
                ((FLogCategoryBase *)&LogWindows,&::LOG_Static,&local_8e8);
    }
    DVar6 = GetLastError();
    local_838[0] = L'\0';
    if (DVar6 == 0) {
      if (4 < (byte)LogWindows._0_1_) {
        DVar6 = GetLastError();
        FormatMessageW(0x1000,(LPCVOID)0x0,DVar6,0x400,local_838,0x400,(va_list *)0x0);
        pwVar8 = wcschr(local_838,L'\r');
        if (pwVar8 != (wchar_t *)0x0) {
          *pwVar8 = L'\0';
        }
        pwVar8 = wcschr(local_838,L'\n');
        if (pwVar8 != (wchar_t *)0x0) {
          *pwVar8 = L'\0';
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
    }
    else if (1 < (byte)LogWindows._0_1_) {
      FormatMessageW(0x1000,(LPCVOID)0x0,DVar6,0x400,local_838,0x400,(va_list *)0x0);
      pwVar8 = wcschr(local_838,L'\r');
      if (pwVar8 != (wchar_t *)0x0) {
        *pwVar8 = L'\0';
      }
      pwVar8 = wcschr(local_838,L'\n');
      if (pwVar8 != (wchar_t *)0x0) {
        *pwVar8 = L'\0';
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    sVar9 = wcslen(local_8e8);
    iVar7 = (int)sVar9;
    if (0x4000 < iVar7) {
      iVar7 = 0x4000;
    }
    iVar7 = wcsncmp(GErrorHist,local_8e8,(longlong)iVar7);
    if (iVar7 != 0) {
      wcsncpy(GErrorHist,local_8e8,0x3ffa);
      GErrorHist[0x3ffa] = L'\0';
      puVar12 = &u_____;
      sVar9 = wcslen(GErrorHist);
      iVar7 = (int)sVar9 + 1;
      if (iVar7 < 0x4000) {
        pwVar8 = GErrorHist + (int)sVar9;
        wVar13 = L'\r';
        do {
          wVar1 = *(wchar_t *)(puVar12 + 2);
          puVar12 = puVar12 + 2;
          iVar7 = iVar7 + 1;
          *pwVar8 = wVar13;
          pwVar8 = pwVar8 + 1;
          if (wVar1 == L'\0') break;
          wVar13 = wVar1;
        } while (iVar7 < 0x4000);
        *pwVar8 = L'\0';
      }
    }
  }
  else if (1 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  if (GIsGuarded == false) {
    (**(code **)(*(longlong *)this + 0x58))(this);
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    bVar14 = GIsCriticalError != false;
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    RequestEngineExit(L"Win RequestExit");
    bVar4 = UE::IsGCLocked();
    if (!bVar4) {
      this_00 = FCoreDelegates::GetApplicationWillTerminateDelegate();
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(this_00);
    }
    pFVar11 = GetGlobalLogSingleton();
    if (pFVar11 != (FOutputDeviceRedirector *)0x0) {
      pFVar11 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(pFVar11);
    }
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,-(uint)bVar14 & 3);
  }
  else {
    if (GIgnoreDebugger == false) {
      BVar5 = IsDebuggerPresent();
      if (BVar5 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pwVar8 = local_8e8;
    pvVar2 = *(void **)&this->field_0x10;
    if (GIsGPUCrashed == false) {
      pFVar10 = FWindowsPlatformMemory::GetStats(&local_8c8);
      FGenericCrashContext::SetMemoryStats(pFVar10);
      local_8d8 = pwVar8;
      local_8e0 = &local_8d8;
      local_8d0 = pvVar2;
      if (FGenericPlatformMemory::bIsOOM == false) {
        RaiseException(0x4000,0,1,(ULONG_PTR *)&local_8e0);
      }
      else {
        RaiseException(0xc000,0,1,(ULONG_PTR *)&local_8e0);
      }
    }
    else {
      ReportGPUCrash(local_8e8,pvVar2);
    }
  }
  return;
}

