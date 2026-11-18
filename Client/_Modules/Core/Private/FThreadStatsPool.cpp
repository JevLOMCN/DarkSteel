// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FThreadStatsPool @ 1419cf8d0

FThreadStatsPool * __thiscall FThreadStatsPool::FThreadStatsPool(FThreadStatsPool *this)

{
  this->Pool = (TLockFreePointerListUnordered<void,0>)0x0;
  this->Pool = (TLockFreePointerListUnordered<void,0>)0x0;
  return this;
}

// Get @ 1419fc310

FThreadStatsPool * __cdecl FThreadStatsPool::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Singleton.Pool = (TLockFreePointerListUnordered<void,0>)0x0;
      atexit(`FThreadStatsPool::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetFromPool @ 1419fe4d0

FThreadStats * __thiscall FThreadStatsPool::GetFromPool(FThreadStatsPool *this)

{
  atomic<void_*> this_00;
  uint uVar1;
  FThreadStats *pFVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Stats,true);
  uVar1 = FLockFreePointerListLIFORoot<0,1>::Pop((FLockFreePointerListLIFORoot<0,1> *)this);
  if (uVar1 != 0) {
    this_00 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    if (this_00 != (atomic<void_*>)0x0) {
      pFVar2 = FThreadStats::FThreadStats((FThreadStats *)this_00,Invalid);
      goto LAB_1419fe56d;
    }
  }
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 == (FThreadStats *)0x0) {
    pFVar2 = (FThreadStats *)0x0;
  }
  else {
    pFVar2 = FThreadStats::FThreadStats(pFVar2,Invalid);
  }
LAB_1419fe56d:
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar2;
}

// ReturnToPool @ 141a1adf0

void __thiscall FThreadStatsPool::ReturnToPool(FThreadStatsPool *this,FThreadStats *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  
  if (param_1 == (FThreadStats *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                       ,0x3e4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->Packet).StatMessagesPresize.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(param_1->Packet).StatMessages.Chunks);
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar4 == 0) {
    pFVar5 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<0,1>::Push((FLockFreePointerListLIFORoot<0,1> *)this,uVar4);
  return;
}

