// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// ~ForAnyElementType @ 146d78950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType(ForAnyElementType *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->AllocatedSize;
  if (auVar1 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar3,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
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
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
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

