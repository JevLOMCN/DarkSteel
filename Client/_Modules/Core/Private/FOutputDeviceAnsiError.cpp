// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FOutputDeviceAnsiError @ 1418bc950

FOutputDeviceAnsiError * __thiscall
FOutputDeviceAnsiError::FOutputDeviceAnsiError(FOutputDeviceAnsiError *this)

{
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7FOutputDeviceAnsiError__6B_;
  this->_padding_ = 0;
  this->ErrorPos = 0;
  return this;
}

// CanBeUsedOnAnyThread @ 1418c9f50

bool __thiscall FOutputDeviceAnsiError::CanBeUsedOnAnyThread(FOutputDeviceAnsiError *this)

{
  return true;
}

// HandleError @ 1418e2010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDeviceAnsiError::HandleError(FOutputDeviceAnsiError *this)

{
  atomic<unsigned_int> *paVar1;
  double dVar2;
  double dVar3;
  BOOLEAN BVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  FOutputDeviceRedirector *pFVar7;
  FOutputDeviceRedirector *this_00;
  bool bVar8;
  double dVar9;
  LARGE_INTEGER local_res10 [3];
  
  this_00 = (FOutputDeviceRedirector *)0x0;
  GIsGuarded = false;
  GIsRunning = false;
  GIsCriticalError = true;
  GLogConsole = (FOutputDeviceConsole *)0x0;
  GErrorHist[0x3fff] = L'\0';
  if ((GWasGLogDestroyed) ||
     (pFVar7 = FOutputDeviceRedirector::Get(), pFVar7 == (FOutputDeviceRedirector *)0x0)) {
    FWindowsPlatformMisc::LocalPrint(GErrorHist);
  }
  else {
    if ((4 < (byte)LogHAL._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHAL),
       4 < (byte)LogHAL._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
    if (GWasGLogDestroyed == false) {
      this_00 = FOutputDeviceRedirector::Get();
    }
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    paVar1 = &((this_00->State).Ptr)->PanicThreadId;
    LOCK();
    aVar6 = *paVar1;
    bVar8 = aVar6 == (atomic<unsigned_int>)0xffffffff;
    if (bVar8) {
      *paVar1 = aVar5;
      aVar6 = (atomic<unsigned_int>)0xffffffff;
    }
    UNLOCK();
    if (bVar8) {
      QueryPerformanceCounter(local_res10);
      dVar2 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
              ___real_4170000010000000;
      QueryPerformanceCounter(local_res10);
      dVar3 = __real_4170000000000000;
      dVar9 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
      do {
        if (dVar2 <= dVar9 + dVar3) {
LAB_1418e2173:
          LOCK();
          ((this_00->State).Ptr)->PrimaryThreadId = aVar5;
          UNLOCK();
                    /* WARNING: Subroutine does not return */
          FOutputDeviceRedirector::Flush(this_00);
        }
        BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)(this_00->State).Ptr);
        if (BVar4 != '\0') {
          ReleaseSRWLockExclusive((PSRWLOCK)(this_00->State).Ptr);
          goto LAB_1418e2173;
        }
        QueryPerformanceCounter(local_res10);
        dVar9 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
      } while( true );
    }
    if (aVar6 == aVar5) {
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(this_00);
    }
  }
  FWindowsPlatformMisc::LocalPrint(L"\n\nExiting due to error\n");
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FCoreDelegates::OnShutdownAfterError);
  return;
}

// Serialize @ 1418f5200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceAnsiError::Serialize
          (FOutputDeviceAnsiError *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  FWindowsPlatformMisc::LocalPrint(L"\nappError called: \n");
  FWindowsPlatformMisc::LocalPrint(param_1);
  FWindowsPlatformMisc::LocalPrint(L"\n");
  if (GIsCriticalError == false) {
    GIsCriticalError = true;
    if (1 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
    wcsncpy(GErrorHist,param_1,0x3fff);
    pwVar6 = L"\r\n\r\n";
    GErrorHist[0x3fff] = L'\0';
    sVar4 = wcslen(GErrorHist);
    iVar7 = (int)sVar4 + 1;
    if (iVar7 < 0x4000) {
      pwVar5 = GErrorHist + (int)sVar4;
      wVar3 = L'\r';
      do {
        *pwVar5 = wVar3;
        pwVar6 = pwVar6 + 1;
        wVar3 = *pwVar6;
        pwVar5 = pwVar5 + 1;
        iVar7 = iVar7 + 1;
        if (wVar3 == L'\0') break;
      } while (iVar7 < 0x4000);
      *pwVar5 = L'\0';
    }
    sVar4 = wcslen(GErrorHist);
    this->ErrorPos = (int)sVar4;
  }
  else if (1 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (GIsGuarded != false) {
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FWindowsPlatformMisc::RaiseException(1);
    return;
  }
  (**(code **)(this->_padding_ + 0x58))(this);
  bVar2 = FApp::IsUnattended();
  if (!bVar2) {
    FWindowsPlatformMisc::RequestExit(true,L"FOutputDeviceAnsiError::Serialize.!GIsGuarded");
    return;
  }
  if (1 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return;
}

