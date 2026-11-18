// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FRunnableThread @ 1416d6890

FRunnableThread * __thiscall FRunnableThread::FRunnableThread(FRunnableThread *this)

{
  this->ThreadAffinityMask = 0xffffffffffffffff;
  this->_padding_ = (longlong)&___7FRunnableThread__6B_;
  (this->ThreadName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadName).Data.ArrayNum = 0;
  (this->ThreadName).Data.ArrayMax = 0;
  this->Runnable = (FRunnable *)0x0;
  this->ThreadInitSyncEvent = (FEvent *)0x0;
  this->ThreadPriority = TPri_Normal;
  this->ThreadID = 0;
  return this;
}

// ~FRunnableThread @ 1416d9350

void __thiscall FRunnableThread::~FRunnableThread(FRunnableThread *this)

{
  FScriptContainerElement *pFVar1;
  FThreadManager *this_00;
  
  this->_padding_ = (longlong)&___7FRunnableThread__6B_;
  if (GIsRequestingExit == false) {
    this_00 = FThreadManager::Get();
    FThreadManager::RemoveThread(this_00,this);
  }
  pFVar1 = (this->ThreadName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Create @ 1416e6f20

FRunnableThread * __cdecl
FRunnableThread::Create
          (FRunnable *param_1,wchar_t *param_2,uint param_3,EThreadPriority param_4,ulong64 param_5,
          EThreadCreateFlags param_6)

{
  code *pcVar1;
  bool bVar2;
  FRunnableThread *pFVar3;
  FFakeThread *pFVar4;
  longlong lVar5;
  FFakeThread *this;
  FFakeThread *local_18 [2];
  
  local_18[0] = (FFakeThread *)0x0;
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar2) {
    if ((param_1 == (FRunnable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InRunnable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                           ,0x36c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRunnableThread *)(*pcVar1)();
      return pFVar3;
    }
    pFVar4 = (FFakeThread *)FWindowsPlatformProcess::CreateRunnableThread();
  }
  else {
    lVar5 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
    if (lVar5 == 0) {
      return (FRunnableThread *)0x0;
    }
    this = ::operator_new(0x48);
    pFVar4 = (FFakeThread *)0x0;
    if (this != (FFakeThread *)0x0) {
      pFVar4 = FFakeThread::FFakeThread(this);
    }
  }
  local_18[0] = pFVar4;
  if (local_18[0] != (FFakeThread *)0x0) {
    SetupCreatedThread((FRunnableThread **)local_18,param_1,param_2,param_3,param_4,param_5,param_6)
    ;
  }
  return (FRunnableThread *)local_18[0];
}

// FreeTls @ 1416f0f30

void __thiscall FRunnableThread::FreeTls(FRunnableThread *this)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  
  DVar3 = GetCurrentThreadId();
  if (this->ThreadID != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ThreadID == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x3a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (RunnableTlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(RunnableTlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x3a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001416f0fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(RunnableTlsSlot,(LPVOID)0x0);
  return;
}

// GetThreadType @ 1416fbcd0

ThreadType __thiscall FRunnableThread::GetThreadType(FRunnableThread *this)

{
  return Real;
}

// GetTlsSlot @ 1416fc550

uint __cdecl FRunnableThread::GetTlsSlot(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x347,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  DVar4 = TlsAlloc();
  if ((DVar4 == 0xffffffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot( TlsSlot )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x349,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return DVar4;
}

// OnPostFork @ 141706290

void __thiscall FRunnableThread::OnPostFork(FRunnableThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\RunnableThread.h"
                     ,0xd4,L"Only forkable threads should receive OnPostFork.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnPreFork @ 141706400

void __thiscall FRunnableThread::OnPreFork(FRunnableThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\RunnableThread.h"
                     ,0xcc,L"Only forkable threads should receive OnPreFork.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PostCreate @ 141708520

void __thiscall FRunnableThread::PostCreate(FRunnableThread *this,EThreadPriority param_1)

{
  uint uVar1;
  FStartupMessages *this_00;
  FName *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  
  this_00 = FStartupMessages::Get();
  uVar1 = this->ThreadID;
  if ((this->ThreadName).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->ThreadName).Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,pwVar3);
  FStartupMessages::AddThreadMetadata(this_00,*pFVar2,uVar1);
  return;
}

// SetThreadAffinity @ 141712190

bool __thiscall FRunnableThread::SetThreadAffinity(FRunnableThread *this,FThreadAffinity *param_1)

{
  return false;
}

// SetTls @ 1417123b0

void __thiscall FRunnableThread::SetTls(FRunnableThread *this)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  
  DVar3 = GetCurrentThreadId();
  if (this->ThreadID != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ThreadID == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x39b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (RunnableTlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(RunnableTlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x39c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TlsSetValue(RunnableTlsSlot,this);
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9f0) = 0;
  return;
}

// SetupCreatedThread @ 141712720

void __cdecl
FRunnableThread::SetupCreatedThread
          (FRunnableThread **param_1,FRunnable *param_2,wchar_t *param_3,uint param_4,
          EThreadPriority param_5,ulong64 param_6,EThreadCreateFlags param_7)

{
  uint uVar1;
  FRunnableThread *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FStartupMessages *this;
  FName *pFVar6;
  wchar_t *pwVar7;
  FName local_res8;
  
  cVar4 = (**(code **)((*param_1)->_padding_ + 0x38))();
  pFVar2 = *param_1;
  if (cVar4 == '\0') {
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
    *param_1 = (FRunnableThread *)0x0;
    return;
  }
  pwVar7 = L"";
  if (pFVar2->Runnable == (FRunnable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewThread->Runnable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                       ,0x385,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *param_1;
  this = FStartupMessages::Get();
  uVar1 = pFVar2->ThreadID;
  if ((pFVar2->ThreadName).Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar2->ThreadName).Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,pwVar7);
  FStartupMessages::AddThreadMetadata(this,*pFVar6,uVar1);
  return;
}

// Tick @ 1417151d0

void __thiscall FRunnableThread::Tick(FRunnableThread *this)

{
  return;
}

