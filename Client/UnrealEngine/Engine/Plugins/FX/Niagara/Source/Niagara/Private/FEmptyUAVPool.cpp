// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FEmptyUAVPool @ 149279ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraEmptyUAVPool::FEmptyUAVPool::~FEmptyUAVPool(FEmptyUAVPool *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NiagaraEmptyUAVPool> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar5 [8];
  FName local_res8;
  FStatMessage local_28;
  
  if ((2 < (byte)LogNiagara._0_1_) && (this->NextFreeIndex != 0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  auVar5 = (uchar  [8])(longlong)(this->UAVs).ArrayNum;
  if (auVar5 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NiagaraEmptyUAVPool;
    if (StatPtr_STAT_NiagaraEmptyUAVPool ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraEmptyUAVPool>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NiagaraEmptyUAVPool");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NiagaraEmptyUAVPool>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmptyUAVPool,*pFVar3,
                         L"# EmptyUAVs","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,false,
                         ST_int64,false,false,MCR_Invalid);
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
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar5;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar5);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  DestructItems<FNiagaraEmptyUAVPool::FEmptyUAV,int>
            ((FEmptyUAV *)(this->UAVs).AllocatorInstance.Data,(this->UAVs).ArrayNum);
  pFVar2 = (this->UAVs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

