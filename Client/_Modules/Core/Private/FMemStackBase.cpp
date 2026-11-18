// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FMemStackBase @ 1418bc600

FMemStackBase * __thiscall FMemStackBase::FMemStackBase(FMemStackBase *this,EPageSize param_1)

{
  this->Top = (uchar *)0x0;
  this->End = (uchar *)0x0;
  this->TopChunk = (FTaggedMemory *)0x0;
  this->TopMark = (FMemMark *)0x0;
  this->NumMarks = 0;
  this->PageSize = Small;
  this->bShouldEnforceAllocMarks = false;
  if (FPageAllocator::Instance == (FPageAllocator *)0x0) {
    FPageAllocator::Construct();
  }
  return this;
}

// AllocateNewChunk @ 1418c7740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMemStackBase::AllocateNewChunk(FMemStackBase *this,int param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  atomic<void_*> aVar5;
  FLockFreePointerListLIFORoot<64,1> *this_00;
  FLLMTagDeclaration *pFVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_MemStackLargeBLock> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uchar auVar9 [8];
  FName local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FStatMessage local_48;
  
  if (((this->TopChunk == (FTaggedMemory *)0x0) && (uVar3 = 0x3f0, param_1 + 0x10 < 0x3f1)) &&
     (this->PageSize != Large)) {
    if (FPageAllocator::Instance == (FPageAllocator *)0x0) {
      FPageAllocator::Construct();
    }
    aVar5 = (atomic<void_*>)FMemory::Malloc(0x3f0,0);
  }
  else {
    uVar3 = param_1 + 0x1000fU & 0xffff0000;
    auVar9[4] = '\0';
    auVar9[5] = '\0';
    auVar9[6] = '\0';
    auVar9[7] = '\0';
    auVar9[0] = (char)uVar3;
    auVar9[1] = (char)(uVar3 >> 8);
    auVar9[2] = (char)(uVar3 >> 0x10);
    auVar9[3] = (char)(uVar3 >> 0x18);
    if (uVar3 == 0x10000) {
      this_00 = (FLockFreePointerListLIFORoot<64,1> *)FPageAllocator::Instance;
      if (FPageAllocator::Instance == (FPageAllocator *)0x0) {
        this_00 = (FLockFreePointerListLIFORoot<64,1> *)FPageAllocator::Construct();
      }
      pFVar6 = GetLLMTagDeclaration_MemStack();
      FLLMScope::FLLMScope(local_res10,pFVar6->UniqueName,false,None,Default,true);
      pFVar6 = GetLLMTagDeclaration_MemStack();
      local_res8 = pFVar6->UniqueName;
      FMemScope::FMemScope(local_res18,&local_res8,true);
      LOCK();
      *(int *)&this_00[1].Head.Ptrs = *(int *)&this_00[1].Head.Ptrs + 1;
      UNLOCK();
      uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop(this_00);
      aVar5 = (atomic<void_*>)0x0;
      if (uVar4 != 0) {
        aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
      }
      if (aVar5 == (atomic<void_*>)0x0) {
        aVar5 = (atomic<void_*>)FMemory::Malloc(0x10000,8);
      }
      else {
        LOCK();
        puVar1 = &this_00[1].Head.Ptrs.field_0x4;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
      }
      FPageAllocator::UpdateStats((FPageAllocator *)this_00);
      FMemScope::~FMemScope(local_res18);
      FLLMScope::~FLLMScope(local_res10);
    }
    else {
      aVar5 = (atomic<void_*>)FMemory::Malloc((ulong64)auVar9,0);
      if (uVar3 != 0) {
        FVar8 = StatPtr_STAT_MemStackLargeBLock;
        if (StatPtr_STAT_MemStackLargeBLock ==
            (FThreadSafeStaticStat<FStat_STAT_MemStackLargeBLock>)0x0) {
          pFVar7 = ::FName::FName(&local_res8,"STAT_MemStackLargeBLock");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_MemStackLargeBLock>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MemStackLargeBLock,*pFVar7,
                             L"MemStack Large Block","STATGROUP_Memory","STATCAT_Advanced",L"Memory"
                             ,true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar2 = *(FName *)FVar8;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          local_res8 = FVar2;
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          local_48.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
          local_res8 = FVar2;
          local_48.StatData.Pad = auVar9;
          local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_01,&local_48);
          FStatsTrace::Add(&local_res8,(long64)auVar9);
          if (this_01->ScopeCount == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
    }
  }
  *(uint *)((longlong)aVar5 + 8) = uVar3 - 0x10;
  *(FTaggedMemory **)aVar5 = this->TopChunk;
  this->Top = (uchar *)((longlong)aVar5 + 0x10);
  this->TopChunk = (FTaggedMemory *)aVar5;
  this->End = (uchar *)((longlong)((longlong)aVar5 + 0x10) + (longlong)*(int *)((longlong)aVar5 + 8)
                       );
  return;
}

// ContainsPointer @ 1418d2960

bool __thiscall FMemStackBase::ContainsPointer(FMemStackBase *this,void *param_1)

{
  FTaggedMemory *pFVar1;
  
  pFVar1 = this->TopChunk;
  while( true ) {
    if (pFVar1 == (FTaggedMemory *)0x0) {
      return false;
    }
    if ((pFVar1 + 1 <= param_1) &&
       (param_1 < (void *)((longlong)&pFVar1[1].Next + (longlong)pFVar1->DataSize))) break;
    pFVar1 = pFVar1->Next;
  }
  return true;
}

// FreeChunks @ 1418db910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMemStackBase::FreeChunks(FMemStackBase *this,FTaggedMemory *param_1)

{
  undefined1 *puVar1;
  atomic<void_*> aVar2;
  FName FVar3;
  uint uVar4;
  FLockFreePointerListLIFORoot<64,1> *this_00;
  FIndexedLockFreeLink *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_MemStackLargeBLock> FVar7;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uchar auVar8 [8];
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_48;
  
  aVar2 = (atomic<void_*>)this->TopChunk;
  while (aVar2 != (atomic<void_*>)param_1) {
    this->TopChunk = *(FTaggedMemory **)aVar2;
    auVar8 = (uchar  [8])((longlong)*(int *)((longlong)aVar2 + 8) + 0x10);
    if (auVar8 == (uchar  [8])0x10000) {
      this_00 = (FLockFreePointerListLIFORoot<64,1> *)FPageAllocator::Instance;
      if (FPageAllocator::Instance == (FPageAllocator *)0x0) {
        this_00 = (FLockFreePointerListLIFORoot<64,1> *)FPageAllocator::Construct();
      }
      LOCK();
      *(int *)&this_00[1].Head.Ptrs = *(int *)&this_00[1].Head.Ptrs + -1;
      UNLOCK();
      uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar4 == 0) {
        pFVar5 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
      }
      pFVar5->Payload = aVar2;
      FLockFreePointerListLIFORoot<64,1>::Push(this_00,uVar4);
      LOCK();
      puVar1 = &this_00[1].Head.Ptrs.field_0x4;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
      FPageAllocator::UpdateStats((FPageAllocator *)this_00);
    }
    else {
      if (auVar8 == (uchar  [8])0x3f0) {
        if (FPageAllocator::Instance == (FPageAllocator *)0x0) {
          FPageAllocator::Construct();
        }
      }
      else if (auVar8 != (uchar  [8])0x0) {
        FVar7 = StatPtr_STAT_MemStackLargeBLock;
        if (StatPtr_STAT_MemStackLargeBLock ==
            (FThreadSafeStaticStat<FStat_STAT_MemStackLargeBLock>)0x0) {
          pFVar6 = ::FName::FName(local_res18,"STAT_MemStackLargeBLock");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_MemStackLargeBLock>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MemStackLargeBLock,*pFVar6,
                             L"MemStack Large Block","STATGROUP_Memory","STATCAT_Advanced",L"Memory"
                             ,true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar3 = *(FName *)FVar7;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          local_48.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
          local_res10 = FVar3;
          local_48.StatData.Pad = auVar8;
          local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_01,&local_48);
          FStatsTrace::Add(&local_res10,-(longlong)auVar8);
          if (this_01->ScopeCount == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      FMemory::Free((void *)aVar2);
    }
    aVar2 = (atomic<void_*>)this->TopChunk;
  }
  this->Top = (uchar *)0x0;
  this->End = (uchar *)0x0;
  if (aVar2 != (atomic<void_*>)0x0) {
    this->Top = (uchar *)((longlong)aVar2 + 0x10);
    this->End = (uchar *)((longlong)((longlong)aVar2 + 0x10) +
                         (longlong)*(int *)((longlong)aVar2 + 8));
  }
  return;
}

// GetByteCount @ 1418dd9a0

int __thiscall FMemStackBase::GetByteCount(FMemStackBase *this)

{
  FTaggedMemory *pFVar1;
  int iVar2;
  
  iVar2 = 0;
  for (pFVar1 = this->TopChunk; pFVar1 != (FTaggedMemory *)0x0; pFVar1 = pFVar1->Next) {
    if (pFVar1 == this->TopChunk) {
      iVar2 = iVar2 + -0x10 + (*(int *)&this->Top - (int)pFVar1);
    }
    else {
      iVar2 = iVar2 + pFVar1->DataSize;
    }
  }
  return iVar2;
}

// Alloc @ 141925d60

void * __thiscall FMemStackBase::Alloc(FMemStackBase *this,ulong64 param_1,ulong64 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  uchar *puVar5;
  
  if ((this->bShouldEnforceAllocMarks != false) && (this->NumMarks < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bShouldEnforceAllocMarks || NumMarks > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x8a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  uVar1 = param_2 - 1;
  pvVar4 = (void *)((ulonglong)(this->Top + uVar1) & ~uVar1);
  puVar5 = (uchar *)((longlong)pvVar4 + param_1);
  if (this->End < puVar5) {
    AllocateNewChunk(this,(int)param_1 + (int)param_2);
    pvVar4 = (void *)((ulonglong)(this->Top + uVar1) & ~uVar1);
    puVar5 = (uchar *)((longlong)pvVar4 + param_1);
  }
  this->Top = puVar5;
  return pvVar4;
}

