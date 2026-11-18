// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// UpdateMemoryStats @ 1491e4f80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderTarget2DArrayRWInstanceData_RenderThread::UpdateMemoryStats
          (FRenderTarget2DArrayRWInstanceData_RenderThread *this)

{
  FName FVar1;
  IPooledRenderTarget *pIVar2;
  uint uVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  uchar auVar8 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar8 = (uchar  [8])this->MemorySize;
  if (auVar8 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_NiagaraRenderTargetMemory;
    if (StatPtr_STAT_NiagaraRenderTargetMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_NiagaraRenderTargetMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderTargetMemory,
                         *pFVar4,L"Niagara RenderTarget memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
  }
  pIVar2 = (this->RenderTarget).Reference;
  this->MemorySize = 0;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    uVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x1d0))
                      (GDynamicRHI,(pIVar2->RenderTargetItem).TargetableTexture.Reference);
    auVar8[4] = '\0';
    auVar8[5] = '\0';
    auVar8[6] = '\0';
    auVar8[7] = '\0';
    auVar8[0] = (char)uVar3;
    auVar8[1] = (char)(uVar3 >> 8);
    auVar8[2] = (char)(uVar3 >> 0x10);
    auVar8[3] = (char)(uVar3 >> 0x18);
    this->MemorySize = (ulong64)auVar8;
    if (uVar3 != 0) {
      FVar5 = StatPtr_STAT_NiagaraRenderTargetMemory;
      if (StatPtr_STAT_NiagaraRenderTargetMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)0x0) {
        pFVar4 = ::FName::FName(&local_res8,"STAT_NiagaraRenderTargetMemory");
        FVar5 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderTargetMemory,
                           *pFVar4,L"Niagara RenderTarget memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar5;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar1;
        pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar6 == (FThreadStats *)0x0) {
          pFVar7 = FThreadStatsPool::Get();
          pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
        }
        local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_res8 = FVar1;
        local_38.StatData.Pad = auVar8;
        local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar6,&local_38);
        FStatsTrace::Add(&local_res8,(long64)auVar8);
        if (pFVar6->ScopeCount == 0) {
          FThreadStats::Flush(pFVar6,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar6,false,false);
        }
      }
    }
  }
  return;
}

