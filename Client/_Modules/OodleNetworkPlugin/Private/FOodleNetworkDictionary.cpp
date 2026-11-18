// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 2

// FOodleNetworkDictionary @ 14e293680

/* WARNING: Enum "Type": Some values do not have unique names */

FOodleNetworkDictionary * __thiscall
FOodleNetworkDictionary::FOodleNetworkDictionary
          (FOodleNetworkDictionary *this,uint param_1,uchar *param_2,uint param_3,
          OodleNetwork1_Shared *param_4,uint param_5,OodleNetwork1UDP_State *param_6,uint param_7)

{
  OodleNetwork1_Shared *pOVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryCount> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryBytes> FVar6;
  FThreadSafeStaticStat<FStat_STAT_Oodle_SharedBytes> FVar7;
  FThreadSafeStaticStat<FStat_STAT_Oodle_StateBytes> FVar8;
  uchar auVar9 [8];
  uchar auVar10 [8];
  uchar auVar11 [8];
  FStatMessage local_38;
  
  this->SharedDictionary = param_4;
  this->SharedDictionarySize = param_5;
  this->CompressorState = param_6;
  this->CompressorStateSize = param_7;
  this->HashTableSize = param_1;
  this->DictionaryData = param_2;
  this->DictionarySize = param_3;
  FVar3 = StatPtr_STAT_Oodle_DictionaryCount;
  if (StatPtr_STAT_Oodle_DictionaryCount ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryCount>)0x0) {
    pFVar2 = ::FName::FName((FName *)&param_4,"STAT_Oodle_DictionaryCount");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_DictionaryCount,*pFVar2,
                       L"Oodle Dictionary Count","STATGROUP_OodleNetwork","STATCAT_Advanced",
                       L"OodleNetwork",true,false,ST_int64,false,false,MCR_Invalid);
  }
  pOVar1 = *(OodleNetwork1_Shared **)FVar3;
  param_4 = pOVar1;
  if (((pOVar1 != (OodleNetwork1_Shared *)0x0) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_38.NameAndInfo.Number = (uint)((ulonglong)pOVar1 >> 0x20) & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    param_4 = pOVar1;
    local_38.NameAndInfo.Index.Value = (uint)pOVar1;
    FThreadStats::AddStatMessage(pFVar4,&local_38);
    FStatsTrace::Add((FName *)&param_4,1);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  auVar10._0_4_ = this->DictionarySize + 0x10000;
  auVar10[4] = '\0';
  auVar10[5] = '\0';
  auVar10[6] = '\0';
  auVar10[7] = '\0';
  if (auVar10._0_4_ != 0) {
    FVar6 = StatPtr_STAT_Oodle_DictionaryBytes;
    if (StatPtr_STAT_Oodle_DictionaryBytes ==
        (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryBytes>)0x0) {
      pFVar2 = ::FName::FName((FName *)&param_4,"STAT_Oodle_DictionaryBytes");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryBytes>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_DictionaryBytes,*pFVar2,
                         L"Oodle Dictionary Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",
                         L"OodleNetwork",true,false,ST_int64,false,false,MCR_Physical);
    }
    pOVar1 = *(OodleNetwork1_Shared **)FVar6;
    param_4 = pOVar1;
    if (((pOVar1 != (OodleNetwork1_Shared *)0x0) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = (uint)((ulonglong)pOVar1 >> 0x20) & 0xffffafff | 0xa000;
      param_4 = pOVar1;
      local_38.StatData.Pad = auVar10;
      local_38.NameAndInfo.Index.Value = (uint)pOVar1;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add((FName *)&param_4,(long64)auVar10);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar9[4] = '\0';
  auVar9[5] = '\0';
  auVar9[6] = '\0';
  auVar9[7] = '\0';
  auVar9._0_4_ = this->SharedDictionarySize;
  if (auVar9 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_Oodle_SharedBytes;
    if (StatPtr_STAT_Oodle_SharedBytes == (FThreadSafeStaticStat<FStat_STAT_Oodle_SharedBytes>)0x0)
    {
      pFVar2 = ::FName::FName((FName *)&param_4,"STAT_Oodle_SharedBytes");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_Oodle_SharedBytes>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_SharedBytes,*pFVar2,
                         L"Oodle Shared Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",
                         L"OodleNetwork",true,false,ST_int64,false,false,MCR_Physical);
    }
    pOVar1 = *(OodleNetwork1_Shared **)FVar7;
    param_4 = pOVar1;
    if (((pOVar1 != (OodleNetwork1_Shared *)0x0) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = (uint)((ulonglong)pOVar1 >> 0x20) & 0xffffafff | 0xa000;
      param_4 = pOVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = (uint)pOVar1;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add((FName *)&param_4,(long64)auVar9);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  auVar11._0_4_ = this->CompressorStateSize;
  if (auVar11 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_Oodle_StateBytes;
    if (StatPtr_STAT_Oodle_StateBytes == (FThreadSafeStaticStat<FStat_STAT_Oodle_StateBytes>)0x0) {
      pFVar2 = ::FName::FName((FName *)&param_4,"STAT_Oodle_StateBytes");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_Oodle_StateBytes>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_StateBytes,*pFVar2,
                         L"Oodle State Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",
                         L"OodleNetwork",true,false,ST_int64,false,false,MCR_Physical);
    }
    pOVar1 = *(OodleNetwork1_Shared **)FVar8;
    if (((pOVar1 != (OodleNetwork1_Shared *)0x0) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      param_4 = pOVar1;
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = (uint)((ulonglong)pOVar1 >> 0x20) & 0xffffafff | 0xa000;
      param_4 = pOVar1;
      local_38.StatData.Pad = auVar11;
      local_38.NameAndInfo.Index.Value = (uint)pOVar1;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add((FName *)&param_4,(long64)auVar11);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  return this;
}

// ~FOodleNetworkDictionary @ 14e2940f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOodleNetworkDictionary::~FOodleNetworkDictionary(FOodleNetworkDictionary *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryCount> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryBytes> FVar6;
  FThreadSafeStaticStat<FStat_STAT_Oodle_SharedBytes> FVar7;
  FThreadSafeStaticStat<FStat_STAT_Oodle_StateBytes> FVar8;
  uchar auVar9 [8];
  uchar auVar10 [8];
  uchar auVar11 [8];
  FName local_res8;
  FStatMessage local_38;
  
  FVar3 = StatPtr_STAT_Oodle_DictionaryCount;
  if (StatPtr_STAT_Oodle_DictionaryCount ==
      (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryCount>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_DictionaryCount");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_DictionaryCount,*pFVar2,
                       L"Oodle Dictionary Count","STATGROUP_OodleNetwork","STATCAT_Advanced",
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
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_38);
    FStatsTrace::Add(&local_res8,-1);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  auVar9._0_4_ = this->DictionarySize + 0x10000;
  auVar9[4] = '\0';
  auVar9[5] = '\0';
  auVar9[6] = '\0';
  auVar9[7] = '\0';
  if (auVar9._0_4_ != 0) {
    FVar6 = StatPtr_STAT_Oodle_DictionaryBytes;
    if (StatPtr_STAT_Oodle_DictionaryBytes ==
        (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryBytes>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_DictionaryBytes");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_Oodle_DictionaryBytes>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_DictionaryBytes,*pFVar2,
                         L"Oodle Dictionary Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",
                         L"OodleNetwork",true,false,ST_int64,false,false,MCR_Physical);
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
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar9);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar10[4] = '\0';
  auVar10[5] = '\0';
  auVar10[6] = '\0';
  auVar10[7] = '\0';
  auVar10._0_4_ = this->SharedDictionarySize;
  if (auVar10 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_Oodle_SharedBytes;
    if (StatPtr_STAT_Oodle_SharedBytes == (FThreadSafeStaticStat<FStat_STAT_Oodle_SharedBytes>)0x0)
    {
      pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_SharedBytes");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_Oodle_SharedBytes>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_SharedBytes,*pFVar2,
                         L"Oodle Shared Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",
                         L"OodleNetwork",true,false,ST_int64,false,false,MCR_Physical);
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
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar10;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar10);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  auVar11._0_4_ = this->CompressorStateSize;
  if (auVar11 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_Oodle_StateBytes;
    if (StatPtr_STAT_Oodle_StateBytes == (FThreadSafeStaticStat<FStat_STAT_Oodle_StateBytes>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_Oodle_StateBytes");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_Oodle_StateBytes>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Oodle_StateBytes,*pFVar2,
                         L"Oodle State Bytes","STATGROUP_OodleNetwork","STATCAT_Advanced",
                         L"OodleNetwork",true,false,ST_int64,false,false,MCR_Physical);
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
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar11;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar11);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  if (this->DictionaryData != (uchar *)0x0) {
    operator_delete__(this->DictionaryData);
  }
  if (this->SharedDictionary != (OodleNetwork1_Shared *)0x0) {
    FMemory::Free(this->SharedDictionary);
  }
  if (this->CompressorState != (OodleNetwork1UDP_State *)0x0) {
    FMemory::Free(this->CompressorState);
  }
  return;
}

