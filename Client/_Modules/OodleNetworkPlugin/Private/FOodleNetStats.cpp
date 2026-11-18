// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 2

// ResetStats @ 14e29ae50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOodleNetStats::ResetStats(FOodleNetStats *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InRaw> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InCompressed> FVar6;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InSavings> FVar7;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutRaw> FVar8;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressed> FVar9;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutSavings> FVar10;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InTotalSavings> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutTotalSavings> FVar12;
  FName local_res8;
  FStatMessage local_48 [2];
  
  this->InCompressedLength = 0;
  this->InDecompressedLength = 0;
  this->OutCompressedLength = 0;
  this->OutUncompressedLength = 0;
  this->TotalInCompressedLength = 0;
  this->TotalInDecompressedLength = 0;
  this->TotalOutCompressedLength = 0;
  this->TotalOutUncompressedLength = 0;
  FVar3 = StatPtr_STAT_Oodle_InRaw;
  if (StatPtr_STAT_Oodle_InRaw == (FThreadSafeStaticStat<FStat_STAT_Oodle_InRaw>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_InRaw");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InRaw>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InRaw,*pFVar2,
                       L"Oodle In Rate Raw (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
                       L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar6 = StatPtr_STAT_Oodle_InCompressed;
  if (StatPtr_STAT_Oodle_InCompressed == (FThreadSafeStaticStat<FStat_STAT_Oodle_InCompressed>)0x0)
  {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_InCompressed");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InCompressed>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InCompressed,*pFVar2,
                       L"Oodle In Rate Compressed (bytes)","STATGROUP_OodleNetwork",
                       "STATCAT_Advanced",L"OodleNetwork",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar6;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar7 = StatPtr_STAT_Oodle_InSavings;
  if (StatPtr_STAT_Oodle_InSavings == (FThreadSafeStaticStat<FStat_STAT_Oodle_InSavings>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_InSavings");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InSavings>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InSavings,*pFVar2,
                       L"Oodle In Rate Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                       L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0.0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar8 = StatPtr_STAT_Oodle_OutRaw;
  if (StatPtr_STAT_Oodle_OutRaw == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutRaw>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_OutRaw");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutRaw>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutRaw,*pFVar2,
                       L"Oodle Out Rate Raw (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
                       L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar8;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar9 = StatPtr_STAT_Oodle_OutCompressed;
  if (StatPtr_STAT_Oodle_OutCompressed == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressed>)0x0
     ) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_OutCompressed");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressed>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutCompressed,*pFVar2,
                       L"Oodle Out Rate Compressed (bytes)","STATGROUP_OodleNetwork",
                       "STATCAT_Advanced",L"OodleNetwork",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar9;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar10 = StatPtr_STAT_Oodle_OutSavings;
  if (StatPtr_STAT_Oodle_OutSavings == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutSavings>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_OutSavings");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutSavings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutSavings,*pFVar2,
                        L"Oodle Out Rate Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                        L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar10;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0.0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar11 = StatPtr_STAT_Oodle_InTotalSavings;
  if (StatPtr_STAT_Oodle_InTotalSavings ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_InTotalSavings>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_InTotalSavings");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InTotalSavings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InTotalSavings,*pFVar2,
                        L"Oodle In Total Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                        L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar11;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0.0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  FVar12 = StatPtr_STAT_Oodle_OutTotalSavings;
  if (StatPtr_STAT_Oodle_OutTotalSavings ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_OutTotalSavings>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_OutTotalSavings");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutTotalSavings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutTotalSavings,*pFVar2,
                        L"Oodle Out Total Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                        L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar12;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_48[0].StatData.Pad[0] = '\0';
    local_48[0].StatData.Pad[1] = '\0';
    local_48[0].StatData.Pad[2] = '\0';
    local_48[0].StatData.Pad[3] = '\0';
    local_48[0].StatData.Pad[4] = '\0';
    local_48[0].StatData.Pad[5] = '\0';
    local_48[0].StatData.Pad[6] = '\0';
    local_48[0].StatData.Pad[7] = '\0';
    local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,local_48);
    FStatsTrace::Set(&local_res8,0.0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  return;
}

// UpdateStats @ 14e29e1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOodleNetStats::UpdateStats(FOodleNetStats *this,float param_1)

{
  FName FVar1;
  uchar auVar2 [8];
  uchar auVar3 [8];
  double dVar4;
  double dVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InRaw> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InCompressed> FVar10;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InSavings> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutRaw> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressed> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutSavings> FVar14;
  FThreadSafeStaticStat<FStat_STAT_Oodle_InTotalSavings> FVar15;
  FThreadSafeStaticStat<FStat_STAT_Oodle_OutTotalSavings> FVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  FName local_res8;
  FStatMessage local_88 [6];
  
  fVar19 = __real_3f800000 / param_1;
  uVar18 = (uint)((float)this->InDecompressedLength * fVar19);
  uVar17 = (uint)((float)this->InCompressedLength * fVar19);
  FVar7 = StatPtr_STAT_Oodle_InRaw;
  if (StatPtr_STAT_Oodle_InRaw == (FThreadSafeStaticStat<FStat_STAT_Oodle_InRaw>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_InRaw");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InRaw>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InRaw,*pFVar6,
                       L"Oodle In Rate Raw (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
                       L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_88[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_88[0].StatData.Pad[4] = '\0';
    local_88[0].StatData.Pad[5] = '\0';
    local_88[0].StatData.Pad[6] = '\0';
    local_88[0].StatData.Pad[7] = '\0';
    local_88[0].StatData.Pad[0] = (char)uVar18;
    local_88[0].StatData.Pad[1] = (char)(uVar18 >> 8);
    local_88[0].StatData.Pad[2] = (char)(uVar18 >> 0x10);
    local_88[0].StatData.Pad[3] = (char)(uVar18 >> 0x18);
    local_res8 = FVar1;
    local_88[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,local_88);
    FStatsTrace::Set(&local_res8,(ulonglong)uVar18);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar10 = StatPtr_STAT_Oodle_InCompressed;
  if (StatPtr_STAT_Oodle_InCompressed == (FThreadSafeStaticStat<FStat_STAT_Oodle_InCompressed>)0x0)
  {
    pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_InCompressed");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InCompressed>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InCompressed,*pFVar6,
                        L"Oodle In Rate Compressed (bytes)","STATGROUP_OodleNetwork",
                        "STATCAT_Advanced",L"OodleNetwork",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar1 = *(FName *)FVar10;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_88[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_88[0].StatData.Pad[4] = '\0';
    local_88[0].StatData.Pad[5] = '\0';
    local_88[0].StatData.Pad[6] = '\0';
    local_88[0].StatData.Pad[7] = '\0';
    local_88[0].StatData.Pad[0] = (char)uVar17;
    local_88[0].StatData.Pad[1] = (char)(uVar17 >> 8);
    local_88[0].StatData.Pad[2] = (char)(uVar17 >> 0x10);
    local_88[0].StatData.Pad[3] = (char)(uVar17 >> 0x18);
    local_res8 = FVar1;
    local_88[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,local_88);
    FStatsTrace::Set(&local_res8,(ulonglong)uVar17);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  dVar5 = __real_4059000000000000;
  dVar4 = __real_3ff0000000000000;
  auVar3[0] = '\0';
  auVar3[1] = '\0';
  auVar3[2] = '\0';
  auVar3[3] = '\0';
  auVar3[4] = '\0';
  auVar3[5] = '\0';
  auVar3[6] = '\0';
  auVar3[7] = '\0';
  if (this->InCompressedLength == 0) {
    auVar2[0] = '\0';
    auVar2[1] = '\0';
    auVar2[2] = '\0';
    auVar2[3] = '\0';
    auVar2[4] = '\0';
    auVar2[5] = '\0';
    auVar2[6] = '\0';
    auVar2[7] = '\0';
  }
  else {
    auVar2 = (uchar  [8])
             ((__real_3ff0000000000000 -
              (double)this->InCompressedLength / (double)this->InDecompressedLength) *
             __real_4059000000000000);
  }
  FVar11 = StatPtr_STAT_Oodle_InSavings;
  if (StatPtr_STAT_Oodle_InSavings == (FThreadSafeStaticStat<FStat_STAT_Oodle_InSavings>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_InSavings");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InSavings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InSavings,*pFVar6,
                        L"Oodle In Rate Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                        L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar11;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_88[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_88[0].StatData.Pad = auVar2;
    local_88[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,local_88);
    FStatsTrace::Set(&local_res8,(double)auVar2);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  uVar18 = (uint)((float)this->OutUncompressedLength * fVar19);
  uVar17 = (uint)((float)this->OutCompressedLength * fVar19);
  FVar12 = StatPtr_STAT_Oodle_OutRaw;
  if (StatPtr_STAT_Oodle_OutRaw == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutRaw>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_OutRaw");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutRaw>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutRaw,*pFVar6,
                        L"Oodle Out Rate Raw (bytes)","STATGROUP_OodleNetwork","STATCAT_Advanced",
                        L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar12;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_88[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_88[0].StatData.Pad[4] = '\0';
    local_88[0].StatData.Pad[5] = '\0';
    local_88[0].StatData.Pad[6] = '\0';
    local_88[0].StatData.Pad[7] = '\0';
    local_88[0].StatData.Pad[0] = (char)uVar18;
    local_88[0].StatData.Pad[1] = (char)(uVar18 >> 8);
    local_88[0].StatData.Pad[2] = (char)(uVar18 >> 0x10);
    local_88[0].StatData.Pad[3] = (char)(uVar18 >> 0x18);
    local_res8 = FVar1;
    local_88[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,local_88);
    FStatsTrace::Set(&local_res8,(ulonglong)uVar18);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  FVar13 = StatPtr_STAT_Oodle_OutCompressed;
  if (StatPtr_STAT_Oodle_OutCompressed == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressed>)0x0
     ) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_OutCompressed");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutCompressed>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutCompressed,*pFVar6,
                        L"Oodle Out Rate Compressed (bytes)","STATGROUP_OodleNetwork",
                        "STATCAT_Advanced",L"OodleNetwork",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar1 = *(FName *)FVar13;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_88[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_88[0].StatData.Pad[4] = '\0';
    local_88[0].StatData.Pad[5] = '\0';
    local_88[0].StatData.Pad[6] = '\0';
    local_88[0].StatData.Pad[7] = '\0';
    local_88[0].StatData.Pad[0] = (char)uVar17;
    local_88[0].StatData.Pad[1] = (char)(uVar17 >> 8);
    local_88[0].StatData.Pad[2] = (char)(uVar17 >> 0x10);
    local_88[0].StatData.Pad[3] = (char)(uVar17 >> 0x18);
    local_res8 = FVar1;
    local_88[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,local_88);
    FStatsTrace::Set(&local_res8,(ulonglong)uVar17);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  if (this->OutCompressedLength != 0) {
    auVar3 = (uchar  [8])
             ((dVar4 - (double)this->OutCompressedLength / (double)this->OutUncompressedLength) *
             dVar5);
  }
  FVar14 = StatPtr_STAT_Oodle_OutSavings;
  if (StatPtr_STAT_Oodle_OutSavings == (FThreadSafeStaticStat<FStat_STAT_Oodle_OutSavings>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_OutSavings");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutSavings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutSavings,*pFVar6,
                        L"Oodle Out Rate Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                        L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar14;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_88[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_88[0].StatData.Pad = auVar3;
    local_88[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,local_88);
    FStatsTrace::Set(&local_res8,(double)auVar3);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  if (this->TotalInCompressedLength != 0) {
    FVar15 = StatPtr_STAT_Oodle_InTotalSavings;
    if (StatPtr_STAT_Oodle_InTotalSavings ==
        (FThreadSafeStaticStat<FStat_STAT_Oodle_InTotalSavings>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_InTotalSavings");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_Oodle_InTotalSavings>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_InTotalSavings,*pFVar6,
                          L"Oodle In Total Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                          L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
    }
    local_res8 = *(FName *)FVar15;
    FThreadStats::AddMessage<double>
              (local_res8,Set,
               (dVar4 - (double)this->TotalInCompressedLength /
                        (double)this->TotalInDecompressedLength) * dVar5,false);
  }
  if (this->TotalOutCompressedLength != 0) {
    FVar16 = StatPtr_STAT_Oodle_OutTotalSavings;
    if (StatPtr_STAT_Oodle_OutTotalSavings ==
        (FThreadSafeStaticStat<FStat_STAT_Oodle_OutTotalSavings>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_Oodle_OutTotalSavings");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_Oodle_OutTotalSavings>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_OutTotalSavings,*pFVar6,
                          L"Oodle Out Total Savings %","STATGROUP_OodleNetwork","STATCAT_Advanced",
                          L"OodleNetwork",true,false,NumBits,false,false,MCR_Invalid);
    }
    local_res8 = *(FName *)FVar16;
    FThreadStats::AddMessage<double>
              (local_res8,Set,
               (dVar4 - (double)this->TotalOutCompressedLength /
                        (double)this->TotalOutUncompressedLength) * dVar5,false);
  }
  this->InCompressedLength = 0;
  this->InDecompressedLength = 0;
  this->OutCompressedLength = 0;
  this->OutUncompressedLength = 0;
  return;
}

