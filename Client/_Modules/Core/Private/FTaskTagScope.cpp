// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FTaskTagScope @ 1416d6b30

FTaskTagScope * __thiscall FTaskTagScope::FTaskTagScope(FTaskTagScope *this,ETaskTag param_1)

{
  code *pcVar1;
  void *pvVar2;
  atomic<int> aVar3;
  char cVar4;
  bool bVar5;
  atomic<int> aVar6;
  DWORD DVar7;
  FTaskTagScope *pFVar8;
  HMODULE pHVar9;
  ETaskTag EVar10;
  ulonglong uVar11;
  ETaskTag *pEVar12;
  char local_res8 [8];
  char local_res10 [8];
  undefined1 local_res18 [8];
  char *local_28;
  char *local_20;
  
  this->Tag = param_1;
  if ((param_1 == ENone) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tag != ETaskTag::ENone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x56,L"None cannot be used as a Tag"), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FTaskTagScope *)(*pcVar1)();
    return pFVar8;
  }
  if ((this->Tag == EParallelThread) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tag != ETaskTag::EParallelThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x57,L"Parallel cannot be used on it\'s own"), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FTaskTagScope *)(*pcVar1)();
    return pFVar8;
  }
  pvVar2 = ThreadLocalStoragePointer;
  uVar11 = (ulonglong)_tls_index;
  this->TagOnlyIfNone = true;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar11 * 8) + 0x9f0) == 1) {
    bVar5 = this->Tag != EGameThread;
    this->TagOnlyIfNone = bVar5;
    if ((bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tag == ETaskTag::EGameThread",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                           ,0x5f,
                           L"The Gamethread can only be tagged on the inital thread of the application"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FTaskTagScope *)(*pcVar1)();
      return pFVar8;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pHVar9 = GetModuleHandleW(L"renderdoc.dll");
      bRenderDocDetected = pHVar9 != (HMODULE)0x0;
      _Init_thread_footer(&::_TSS0);
    }
    if ((bRenderDocDetected == false) && (bVar5 = IsRunningDuringStaticInit(), !bVar5)) {
      local_res18[0] = bVar5;
      `FTaskTagScope::FTaskTagScope'::__l35::<lambda_1>::operator()(local_res18);
    }
  }
  if ((this->Tag >> 0x1e & 1) == 0) {
    EVar10 = this->Tag & ENamedThreadBits;
    aVar6 = ActiveNamedThreads;
    do {
      LOCK();
      bVar5 = aVar6 != ActiveNamedThreads;
      aVar3 = (atomic<int>)((uint)aVar6 | EVar10);
      if (bVar5) {
        aVar6 = ActiveNamedThreads;
        aVar3 = ActiveNamedThreads;
      }
      ActiveNamedThreads = aVar3;
      UNLOCK();
    } while (bVar5);
    if (((uint)aVar6 & EVar10) != ENone) {
      LOCK();
      ActiveNamedThreads = (atomic<int>)0x0;
      UNLOCK();
      if ((GIsRequestingExit == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsOK || IsEngineExitRequested()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                             ,0x7d,
                             L"Only Scopes tagged with ETaskTag::EParallelThread can be tagged multiple times. ActiveNamedThreads(%x) cannot be tagged multiple times in the same callstack with the current Tag(%x)"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FTaskTagScope *)(*pcVar1)();
        return pFVar8;
      }
    }
  }
  pEVar12 = (ETaskTag *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9f0);
  this->ParentTag = *pEVar12;
  if (((this->TagOnlyIfNone == false) || (EVar10 = *pEVar12, EVar10 == ENone)) ||
     (EVar10 == EWorkerThread)) {
    *pEVar12 = this->Tag;
  }
  else if (EVar10 != this->Tag) {
    if ((this->Tag & EParallelRenderingThread) == EParallelRenderingThread) {
      if (GRenderThreadId == 0) {
        if (((EVar10 == EGameThread) || (EVar10 == ERenderingThread)) ||
           (bVar5 = IsRunningDuringStaticInit(), local_res10[0] = false, bVar5)) {
          local_res10[0] = true;
        }
      }
      else {
        local_res10[0] = EVar10 == ERenderingThread;
      }
      bVar5 = UE::Tasks::Private::IsThreadRetractingTask();
      cVar4 = local_res10[0];
      if (!bVar5) {
        DVar7 = GetCurrentThreadId();
        if (GRenderThreadId == 0) {
          if ((DVar7 == GGameThreadId) ||
             (bVar5 = IsRunningDuringStaticInit(), local_res8[0] = false, bVar5)) {
            local_res8[0] = true;
          }
        }
        else {
          local_res8[0] = DVar7 == GRenderThreadId;
        }
        cVar4 = (bool)local_res8[0];
        if (local_res8[0] != local_res10[0]) {
          local_28 = local_res8;
          local_20 = local_res10;
          `IsInRenderingThread'::__l5::<lambda_1>::operator()(&local_28);
          cVar4 = local_res8[0];
        }
      }
      local_res10[0] = cVar4;
      if ((local_res10[0] == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                             ,0x89,
                             L"ETaskTag::EParallelRenderingThread can only be retagged if they are in a parallel for on the RenderingThread or not tagged check the ActiveNamedThreads(%x)"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FTaskTagScope *)(*pcVar1)();
        return pFVar8;
      }
    }
    if ((((this->Tag & EParallelGameThread) == EParallelGameThread) &&
        (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                           ,0x8e,
                           L"ETaskTag::EParallelGameThread can only be retagged if they are in a parallel for on the GameThread or not tagged check the ActiveNamedThreads(%x)"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FTaskTagScope *)(*pcVar1)();
      return pFVar8;
    }
  }
  return this;
}

