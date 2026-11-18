// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// CreateForkableThread @ 1416e81e0

FRunnableThread * __cdecl
FForkProcessHelper::CreateForkableThread
          (FRunnable *param_1,wchar_t *param_2,uint param_3,EThreadPriority param_4,ulong64 param_5,
          EThreadCreateFlags param_6,bool param_7)

{
  code *pcVar1;
  FForkableThread *pFVar2;
  bool bVar3;
  bool bVar4;
  FForkableThread *pFVar5;
  longlong lVar6;
  FForkableThread *pFVar7;
  FRunnableThread *pFVar8;
  FFakeThread *this;
  FForkableThread *local_28 [2];
  
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar3) || (bVar4 = SupportsMultithreadingPostFork(), !bVar4)) {
    pFVar7 = (FForkableThread *)0x0;
    local_28[0] = (FForkableThread *)0x0;
    if (!bVar3) {
      lVar6 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
      if (lVar6 == 0) {
        return (FRunnableThread *)0x0;
      }
      this = ::operator_new(0x48);
      pFVar2 = pFVar7;
      if (this != (FFakeThread *)0x0) {
        pFVar7 = (FForkableThread *)FFakeThread::FFakeThread(this);
        pFVar2 = pFVar7;
      }
      goto LAB_1416e8323;
    }
  }
  else {
    bVar3 = IsForkedMultithreadInstance();
    if (!bVar3) {
      pFVar7 = (FForkableThread *)0x0;
      local_28[0] = (FForkableThread *)0x0;
      if (param_7) {
        pFVar5 = ::operator_new(0x60);
        pFVar2 = pFVar7;
        if (pFVar5 != (FForkableThread *)0x0) {
          FFakeThread::FFakeThread((FFakeThread *)pFVar5);
          pFVar5->RealThread = (FRunnableThread *)0x0;
          pFVar5->CachedPriority = TPri_Normal;
          pFVar5->CachedStackSize = 0;
          pFVar5->_padding_ = (longlong)&___7FForkableThread__6B_;
          pFVar5->bAllowPreForkRealThread = true;
          pFVar7 = pFVar5;
          pFVar2 = pFVar5;
        }
      }
      else {
        lVar6 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
        pFVar2 = local_28[0];
        if ((lVar6 != 0) &&
           (pFVar5 = ::operator_new(0x60), pFVar2 = pFVar7, pFVar5 != (FForkableThread *)0x0)) {
          pFVar7 = FForkableThread::FForkableThread(pFVar5,false);
          pFVar2 = pFVar7;
        }
      }
      goto LAB_1416e8323;
    }
  }
  if ((param_1 == (FRunnable *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRunnable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x6cb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FRunnableThread *)(*pcVar1)();
    return pFVar8;
  }
  pFVar7 = (FForkableThread *)FWindowsPlatformProcess::CreateRunnableThread();
  pFVar2 = pFVar7;
LAB_1416e8323:
  local_28[0] = pFVar2;
  if (pFVar7 == (FForkableThread *)0x0) {
    return (FRunnableThread *)0x0;
  }
  FRunnableThread::SetupCreatedThread
            ((FRunnableThread **)local_28,param_1,param_2,param_3,param_4,param_5,param_6);
  return (FRunnableThread *)local_28[0];
}

// GetForkedChildProcessIndex @ 1418df4a0

ushort __cdecl FForkProcessHelper::GetForkedChildProcessIndex(void)

{
  return ForkInternal::ChildProcessIndex;
}

// IsForkRequested @ 1418e3100

bool __cdecl FForkProcessHelper::IsForkRequested(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      bVar1 = FCommandLine::IsInitialized();
      if (bVar1) {
        pwVar2 = FCommandLine::Get();
      }
      else {
        pwVar2 = L"";
      }
      bRealForkRequested = FParse::Param(pwVar2,L"WaitAndFork");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bRealForkRequested != false;
}

// IsForkedChildProcess @ 1418e3190

bool __cdecl FForkProcessHelper::IsForkedChildProcess(void)

{
  return ForkInternal::bIsForkedChildProcess;
}

// IsForkedMultithreadInstance @ 1418e31a0

bool __cdecl FForkProcessHelper::IsForkedMultithreadInstance(void)

{
  return ForkInternal::bIsForkedMultithreadInstance;
}

// LowLevelPostForkChild @ 1418e77d0

void __cdecl FForkProcessHelper::LowLevelPostForkChild(ushort param_1)

{
  ForkInternal::bIsForkedChildProcess = true;
                    /* WARNING: Could not recover jumptable at 0x0001418e77e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ForkInternal::ChildProcessIndex = param_1;
  (**(code **)((longlong)*UE::Private::GMalloc + 0xe0))();
  return;
}

// LowLevelPostForkParent @ 1418e7800

void __cdecl FForkProcessHelper::LowLevelPostForkParent(void)

{
  return;
}

// LowLevelPreFork @ 1418e7810

void __cdecl FForkProcessHelper::LowLevelPreFork(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001418e781a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*UE::Private::GMalloc + 0xd8))();
  return;
}

// OnForkingOccured @ 1418e97c0

void __cdecl FForkProcessHelper::OnForkingOccured(void)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  char cVar3;
  FThreadManager *this;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res8 [8];
  TArray<FRunnableThread_*,TSizedDefaultAllocator<32>_> local_18;
  
  bVar2 = SupportsMultithreadingPostFork();
  if (bVar2) {
    cVar3 = (**(code **)((longlong)*UE::Private::GMalloc + 0xb8))();
    if (cVar3 == '\0') {
      `FForkProcessHelper::OnForkingOccured'::__l5::<lambda_1>::operator()(local_res8);
    }
    ForkInternal::bIsForkedMultithreadInstance = true;
    this = FThreadManager::Get();
    FThreadManager::GetForkableThreads(this,&local_18);
    iVar4 = local_18.ArrayNum;
    pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar4 * 8;
    FVar5.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if (local_18.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FRunnableThread_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar5.Data == pFVar1) break;
      (**(code **)(**(longlong **)FVar5.Data + 0x50))();
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetIsForkedChildProcess @ 1418f8f00

void __cdecl FForkProcessHelper::SetIsForkedChildProcess(ushort param_1)

{
  ForkInternal::bIsForkedChildProcess = true;
  ForkInternal::ChildProcessIndex = param_1;
  return;
}

// SupportsMultithreadingPostFork @ 1418f9e90

bool __cdecl FForkProcessHelper::SupportsMultithreadingPostFork(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = FCommandLine::IsInitialized();
  if (!bVar1) {
    return false;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bSupportsMT = FParse::Param(pwVar2,L"PostForkThreading");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bSupportsMT;
}

// operator() @ 15047e5a0

bool __thiscall `FForkProcessHelper::OnForkingOccured'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8733592348878962598>);
  if (bVar2) {
    (**(code **)((longlong)*UE::Private::GMalloc + 200))();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8733592348878962598>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

