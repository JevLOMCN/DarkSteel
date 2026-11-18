// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ~FNavHeightfieldSamples @ 145f03f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavHeightfieldSamples::~FNavHeightfieldSamples(FNavHeightfieldSamples *this)

{
  ForElementType<unsigned_int> FVar1;
  uchar auVar2 [8];
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  FVar1 = (this->Holes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  auVar2 = *(uchar (*) [8])&(this->Heights).field_0x8;
  if (auVar2 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar4,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar5;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_28.StatData.Pad = auVar2;
      local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (*(void **)&this->Heights != (void *)0x0) {
    FMemory::Free(*(void **)&this->Heights);
  }
  return;
}

