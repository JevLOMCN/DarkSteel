// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~FCrashReportingThread @ 141a9ce00

void __thiscall FCrashReportingThread::~FCrashReportingThread(FCrashReportingThread *this)

{
  DWORD DVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  void **ppvVar2;
  
  if (this->Thread != (void *)0x0) {
    SetEvent(this->InputEvents[1]);
    DVar1 = WaitForSingleObject(this->Thread,1000);
    if (DVar1 == 0) {
      CloseHandle(this->Thread);
    }
    this->Thread = (void *)0x0;
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreDelegates::GetPreMainInitDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  for (ppvVar2 = this->InputEvents; ppvVar2 != &this->CrashHandledEvent; ppvVar2 = ppvVar2 + 1) {
    CloseHandle(*ppvVar2);
    *ppvVar2 = (void *)0x0;
  }
  CloseHandle(this->CrashHandledEvent);
  this->CrashHandledEvent = (void *)0x0;
  if (this->CrashClientHandle != (FProcHandle)0x0) {
    CloseHandle((HANDLE)this->CrashClientHandle);
  }
  this->CrashClientHandle = (FProcHandle)0x0;
  return;
}

// CrashReportingThreadProc @ 141aa2550

ulong __cdecl FCrashReportingThread::CrashReportingThreadProc(void *param_1)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  int aiStackX_10 [2];
  
  bVar1 = false;
  while( true ) {
    if (bVar1) {
      return 0;
    }
    DVar3 = WaitForMultipleObjects(2,(HANDLE *)((longlong)param_1 + 0x10),0,500);
    if (DVar3 == 0) break;
    if (DVar3 == 1) {
      bVar1 = true;
    }
    if ((*(longlong *)((longlong)param_1 + 0x40) != 0) &&
       (bVar2 = FWindowsPlatformProcess::IsProcRunning((FProcHandle *)((longlong)param_1 + 0x40)),
       !bVar2)) {
      aiStackX_10[0] = 0;
      bVar2 = FWindowsPlatformProcess::GetProcReturnCode
                        ((FProcHandle *)((longlong)param_1 + 0x40),aiStackX_10);
      if (bVar2) {
        FGenericCrashContext::SetOutOfProcessCrashReporterExitCode(aiStackX_10[0]);
        FWindowsPlatformProcess::CloseProc((FProcHandle *)((longlong)param_1 + 0x40));
        *(undefined8 *)((longlong)param_1 + 0x40) = 0;
      }
    }
  }
  ResetEvent(*(HANDLE *)((longlong)param_1 + 0x20));
  HandleCrashInternal(param_1);
  ResetEvent(*(HANDLE *)((longlong)param_1 + 0x10));
  SetEvent(*(HANDLE *)((longlong)param_1 + 0x20));
  return 0;
}

// HandleCrashInternal @ 141ab0cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCrashReportingThread::HandleCrashInternal(FCrashReportingThread *this)