// ~FTaskTagScope @ 1416d9470

void __thiscall FTaskTagScope::~FTaskTagScope(FTaskTagScope *this)

{
  longlong lVar1;
  code *pcVar2;
  ulong uVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  ETaskTag EVar7;
  
  uVar3 = _tls_index;
  if (((this->TagOnlyIfNone == false) &&
      (*(ETaskTag *)
        (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9f0) !=
       this->Tag)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TagOnlyIfNone || ActiveTaskTag == Tag",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x95,L"ActiveTaskTag(%x) corrupted needs to be Tag(%x)"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->TagOnlyIfNone == false) || (this->ParentTag == ENone)) ||
     (this->ParentTag == EWorkerThread)) {
    *(ETaskTag *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar3 * 8) + 0x9f0)
         = this->ParentTag;
  }
  if ((this->Tag >> 0x1e & 1) == 0) {
    EVar7 = this->Tag & ENamedThreadBits;
    aVar6 = ActiveNamedThreads;
    do {
      LOCK();
      bVar5 = aVar6 != ActiveNamedThreads;
      aVar4 = (atomic<int>)((uint)aVar6 & ~EVar7);
      if (bVar5) {
        aVar6 = ActiveNamedThreads;
        aVar4 = ActiveNamedThreads;
      }
      ActiveNamedThreads = aVar4;
      UNLOCK();
    } while (bVar5);
    if ((((EVar7 & (uint)aVar6) != EVar7) && (GIsRequestingExit == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldTag & NamedThreadBits) == (NamedThreadBits) || IsEngineExitRequested()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                           ,0xa0,
                           L"Currently active Threads(%x) got corrupted check the ActiveNamedThreads(%x)"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Tag == EGameThread) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar3 * 8),
     *(int *)(lVar1 + 0x9f0) == 1)) {
    *(undefined4 *)(lVar1 + 0x9f0) = 2;
  }
  return;
}

// GetCurrentTag @ 1416f6190

ETaskTag __cdecl FTaskTagScope::GetCurrentTag(void)

{
  return *(ETaskTag *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9f0);
}

// GetStaticThreadId @ 1416fb9e0

int __cdecl FTaskTagScope::GetStaticThreadId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ThreadID = GetCurrentThreadId();
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ThreadID;
}

// IsCurrentTag @ 1417019d0

bool __cdecl FTaskTagScope::IsCurrentTag(ETaskTag param_1)

{
  return *(ETaskTag *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9f0)
         == param_1;
}

// IsRunningDuringStaticInit @ 141702990

bool __cdecl FTaskTagScope::IsRunningDuringStaticInit(void)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9f0) == 1) {
    if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ThreadID = GetCurrentThreadId();
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar2 = ThreadID;
    DVar3 = GetCurrentThreadId();
    if (iVar2 == DVar3) {
      return true;
    }
  }
  return false;
}

// SetTagNone @ 141712110

void __cdecl FTaskTagScope::SetTagNone(void)

{
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9f0) = 0;
  return;
}

// SetTagStaticInit @ 141712140

void __cdecl FTaskTagScope::SetTagStaticInit(void)

{
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9f0) = 1;
  return;
}

// SwapTag @ 1417145a0

ETaskTag __cdecl FTaskTagScope::SwapTag(ETaskTag param_1)

{
  ETaskTag EVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  EVar1 = *(ETaskTag *)(lVar2 + 0x9f0);
  *(ETaskTag *)(lVar2 + 0x9f0) = param_1;
  return EVar1;
}

// operator() @ 15047af50

bool __thiscall `FTaskTagScope::FTaskTagScope'::__l35::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7867358571250319469>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7867358571250319469>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

