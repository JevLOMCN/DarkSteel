// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Run @ 145e230f0

uint __thiscall FRHIThread::Run(FRHIThread *this)

{
  atomic<unsigned_int> aVar1;
  FCsvProfiler *pFVar2;
  FTaskGraphInterface *pFVar3;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FTaskTagScope local_18;
  
  FLLMScope::FLLMScope(local_res10,RHIMisc,false,None,Default,true);
  FMemScope::FMemScope(local_res18,RHIMisc,true);
  pFVar2 = FCsvProfiler::Get();
  aVar1 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  pFVar2->RHIThreadId = aVar1;
  UNLOCK();
  FTaskTagScope::FTaskTagScope(&local_18,ERhiThread);
  FMemory::SetupTLSCachesOnCurrentThread();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"RHIAcquireThreadOwnership");
  if (CpuChannel->Enabled < 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x2f0))();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_FScopedRHIThreadOwnership::FScopedRHIThreadOwnership(bool)___ptr64'
                ::__l5::__CpuProfilerEventSpecId1509,"RHIAcquireThreadOwnership",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h",
               0x5e5);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_FScopedRHIThreadOwnership::FScopedRHIThreadOwnership(bool)___ptr64'
               ::__l5::__CpuProfilerEventSpecId1509);
    (**(code **)(GDynamicRHI->_padding_ + 0x2f0))();
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  pFVar3 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar3 + 0x40))(pFVar3,0);
  pFVar3 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar3 + 0x50))(pFVar3,0);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"RHIReleaseThreadOwnership");
  if (CpuChannel->Enabled < 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x2f8))();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_FScopedRHIThreadOwnership::~FScopedRHIThreadOwnership(void)___ptr64'
                ::__l5::__CpuProfilerEventSpecId1518,"RHIReleaseThreadOwnership",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h",
               0x5ee);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_FScopedRHIThreadOwnership::~FScopedRHIThreadOwnership(void)___ptr64'
               ::__l5::__CpuProfilerEventSpecId1518);
    (**(code **)(GDynamicRHI->_padding_ + 0x2f8))();
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  FTaskTagScope::~FTaskTagScope(&local_18);
  pFVar2 = FCsvProfiler::Get();
  LOCK();
  pFVar2->RHIThreadId = (atomic<unsigned_int>)0x0;
  UNLOCK();
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return 0;
}

