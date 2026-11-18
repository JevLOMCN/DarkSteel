// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// ~ForAnyElementType @ 1424ecf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
          (ForAnyElementType *this)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateCachedDrawElementMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  iVar1 = this->AllocatedSize;
  if (iVar1 != 0) {
    FVar4 = StatPtr_STAT_SlateCachedDrawElementMemory;
    if (StatPtr_STAT_SlateCachedDrawElementMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateCachedDrawElementMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SlateCachedDrawElementMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateCachedDrawElementMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateCachedDrawElementMemory,
                         *pFVar3,L"Cached Draw Element Memory (CPU)","STATGROUP_SlateMemory",
                         "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = (uchar  [8])(longlong)iVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)iVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// ~ForAnyElementType @ 1424ed120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
~ForAnyElementType(ForAnyElementType *this)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateBufferPoolMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  iVar1 = this->AllocatedSize;
  if (iVar1 != 0) {
    FVar4 = StatPtr_STAT_SlateBufferPoolMemory;
    if (StatPtr_STAT_SlateBufferPoolMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateBufferPoolMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SlateBufferPoolMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateBufferPoolMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBufferPoolMemory,*pFVar3,
                         L"Vertex/Index Buffer Pool Memory (CPU)","STATGROUP_SlateMemory",
                         "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = (uchar  [8])(longlong)iVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)iVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// ResizeAllocation @ 14251daa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,int param_3)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateCachedDrawElementMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  int local_res10;
  FStatMessage local_48;
  
  iVar2 = param_2 * param_3 - this->AllocatedSize;
  local_res10 = param_1;
  if (iVar2 != 0) {
    FVar4 = StatPtr_STAT_SlateCachedDrawElementMemory;
    if (StatPtr_STAT_SlateCachedDrawElementMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateCachedDrawElementMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SlateCachedDrawElementMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateCachedDrawElementMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateCachedDrawElementMemory,
                         *pFVar3,L"Cached Draw Element Memory (CPU)","STATGROUP_SlateMemory",
                         "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_48.StatData.Pad = (uchar  [8])(longlong)iVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_48);
      FStatsTrace::Add(&local_res8,(longlong)iVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->AllocatedSize = param_2 * param_3;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,local_res10,param_2,(longlong)param_3);
  return;
}

// ResizeAllocation @ 14251dc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,int param_3)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateBufferPoolMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  int local_res10;
  FStatMessage local_48;
  
  iVar2 = param_2 * param_3 - this->AllocatedSize;
  local_res10 = param_1;
  if (iVar2 != 0) {
    FVar4 = StatPtr_STAT_SlateBufferPoolMemory;
    if (StatPtr_STAT_SlateBufferPoolMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateBufferPoolMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SlateBufferPoolMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateBufferPoolMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBufferPoolMemory,*pFVar3,
                         L"Vertex/Index Buffer Pool Memory (CPU)","STATGROUP_SlateMemory",
                         "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_48.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_48.StatData.Pad = (uchar  [8])(longlong)iVar2;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_48);
      FStatsTrace::Add(&local_res8,(longlong)iVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->AllocatedSize = param_2 * param_3;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,local_res10,param_2,(longlong)param_3);
  return;
}