{
  ulong uVar1;
  _EXCEPTION_RECORD *p_Var2;
  _EXCEPTION_POINTERS *p_Var3;
  code *pcVar4;
  bool bVar5;
  wchar_t wVar6;
  DWORD DVar7;
  FThreadHeartBeat *pFVar8;
  void *pvVar9;
  char *_Str;
  HANDLE pvVar10;
  size_t sVar11;
  int iVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  wchar_t *pwVar16;
  ECrashContextType EVar17;
  uint uVar18;
  void *pvVar19;
  undefined1 auStackY_21f8 [32];
  FGenericCrashContext local_21c8;
  FScriptContainerElement local_2158 [256];
  ForAnyElementType local_2058;
  FScriptContainerElement *local_2050;
  int local_2048;
  wchar_t local_2038 [4096];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x141ab0cfa;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_21f8;
  pFVar8 = FThreadHeartBeat::Get();
  (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FCoreDelegates::OnHandleSystemError);
  pwVar16 = GErrorExceptionDescription;
  EVar17 = Crash;
  p_Var2 = this->ExceptionInfo->ExceptionRecord;
  uVar1 = p_Var2->ExceptionCode;
  pvVar19 = p_Var2->ExceptionAddress;
  if (uVar1 == 0x4000) {
    if (p_Var2->NumberParameters == 1) {
      EVar17 = Assert;
      pwVar13 = *(wchar_t **)p_Var2->ExceptionInformation[0];
      pvVar19 = (void *)((undefined8 *)p_Var2->ExceptionInformation[0])[1];
      goto LAB_141ab0def;
    }
  }
  else if (uVar1 == 0x8000) {
    if (p_Var2->NumberParameters == 1) {
      EVar17 = GPUCrash;
      pwVar13 = *(wchar_t **)p_Var2->ExceptionInformation[0];
      pvVar19 = (void *)((undefined8 *)p_Var2->ExceptionInformation[0])[1];
      goto LAB_141ab0def;
    }
  }
  else {
    if (uVar1 == 0xbdb30) {
      EVar17 = Ensure;
      pwVar13 = *(wchar_t **)p_Var2->ExceptionInformation[0];
      pvVar19 = (void *)((undefined8 *)p_Var2->ExceptionInformation[0])[1];
      goto LAB_141ab0def;
    }
    if (uVar1 == 0xc000) {
      EVar17 = OutOfMemory;
      pwVar13 = *(wchar_t **)p_Var2->ExceptionInformation[0];
      pvVar19 = (void *)((undefined8 *)p_Var2->ExceptionInformation[0])[1];
      goto LAB_141ab0def;
    }
  }
  CreateExceptionInfoString(p_Var2,local_2038,0x1000);
  pwVar13 = local_2038;
  wcsncpy(GErrorExceptionDescription,local_2038,0xfff);
  GErrorExceptionDescription[0xfff] = L'\0';
LAB_141ab0def:
  FGenericCrashContext::FGenericCrashContext(&local_21c8,EVar17,pwVar13);
  local_21c8._padding_ = (longlong)&___7FWindowsPlatformCrashContext__6B_;
  pvVar9 = FWindowsPlatformStackWalk::MakeThreadContextWrapper
                     (this->ExceptionInfo->ContextRecord,this->CrashingThreadHandle);
  local_21c8.ProcessHandle = (FProcHandle)GetCurrentProcess();
  local_21c8.CrashedThreadId = this->CrashingThreadId;
  FMicrosoftPlatformCrashContext::CaptureAllThreadContexts
            ((FMicrosoftPlatformCrashContext *)&local_21c8);
  FGenericCrashContext::CapturePortableCallStack(&local_21c8,pvVar19,pvVar9);
  if (GUseCrashReportClient == false) {
    FGenericCrashContext::SerializeContentToBuffer(&local_21c8);
    p_Var3 = this->ExceptionInfo;
    DVar7 = GetCurrentThreadId();
    pvVar10 = GetCurrentProcess();
    ::`anonymous_namespace'::WriteMinidump
              (pvVar10,DVar7,(FWindowsPlatformCrashContext *)&local_21c8,MiniDumpFilenameW,p_Var3);
  }
  else {
    ::`anonymous_namespace'::ReportCrashUsingCrashReportClient
              ((FWindowsPlatformCrashContext *)&local_21c8,this->ExceptionInfo,ShowDialog);
  }
  local_21c8._padding_ = (longlong)&___7FGenericCrashContext__6B_;
  if (local_21c8.CommonBuffer.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_21c8.CommonBuffer.Data.AllocatorInstance.Data);
  }
  if (local_21c8.ModulesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_21c8.ModulesInfo.AllocatorInstance.Data);
  }
  DestructItems<FThreadStackFrames,int>
            ((FThreadStackFrames *)local_21c8.ThreadCallStacks.AllocatorInstance.Data,
             local_21c8.ThreadCallStacks.ArrayNum);
  if ((FThreadStackFrames *)local_21c8.ThreadCallStacks.AllocatorInstance.Data !=
      (FThreadStackFrames *)0x0) {
    FMemory::Free(local_21c8.ThreadCallStacks.AllocatorInstance.Data);
  }
  DestructItems<FCrashStackFrame,int>
            ((FCrashStackFrame *)local_21c8.CallStack.AllocatorInstance.Data,
             local_21c8.CallStack.ArrayNum);
  if ((FCrashStackFrame *)local_21c8.CallStack.AllocatorInstance.Data != (FCrashStackFrame *)0x0) {
    FMemory::Free(local_21c8.CallStack.AllocatorInstance.Data);
  }
  _Str = (char *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))
                           (UE::Private::GMalloc,0xffff,0);
  *_Str = '\0';
  if (pvVar9 == (void *)0x0) {
    pvVar9 = FWindowsPlatformStackWalk::MakeThreadContextWrapper
                       (this->ExceptionInfo->ContextRecord,this->CrashingThreadHandle);
  }
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar10 = GetCurrentProcess();
  FWindowsPlatformStackWalk::InitStackWalkingInternal(pvVar10,false);
  FGenericPlatformStackWalk::StackWalkAndDump(_Str,0xffff,pvVar19,pvVar9);
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  p_Var2 = this->ExceptionInfo->ExceptionRecord;
  uVar1 = p_Var2->ExceptionCode;
  if ((uVar1 != 0xbdb30) && (uVar1 != 0x4000)) {
    CreateExceptionInfoString(p_Var2,GErrorExceptionDescription,0x1000);
    wVar6 = GErrorExceptionDescription[0];
    if (GErrorExceptionDescription[0] != L'\0') {
      sVar11 = wcslen(GErrorHist);
      iVar12 = (int)sVar11 + 1;
      if (iVar12 < 0x4000) {
        pwVar13 = GErrorHist + (int)sVar11;
        do {
          *pwVar13 = wVar6;
          pwVar16 = pwVar16 + 1;
          wVar6 = *pwVar16;
          pwVar13 = pwVar13 + 1;
          iVar12 = iVar12 + 1;
          if (wVar6 == L'\0') break;
        } while (iVar12 < 0x4000);
        *pwVar13 = L'\0';
      }
    }
    pwVar16 = L"\r\n\r\n";
    sVar11 = wcslen(GErrorHist);
    iVar12 = (int)sVar11 + 1;
    if (iVar12 < 0x4000) {
      pwVar13 = GErrorHist + (int)sVar11;
      wVar6 = L'\r';
      do {
        *pwVar13 = wVar6;
        pwVar16 = pwVar16 + 1;
        wVar6 = *pwVar16;
        pwVar13 = pwVar13 + 1;
        iVar12 = iVar12 + 1;
        if (wVar6 == L'\0') break;
      } while (iVar12 < 0x4000);
      *pwVar13 = L'\0';
    }
  }
  local_2058.Data = (FScriptContainerElement *)0x0;
  sVar11 = strlen(_Str);
  local_2048 = (int)sVar11;
  uVar18 = local_2048 + 1;
  FVar14.Data = (FScriptContainerElement *)0x0;
  if (0x80 < uVar18) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2058,0,uVar18,2);
    FVar14.Data = local_2058.Data;
  }
  local_2050 = local_2158;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    local_2050 = FVar14.Data;
  }
  pwVar16 = FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2050,uVar18,_Str,uVar18);
  if ((pwVar16 == (wchar_t *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar15 = local_2050;
  wVar6 = *(wchar_t *)local_2050;
  if (wVar6 != L'\0') {
    sVar11 = wcslen(GErrorHist);
    iVar12 = (int)sVar11 + 1;
    if (iVar12 < 0x4000) {
      pwVar16 = GErrorHist + (int)sVar11;
      do {
        *pwVar16 = wVar6;
        pFVar15 = pFVar15 + 2;
        wVar6 = *(wchar_t *)pFVar15;
        pwVar16 = pwVar16 + 1;
        iVar12 = iVar12 + 1;
        if (wVar6 == L'\0') break;
      } while (iVar12 < 0x4000);
      *pwVar16 = L'\0';
    }
  }
  if (local_2058.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2058.Data);
  }
  (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,_Str);
  if (pvVar9 != (void *)0x0) {
    ::operator_delete(pvVar9,0x4f0);
  }
  FWindowsPlatformStackWalk::UploadLocalSymbols();
  return;
}

// RegisterAbortSignalHandler @ 141abbfc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCrashReportingThread::RegisterAbortSignalHandler(FCrashReportingThread *this)

{
  longlong extraout_RAX;
  
  signal(0x16);
  if (extraout_RAX == -1) {
    if (1 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FCrashReportingThread::RegisterAbortSignalHandler(void)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogWindows);
      return;
    }
  }
  else if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FCrashReportingThread::RegisterAbortSignalHandler(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogWindows);
    return;
  }
  return;
}

