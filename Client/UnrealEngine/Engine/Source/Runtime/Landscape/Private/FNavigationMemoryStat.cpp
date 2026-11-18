// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ResizeAllocation @ 145f1d3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,int param_3,uint param_4)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar4;
  uchar auVar5 [8];
  FName local_res8;
  int local_res10;
  FStatMessage local_48;
  
  lVar4 = (longlong)param_2 * (longlong)param_3;
  auVar5 = (uchar  [8])(lVar4 - this->AllocatedSize);
  local_res10 = param_1;
  if (auVar5 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar2,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
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
      local_48.StatData.Pad = auVar5;
      local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_48);
      FStatsTrace::Add(&local_res8,(long64)auVar5);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->AllocatedSize = lVar4;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,local_res10,param_2,(longlong)param_3);
  return;
}

