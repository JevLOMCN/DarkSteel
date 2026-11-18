// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// Destruct @ 145c99540

void __cdecl
UE::Core::Private::
TDestructorCaller<`FRHICommandListExecutor::FTaskPipe::Execute'::__l2::FParallelThreadScope>::
Destruct(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulong uVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  
  uVar3 = _tls_index;
  if (((*(char *)((longlong)param_1 + 8) == '\0') &&
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9f0) != *(int *)((longlong)param_1 + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TagOnlyIfNone || ActiveTaskTag == Tag",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x95,L"ActiveTaskTag(%x) corrupted needs to be Tag(%x)"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((*(char *)((longlong)param_1 + 8) == '\0') || (*(int *)param_1 == 0)) ||
     (*(int *)param_1 == 0x60000000)) {
    *(undefined4 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar3 * 8) + 0x9f0) =
         *(undefined4 *)param_1;
  }
  if ((*(uint *)((longlong)param_1 + 4) >> 0x1e & 1) == 0) {
    uVar7 = *(uint *)((longlong)param_1 + 4) & 0xff;
    aVar6 = ActiveNamedThreads;
    do {
      LOCK();
      bVar5 = aVar6 != ActiveNamedThreads;
      aVar4 = (atomic<int>)((uint)aVar6 & ~uVar7);
      if (bVar5) {
        aVar6 = ActiveNamedThreads;
        aVar4 = ActiveNamedThreads;
      }
      ActiveNamedThreads = aVar4;
      UNLOCK();
    } while (bVar5);
    if ((((uVar7 & (uint)aVar6) != uVar7) && (GIsRequestingExit == false)) &&
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
  if ((*(int *)((longlong)param_1 + 4) == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar3 * 8),
     *(int *)(lVar1 + 0x9f0) == 1)) {
    *(undefined4 *)(lVar1 + 0x9f0) = 2;
  }
  return;
}

// Destruct @ 145c99550

void __cdecl
UE::Core::Private::
TDestructorCaller<`FRHICommandListExecutor::FTaskPipe::Execute'::__l2::FRHIThreadScope>::Destruct
          (void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x19) != '\0') {
    FScopedRHIThreadOwnership::~FScopedRHIThreadOwnership
              ((FScopedRHIThreadOwnership *)((longlong)param_1 + 0x18));
  }
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    FTaskTagScope::~FTaskTagScope((FTaskTagScope *)((longlong)param_1 + 8));
  }
  if (*(LPCRITICAL_SECTION *)param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)param_1);
    *(undefined8 *)param_1 = 0;
  }
  return;
}