// RegisterUnhandledExceptionHandler @ 141abc060

void __thiscall
FCrashReportingThread::RegisterUnhandledExceptionHandler(FCrashReportingThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141abc067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(EngineUnhandledExceptionFilter);
  return;
}

// Run @ 141abf340

uint __thiscall FCrashReportingThread::Run(FCrashReportingThread *this)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  int local_res10 [2];
  
  bVar1 = false;
  while( true ) {
    if (bVar1) {
      return 0;
    }
    DVar3 = WaitForMultipleObjects(2,this->InputEvents,0,500);
    if (DVar3 == 0) break;
    if (DVar3 == 1) {
      bVar1 = true;
    }
    if ((this->CrashClientHandle != (FProcHandle)0x0) &&
       (bVar2 = FWindowsPlatformProcess::IsProcRunning(&this->CrashClientHandle), !bVar2)) {
      local_res10[0] = 0;
      bVar2 = FWindowsPlatformProcess::GetProcReturnCode(&this->CrashClientHandle,local_res10);
      if (bVar2) {
        FGenericCrashContext::SetOutOfProcessCrashReporterExitCode(local_res10[0]);
        FWindowsPlatformProcess::CloseProc(&this->CrashClientHandle);
        this->CrashClientHandle = (FProcHandle)0x0;
      }
    }
  }
  ResetEvent(this->CrashHandledEvent);
  HandleCrashInternal(this);
  ResetEvent(this->InputEvents[0]);
  SetEvent(this->CrashHandledEvent);
  return 0;
}

