// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// IMappedFileHandle @ 142a53f50

/* WARNING: Enum "Type": Some values do not have unique names */

IMappedFileHandle * __thiscall
IMappedFileHandle::IMappedFileHandle(IMappedFileHandle *this,ulong64 param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_MappedFileHandles> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  this->MappedFileSize = param_1;
  this->_padding_ = (longlong)&___7IMappedFileHandle__6B_;
  FVar3 = StatPtr_STAT_MappedFileHandles;
  if (StatPtr_STAT_MappedFileHandles == (FThreadSafeStaticStat<FStat_STAT_MappedFileHandles>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_MappedFileHandles");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_MappedFileHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MappedFileHandles,*pFVar2,
                       L"Num Mapped File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

