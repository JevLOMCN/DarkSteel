// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FPageAllocator @ 1418bcf20

FPageAllocator * __thiscall FPageAllocator::FPageAllocator(FPageAllocator *this)

{
  *(undefined8 *)&(this->TheAllocator).FreeList = 0;
  *(undefined8 *)&(this->TheAllocator).FreeList = 0;
  (this->TheAllocator).NumUsed.Counter = 0;
  (this->TheAllocator).NumFree.Counter = 0;
  Instance = this;
  return this;
}

// ~FPageAllocator @ 1418bf320

void __thiscall FPageAllocator::~FPageAllocator(FPageAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  
  Instance = (FPageAllocator *)0x0;
  if ((this->TheAllocator).NumUsed.Counter != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetNumUsed() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TLockFreeFixedSizeAllocator<65536,64,FThreadSafeCounter>::Trim(&this->TheAllocator);
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)this);
  return;
}

// Alloc @ 1418c73f0

void * __thiscall FPageAllocator::Alloc(FPageAllocator *this,int param_1)

{
  FThreadSafeCounter *pFVar1;
  uint uVar2;
  FLLMTagDeclaration *pFVar3;
  atomic<void_*> aVar4;
  FName local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  pFVar3 = GetLLMTagDeclaration_MemStack();
  FLLMScope::FLLMScope(local_res10,pFVar3->UniqueName,false,None,Default,true);
  pFVar3 = GetLLMTagDeclaration_MemStack();
  local_res8 = pFVar3->UniqueName;
  FMemScope::FMemScope(local_res18,&local_res8,true);
  LOCK();
  pFVar1 = &(this->TheAllocator).NumUsed;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  if (param_1 < 0x1001) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
    aVar4 = (atomic<void_*>)0x0;
    if (uVar2 != 0) {
      aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    }
    if (aVar4 != (atomic<void_*>)0x0) {
      LOCK();
      pFVar1 = &(this->TheAllocator).NumFree;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      goto LAB_1418c749d;
    }
  }
  aVar4 = (atomic<void_*>)FMemory::Malloc(0x10000,param_1);
LAB_1418c749d:
  UpdateStats(this);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return (void *)aVar4;
}

// AllocSmall @ 1418c74d0

void * __thiscall FPageAllocator::AllocSmall(FPageAllocator *this)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(0x3f0,0);
  return pvVar1;
}

// BytesFree @ 1418c99a0

ulong64 __thiscall FPageAllocator::BytesFree(FPageAllocator *this)

{
  return (longlong)(this->TheAllocator).NumFree.Counter << 0x10;
}

// BytesUsed @ 1418c99b0

ulong64 __thiscall FPageAllocator::BytesUsed(FPageAllocator *this)

{
  return (longlong)(this->TheAllocator).NumUsed.Counter << 0x10;
}

// Construct @ 1418d1260

FPageAllocator * __cdecl FPageAllocator::Construct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Instance = &PageAllocator;
      atexit(`FPageAllocator::Construct'::__l2::_dynamic_atexit_destructor_for__PageAllocator__);
      _Init_thread_footer(&::_TSS0);
      return Instance;
    }
  }
  return Instance;
}

// Free @ 1418db8a0

void __thiscall FPageAllocator::Free(FPageAllocator *this,void *param_1)

{
  FThreadSafeCounter *pFVar1;
  uint uVar2;
  FIndexedLockFreeLink *pFVar3;
  
  LOCK();
  pFVar1 = &(this->TheAllocator).NumUsed;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar2 == 0) {
    pFVar3 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
  }
  pFVar3->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push((FLockFreePointerListLIFORoot<64,1> *)this,uVar2);
  LOCK();
  pFVar1 = &(this->TheAllocator).NumFree;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  UpdateStats(this);
  return;
}

// FreeSmall @ 1418dbbd0

void __thiscall FPageAllocator::FreeSmall(FPageAllocator *this,void *param_1)

{
  FMemory::Free(param_1);
  return;
}

// Get @ 1418dc580

FPageAllocator * __cdecl FPageAllocator::Get(void)

{
  if (Instance != (FPageAllocator *)0x0) {
    return Instance;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Instance = &PageAllocator;
      atexit(`FPageAllocator::Construct'::__l2::_dynamic_atexit_destructor_for__PageAllocator__);
      _Init_thread_footer(&::_TSS0);
      return Instance;
    }
  }
  return Instance;
}

// LatchProtectedMode @ 1418e3e60

void __thiscall FPageAllocator::LatchProtectedMode(FPageAllocator *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  <lambda_1> local_res10 [24];
  
  this_00 = FCoreDelegates::GetMemoryTrimDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FPageAllocator::LatchProtectedMode_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,local_res10);
  return;
}

// UpdateStats @ 1418fe880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPageAllocator::UpdateStats(FPageAllocator *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_PageAllocatorFree> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PageAllocatorUsed> FVar6;
  uchar auVar7 [8];
  FName local_res10;
  FStatMessage local_38;
  
  FVar3 = StatPtr_STAT_PageAllocatorFree;
  if (StatPtr_STAT_PageAllocatorFree == (FThreadSafeStaticStat<FStat_STAT_PageAllocatorFree>)0x0) {
    pFVar2 = ::FName::FName(&local_res10,"STAT_PageAllocatorFree");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_PageAllocatorFree>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageAllocatorFree,*pFVar2,
                       L"PageAllocator Free","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                       false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar3;
  auVar7 = (uchar  [8])((longlong)(this->TheAllocator).NumFree.Counter << 0x10);
  local_res10 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res10 = FVar1;
    local_38.StatData.Pad = auVar7;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_38);
    FStatsTrace::Set(&local_res10,(long64)auVar7);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar6 = StatPtr_STAT_PageAllocatorUsed;
  if (StatPtr_STAT_PageAllocatorUsed == (FThreadSafeStaticStat<FStat_STAT_PageAllocatorUsed>)0x0) {
    pFVar2 = ::FName::FName(&local_res10,"STAT_PageAllocatorUsed");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PageAllocatorUsed>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageAllocatorUsed,*pFVar2,
                       L"PageAllocator Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                       false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar6;
  auVar7 = (uchar  [8])((longlong)(this->TheAllocator).NumUsed.Counter << 0x10);
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res10 = FVar1;
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res10 = FVar1;
    local_38.StatData.Pad = auVar7;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_38);
    FStatsTrace::Set(&local_res10,(long64)auVar7);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  return;
}

