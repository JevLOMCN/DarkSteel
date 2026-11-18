// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DoWork @ 141b3e830

void __thiscall AsyncWorkTestImpl::FOuterTask::DoWork(FOuterTask *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ForAnyElementType local_18;
  int local_10 [2];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_AsyncWorkTestImpl::FOuterTask::DoWork(void)___ptr64'::__l2::
                __CpuProfilerEventSpecId35,"FOuterTask::DoWork",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncWorkTest.cpp"
               ,0x23);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_AsyncWorkTestImpl::FOuterTask::DoWork(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId35);
  }
  uVar7 = 0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbe8) = 1;
  uVar6 = this->InnerTaskCount;
  if ((int)uVar6 < 1) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
  }
  else {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,uVar6,&local_18,local_10,local_10 + 1);
    DefaultConstructItems<FAsyncTask<AsyncWorkTestImpl::FInnerTask>,int>
              (local_18.Data + (longlong)iVar4 * 0x78,uVar6);
  }
  uVar6 = uVar7;
  if (0 < local_10[0]) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_10[0]) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FAsyncTaskBase::Start
                ((FAsyncTaskBase *)(local_18.Data + (longlong)(int)uVar6 * 0x78),false,
                 this->ThreadPool,Normal,None,-1,(wchar_t *)0x0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < local_10[0]);
  }
  if (0 < local_10[0]) {
    do {
      bVar2 = -1 < CpuChannel->Enabled;
      if (bVar2) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_void___cdecl_AsyncWorkTestImpl::FOuterTask::DoWork(void)___ptr64'::__l6
                    ::__CpuProfilerEventSpecId48,"FOuterTask::EnsureCompletion",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\AsyncWorkTest.cpp"
                   ,0x30);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_void___cdecl_AsyncWorkTestImpl::FOuterTask::DoWork(void)___ptr64'::__l6
                   ::__CpuProfilerEventSpecId48);
      }
      uVar6 = 0;
      if ((int)uVar7 < local_10[0]) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FAsyncTaskBase::EnsureCompletion
                ((FAsyncTaskBase *)(local_18.Data + (longlong)(int)uVar7 * 0x78),true,false);
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_10[0]);
  }
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbe8) = 0;
  DestructItems<FAsyncTask<AsyncWorkTestImpl::FInnerTask>,int>
            ((FAsyncTask<AsyncWorkTestImpl::FInnerTask> *)local_18.Data,local_10[0]);
  if ((FAsyncTask<AsyncWorkTestImpl::FInnerTask> *)local_18.Data !=
      (FAsyncTask<AsyncWorkTestImpl::FInnerTask> *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

