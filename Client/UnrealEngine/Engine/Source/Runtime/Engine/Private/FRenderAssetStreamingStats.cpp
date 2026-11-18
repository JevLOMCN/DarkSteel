// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Apply @ 14881daf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRenderAssetStreamingStats::Apply(FRenderAssetStreamingStats *this)

{
  int iVar1;
  ulonglong uVar2;
  FName FVar3;
  long64 lVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_MCR_TexturePool> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_MCR_StreamingPool> FVar9;
  FThreadSafeStaticStat<FStat_MCR_UsedStreamingPool> FVar10;
  FThreadSafeStaticStat<FStat_STAT_Streaming01_SafetyPool> FVar11;
  FThreadSafeStaticStat<FStat_STAT_Streaming02_TemporaryPool> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Streaming03_StreamingPool> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Streaming04_NonStreamingMips> FVar14;
  FThreadSafeStaticStat<FStat_STAT_Streaming05_RequiredPool> FVar15;
  FThreadSafeStaticStat<FStat_STAT_Streaming06_VisibleMips> FVar16;
  FThreadSafeStaticStat<FStat_STAT_Streaming07_HiddenMips> FVar17;
  FThreadSafeStaticStat<FStat_STAT_Streaming08_ForcedMips> FVar18;
  FThreadSafeStaticStat<FStat_STAT_Streaming09_UnkownRefMips> FVar19;
  FThreadSafeStaticStat<FStat_STAT_Streaming11_CachedMips> FVar20;
  TStatId TVar21;
  longlong lVar22;
  uchar auVar23 [8];
  FThreadSafeStaticStat<FStat_STAT_StreamingOverview15_EvictedMeshMem> FVar24;
  uchar auVar25 [8];
  float fVar26;
  FName local_res8;
  FStatMessage local_38;
  
  uVar2 = this->RenderAssetPool;
  FVar6 = StatPtr_MCR_TexturePool;
  if (StatPtr_MCR_TexturePool == (FThreadSafeStaticStat<FStat_MCR_TexturePool>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"MCR_TexturePool");
    FVar6 = (FThreadSafeStaticStat<FStat_MCR_TexturePool>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MCR_TexturePool,*pFVar5,
                       L"Texture Memory Pool [Texture]","STATGROUP_Memory","STATCAT_Advanced",
                       L"Memory",true,false,ST_int64,false,false,MCR_TexturePool);
  }
  FVar3 = *(FName *)FVar6;
  auVar25[0] = '\0';
  auVar25[1] = '\0';
  auVar25[2] = '\0';
  auVar25[3] = '\0';
  auVar25[4] = '\0';
  auVar25[5] = '\0';
  auVar25[6] = '\0';
  auVar25[7] = '\0';
  auVar23 = auVar25;
  if (uVar2 < 0x10000000000) {
    auVar23 = (uchar  [8])this->RenderAssetPool;
  }
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar9 = StatPtr_MCR_StreamingPool;
  if (StatPtr_MCR_StreamingPool == (FThreadSafeStaticStat<FStat_MCR_StreamingPool>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"MCR_StreamingPool");
    FVar9 = (FThreadSafeStaticStat<FStat_MCR_StreamingPool>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MCR_StreamingPool,*pFVar5,
                       L"Streaming Texture Pool [Streaming]","STATGROUP_Memory","STATCAT_Advanced",
                       L"Memory",true,false,ST_int64,false,false,MCR_StreamingPool);
  }
  FVar3 = *(FName *)FVar9;
  auVar23 = auVar25;
  if (uVar2 < 0x10000000000) {
    auVar23 = (uchar  [8])this->StreamingPool;
  }
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar10 = StatPtr_MCR_UsedStreamingPool;
  if (StatPtr_MCR_UsedStreamingPool == (FThreadSafeStaticStat<FStat_MCR_UsedStreamingPool>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"MCR_UsedStreamingPool");
    FVar10 = (FThreadSafeStaticStat<FStat_MCR_UsedStreamingPool>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MCR_UsedStreamingPool,*pFVar5,
                        L"Used Streaming Pool [Wanted]","STATGROUP_Memory","STATCAT_Advanced",
                        L"Memory",true,false,ST_int64,false,false,MCR_UsedStreamingPool);
  }
  FVar3 = *(FName *)FVar10;
  auVar23 = (uchar  [8])this->UsedStreamingPool;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar11 = StatPtr_STAT_Streaming01_SafetyPool;
  if (StatPtr_STAT_Streaming01_SafetyPool ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming01_SafetyPool>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming01_SafetyPool");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Streaming01_SafetyPool>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming01_SafetyPool,*pFVar5,
                        L"Safety Pool","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",true,
                        false,ST_int64,false,true,MCR_TexturePool);
  }
  FVar3 = *(FName *)FVar11;
  auVar23 = (uchar  [8])this->SafetyPool;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar12 = StatPtr_STAT_Streaming02_TemporaryPool;
  if (StatPtr_STAT_Streaming02_TemporaryPool ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming02_TemporaryPool>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming02_TemporaryPool");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Streaming02_TemporaryPool>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming02_TemporaryPool,*pFVar5
                        ,L"Temporary Pool","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",
                        true,false,ST_int64,false,true,MCR_TexturePool);
  }
  FVar3 = *(FName *)FVar12;
  auVar23 = auVar25;
  if (uVar2 < 0x10000000000) {
    auVar23 = (uchar  [8])this->TemporaryPool;
  }
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar13 = StatPtr_STAT_Streaming03_StreamingPool;
  if (StatPtr_STAT_Streaming03_StreamingPool ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming03_StreamingPool>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming03_StreamingPool");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Streaming03_StreamingPool>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming03_StreamingPool,*pFVar5
                        ,L"Streaming Pool","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",
                        true,false,ST_int64,false,true,MCR_TexturePool);
  }
  FVar3 = *(FName *)FVar13;
  auVar23 = auVar25;
  if (uVar2 < 0x10000000000) {
    auVar23 = (uchar  [8])this->StreamingPool;
  }
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar14 = StatPtr_STAT_Streaming04_NonStreamingMips;
  if (StatPtr_STAT_Streaming04_NonStreamingMips ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming04_NonStreamingMips>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming04_NonStreamingMips");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Streaming04_NonStreamingMips>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming04_NonStreamingMips,
                        *pFVar5,L"NonStreaming Mips","STATGROUP_Streaming","STATCAT_Advanced",
                        L"Streaming",true,false,ST_int64,false,true,MCR_TexturePool);
  }
  FVar3 = *(FName *)FVar14;
  auVar23 = (uchar  [8])this->NonStreamingMips;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar15 = StatPtr_STAT_Streaming05_RequiredPool;
  if (StatPtr_STAT_Streaming05_RequiredPool ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming05_RequiredPool>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming05_RequiredPool");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_Streaming05_RequiredPool>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming05_RequiredPool,*pFVar5,
                        L"Required Pool","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",true,
                        false,ST_int64,false,true,MCR_StreamingPool);
  }
  FVar3 = *(FName *)FVar15;
  auVar23 = (uchar  [8])this->RequiredPool;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar16 = StatPtr_STAT_Streaming06_VisibleMips;
  if (StatPtr_STAT_Streaming06_VisibleMips ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming06_VisibleMips>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming06_VisibleMips");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Streaming06_VisibleMips>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming06_VisibleMips,*pFVar5,
                        L"Visible Mips","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",true,
                        false,ST_int64,false,true,MCR_StreamingPool);
  }
  FVar3 = *(FName *)FVar16;
  auVar23 = (uchar  [8])this->VisibleMips;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar17 = StatPtr_STAT_Streaming07_HiddenMips;
  if (StatPtr_STAT_Streaming07_HiddenMips ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming07_HiddenMips>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming07_HiddenMips");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_Streaming07_HiddenMips>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming07_HiddenMips,*pFVar5,
                        L"Hidden Mips","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",true,
                        false,ST_int64,false,true,MCR_StreamingPool);
  }
  FVar3 = *(FName *)FVar17;
  auVar23 = (uchar  [8])this->HiddenMips;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar18 = StatPtr_STAT_Streaming08_ForcedMips;
  if (StatPtr_STAT_Streaming08_ForcedMips ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming08_ForcedMips>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming08_ForcedMips");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Streaming08_ForcedMips>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming08_ForcedMips,*pFVar5,
                        L"Forced Mips","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",true,
                        false,ST_int64,false,true,MCR_StreamingPool);
  }
  FVar3 = *(FName *)FVar18;
  auVar23 = (uchar  [8])this->ForcedMips;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar19 = StatPtr_STAT_Streaming09_UnkownRefMips;
  if (StatPtr_STAT_Streaming09_UnkownRefMips ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming09_UnkownRefMips>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming09_UnkownRefMips");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Streaming09_UnkownRefMips>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming09_UnkownRefMips,*pFVar5
                        ,L"UnkownRef Mips","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",
                        true,false,ST_int64,false,true,MCR_StreamingPool);
  }
  FVar3 = *(FName *)FVar19;
  auVar23 = (uchar  [8])this->UnkownRefMips;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar23;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  FVar20 = StatPtr_STAT_Streaming11_CachedMips;
  if (StatPtr_STAT_Streaming11_CachedMips ==
      (FThreadSafeStaticStat<FStat_STAT_Streaming11_CachedMips>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_Streaming11_CachedMips");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_Streaming11_CachedMips>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Streaming11_CachedMips,*pFVar5,
                        L"Cached Mips","STATGROUP_Streaming","STATCAT_Advanced",L"Streaming",true,
                        false,ST_int64,false,true,MCR_StreamingPool);
  }
  local_res8 = *(FName *)FVar20;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->CachedMips,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming12_WantedMips,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Streaming12_WantedMips,1> *)
                      &StatPtr_STAT_Streaming12_WantedMips);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->WantedMips,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming13_InflightRequests,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Streaming13_InflightRequests,1> *)
                      &StatPtr_STAT_Streaming13_InflightRequests);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->PendingRequests,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming14_MipIOBandwidth,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Streaming14_MipIOBandwidth,1> *)
                      &StatPtr_STAT_Streaming14_MipIOBandwidth);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->MipIOBandwidth,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming16_DesiredDataLoadedPct,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Streaming16_DesiredDataLoadedPct,1> *)
                      &StatPtr_STAT_Streaming16_DesiredDataLoadedPct);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  if ((uVar2 < 0x10000000000) && (this->StreamingPool != 0)) {
    fVar26 = ((float)this->WantedMips * __real_42c80000) / (float)this->StreamingPool;
  }
  else {
    fVar26 = 0.0;
  }
  FThreadStats::AddMessage<__int64>(local_res8,Set,(longlong)fVar26,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming17_VirtualTexturePool,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Streaming17_VirtualTexturePool,1> *)
                      &StatPtr_STAT_Streaming17_VirtualTexturePool);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->VirtualTexturePool,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming18_VirtualTextureRequired,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Streaming18_VirtualTextureRequired,1> *
                      )&StatPtr_STAT_Streaming18_VirtualTextureRequired);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->RequiredVirtualTexturePool,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming19_VirtualTextureUsed,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Streaming19_VirtualTextureUsed,1> *)
                      &StatPtr_STAT_Streaming19_VirtualTextureUsed);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->UsedVirtualTexturePool,false);
  if (FThreadStats::bPrimaryEnable != false) {
    iVar1 = this->SetupAsyncTaskCycles;
    TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming01_SetupAsyncTask,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_Streaming01_SetupAsyncTask,1> *)
                        &StatPtr_STAT_Streaming01_SetupAsyncTask);
    local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_res8,Set,(longlong)iVar1,true);
    if (FThreadStats::bPrimaryEnable != false) {
      iVar1 = this->UpdateStreamingDataCycles;
      TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming02_UpdateStreamingData,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_Streaming02_UpdateStreamingData,1>
                           *)&StatPtr_STAT_Streaming02_UpdateStreamingData);
      local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(longlong)iVar1,true);
      if (FThreadStats::bPrimaryEnable != false) {
        iVar1 = this->StreamRenderAssetsCycles;
        TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming03_StreamRenderAssets,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_Streaming03_StreamRenderAssets,1>
                             *)&StatPtr_STAT_Streaming03_StreamRenderAssets);
        local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
        FThreadStats::AddMessage<__int64>(local_res8,Set,(longlong)iVar1,true);
        if (FThreadStats::bPrimaryEnable != false) {
          iVar1 = this->CallbacksCycles;
          TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming04_Notifications,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_Streaming04_Notifications,1> *)
                              &StatPtr_STAT_Streaming04_Notifications);
          local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
          FThreadStats::AddMessage<__int64>(local_res8,Set,(longlong)iVar1,true);
        }
      }
    }
  }
  lVar4 = GPending2DUpdateCount;
  if ((GPending2DUpdateCount != 0) && (FThreadStats::bPrimaryEnable != false)) {
    TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming05_Pending2DUpdate,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_Streaming05_Pending2DUpdate,1> *)
                        &StatPtr_STAT_Streaming05_Pending2DUpdate);
    local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_res8,Add,lVar4,false);
  }
  iVar1 = this->NumVirtualTextures;
  if (((longlong)iVar1 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    TVar21 = FThreadSafeStaticStatInner<FStat_STAT_Streaming06_VirtualTextureCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_Streaming06_VirtualTextureCount,1> *)
                        &StatPtr_STAT_Streaming06_VirtualTextureCount);
    local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_res8,Add,(longlong)iVar1,false);
  }
  auVar23 = auVar25;
  if (GRHIGlobals.PoolSizeVRAMPercentage < 1) {
    auVar23 = (uchar  [8])this->NonStreamingMips;
  }
  GRequiredPoolSizeSum = GRequiredPoolSizeSum + this->RequiredPool + (longlong)auVar23;
  GRequiredPoolSizeCount = GRequiredPoolSizeCount + 1;
  lVar22 = GRequiredPoolSizeCount;
  if (GRequiredPoolSizeCount < 1) {
    lVar22 = 1;
  }
  GAverageRequiredPool = (long64)((double)GRequiredPoolSizeSum / (double)lVar22);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview01_StreamableRenderAssets,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview01_StreamableRenderAssets,1>
                      *)&StatPtr_STAT_StreamingOverview01_StreamableRenderAssets);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->RequiredPool + this->CachedMips,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview02_Required,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview02_Required,1> *)
                      &StatPtr_STAT_StreamingOverview02_Required);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->RequiredPool,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview03_Cached,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview03_Cached,1> *)
                      &StatPtr_STAT_StreamingOverview03_Cached);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->CachedMips,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview04_StreamingOverbudget,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview04_StreamingOverbudget,1>
                      *)&StatPtr_STAT_StreamingOverview04_StreamingOverbudget);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  auVar23 = (uchar  [8])(this->RequiredPool - this->StreamingPool);
  if (0 < (longlong)auVar23) {
    auVar25 = auVar23;
  }
  FThreadStats::AddMessage<__int64>(local_res8,Set,(long64)auVar25,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview05_UnstreamableRenderAssets,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview05_UnstreamableRenderAssets,1>
                      *)&StatPtr_STAT_StreamingOverview05_UnstreamableRenderAssets);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->NonStreamingMips,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview06_NeverStream,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview06_NeverStream,1> *)
                      &StatPtr_STAT_StreamingOverview06_NeverStream);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,GNeverStreamTextureMemory,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview07_UIGroup,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview07_UIGroup,1> *)
                      &StatPtr_STAT_StreamingOverview07_UIGroup);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,GUITextureMemory,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview08_AverageRequiredPool,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview08_AverageRequiredPool,1>
                      *)&StatPtr_STAT_StreamingOverview08_AverageRequiredPool);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,GAverageRequiredPool,false);
  if (FThreadStats::bPrimaryEnable != false) {
    TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview09_NumStreamedMeshes,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview09_NumStreamedMeshes,1>
                        *)&StatPtr_STAT_StreamingOverview09_NumStreamedMeshes);
    local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_res8,Set,(longlong)this->NumStreamedMeshes,false);
    if (FThreadStats::bPrimaryEnable != false) {
      TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview10_AvgNumStreamedLODs,1>::
               GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview10_AvgNumStreamedLODs,1>
                          *)&StatPtr_STAT_StreamingOverview10_AvgNumStreamedLODs);
      local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
      FThreadStats::AddMessage<double>(local_res8,Set,(double)this->AvgNumStreamedLODs,false);
      if (FThreadStats::bPrimaryEnable != false) {
        TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview11_AvgNumResidentLODs,1>::
                 GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview11_AvgNumResidentLODs,1>
                            *)&StatPtr_STAT_StreamingOverview11_AvgNumResidentLODs);
        local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
        FThreadStats::AddMessage<double>(local_res8,Set,(double)this->AvgNumResidentLODs,false);
        if (FThreadStats::bPrimaryEnable != false) {
          TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview12_AvgNumEvictedLODs,1>::
                   GetStatId((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview12_AvgNumEvictedLODs,1>
                              *)&StatPtr_STAT_StreamingOverview12_AvgNumEvictedLODs);
          local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
          FThreadStats::AddMessage<double>(local_res8,Set,(double)this->AvgNumEvictedLODs,false);
        }
      }
    }
  }
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview13_StreamedMeshMem,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview13_StreamedMeshMem,1>
                       *)&StatPtr_STAT_StreamingOverview13_StreamedMeshMem);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->StreamedMeshMem,false);
  TVar21 = FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview14_ResidentMeshMem,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_StreamingOverview14_ResidentMeshMem,1>
                       *)&StatPtr_STAT_StreamingOverview14_ResidentMeshMem);
  local_res8 = *(FName *)(TVar21.StatIdPtr)->Name;
  FThreadStats::AddMessage<__int64>(local_res8,Set,this->ResidentMeshMem,false);
  FVar24 = StatPtr_STAT_StreamingOverview15_EvictedMeshMem;
  if (StatPtr_STAT_StreamingOverview15_EvictedMeshMem ==
      (FThreadSafeStaticStat<FStat_STAT_StreamingOverview15_EvictedMeshMem>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_StreamingOverview15_EvictedMeshMem");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_StreamingOverview15_EvictedMeshMem>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_StreamingOverview15_EvictedMeshMem,*pFVar5,
                        L"Mesh LOD Bytes Evicted","STATGROUP_StreamingOverview","STATCAT_Advanced",
                        L"Streaming Overview",true,false,ST_int64,false,true,MCR_StreamingPool);
  }
  FVar3 = *(FName *)FVar24;
  auVar25 = (uchar  [8])this->EvictedMeshMem;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_38.StatData.Pad = auVar25;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar25);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  return;
}

