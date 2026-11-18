// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// Get @ 145ca7350

FQueuedThreadPool * __thiscall FPSOPrecacheThreadPool::Get(FPSOPrecacheThreadPool *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FQueuedThreadPool *pFVar5;
  atomic<FQueuedThreadPool_*> aVar6;
  
  if (this->PSOPrecompileCompileThreadPool == (atomic<FQueuedThreadPool_*>)0x0) {
    if (this == (FPSOPrecacheThreadPool *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if (this->PSOPrecompileCompileThreadPool == (atomic<FQueuedThreadPool_*>)0x0) {
      iVar3 = GetDesiredPoolSize();
      if (iVar3 < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsePool()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x1be,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FQueuedThreadPool *)(*pcVar1)();
          return pFVar5;
        }
      }
      aVar6 = (atomic<FQueuedThreadPool_*>)FQueuedThreadPool::Allocate();
      iVar3 = GPSOPrecompileThreadPoolThreadPriority;
      pcVar1 = *(code **)*(FQueuedThreadPool *)aVar6;
      iVar4 = GetDesiredPoolSize();
      (*pcVar1)(aVar6,iVar4,0x80000,iVar3,L"PSOPrecompilePool");
      LOCK();
      this->PSOPrecompileCompileThreadPool = aVar6;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return (FQueuedThreadPool *)this->PSOPrecompileCompileThreadPool;
}

// GetDesiredPoolSize @ 145ca8f50

int __cdecl FPSOPrecacheThreadPool::GetDesiredPoolSize(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (GPSOPrecompileThreadPoolSize < 1) {
    if (0 < GPSOPrecompileThreadPoolPercentOfHardwareThreads) {
      iVar3 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      iVar4 = -((int)ROUND(__real_bf000000 -
                           (float)GPSOPrecompileThreadPoolPercentOfHardwareThreads * (float)iVar3 *
                           __real_3ca3d70a) >> 1);
      iVar3 = GPSOPrecompileThreadPoolSizeMax;
      if (iVar4 < GPSOPrecompileThreadPoolSizeMax) {
        iVar3 = iVar4;
      }
      iVar4 = GPSOPrecompileThreadPoolSizeMin;
      if (GPSOPrecompileThreadPoolSizeMin < iVar3) {
        iVar4 = iVar3;
      }
      return iVar4;
    }
    return 0;
  }
  if (GPSOPrecompileThreadPoolPercentOfHardwareThreads != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4687553501859938775>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x1d7,"GPSOPrecompileThreadPoolPercentOfHardwareThreads == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return GPSOPrecompileThreadPoolSize;
}

