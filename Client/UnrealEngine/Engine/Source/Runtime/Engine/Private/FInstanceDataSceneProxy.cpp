// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FInstanceDataSceneProxy @ 147cc4710

FInstanceDataSceneProxy * __thiscall
FInstanceDataSceneProxy::FInstanceDataSceneProxy
          (FInstanceDataSceneProxy *this,FInstanceSceneDataBuffers *param_1)

{
  this->_padding_ = (longlong)&___7FInstanceDataSceneProxy__6B_;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&this->InstanceSceneDataBuffers,param_1);
  return this;
}

// FInstanceDataSceneProxy @ 147cc4740

FInstanceDataSceneProxy * __thiscall
FInstanceDataSceneProxy::FInstanceDataSceneProxy(FInstanceDataSceneProxy *this)

{
  this->_padding_ = (longlong)&___7FInstanceDataSceneProxy__6B_;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&this->InstanceSceneDataBuffers);
  return this;
}

// ~FInstanceDataSceneProxy @ 147cc89f0

void __thiscall FInstanceDataSceneProxy::~FInstanceDataSceneProxy(FInstanceDataSceneProxy *this)

{
  this->_padding_ = (longlong)&___7FInstanceDataSceneProxy__6B_;
  DecStatCounters(this);
  FInstanceSceneDataBuffers::~FInstanceSceneDataBuffers(&this->InstanceSceneDataBuffers);
  return;
}

// DebugDrawInstanceChanges @ 147cebed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FInstanceDataSceneProxy::DebugDrawInstanceChanges
          (FInstanceDataSceneProxy *this,FPrimitiveDrawInterface *param_1,
          ESceneDepthPriorityGroup param_2)

{
  return;
}

// DecStatCounters @ 147cebfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInstanceDataSceneProxy::DecStatCounters(FInstanceDataSceneProxy *this)

{
  ushort uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_InstanceDataInstanceCount> FVar13;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasDynamicCount> FVar14;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasSkinningCount> FVar15;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasLMSMBiasCount> FVar16;
  TStatId TVar17;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasRandomCount> FVar18;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasLocalBounds> FVar19;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasHierarchyOffset> FVar20;
  uchar auVar21 [8];
  FName local_res8;
  undefined8 local_res10;
  FName local_res18;
  FName local_res20;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FStatMessage local_1a0;
  FStatMessage local_190;
  FStatMessage local_180;
  FStatMessage local_170;
  FStatMessage local_160;
  FStatMessage local_150;
  FStatMessage local_140;
  FStatMessage local_130;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68 [2];
  FName local_58;
  FName local_50 [2];
  
  if (((this->InstanceSceneDataBuffers).CurrentWriterTag.Value != (atomic<unsigned_int>)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)(this->InstanceSceneDataBuffers).InstanceToPrimitiveRelative.ArrayMax;
  uVar1 = (this->InstanceSceneDataBuffers).Flags.Packed;
  auVar21 = (uchar  [8])(lVar8 * 0x30);
  if (auVar21 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_c0,"STAT_ProxyInstanceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar9,
                          L"Nanite Proxy Instance Memory","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_100.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_100.StatData.Pad = auVar21;
      local_100.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_100);
      FStatsTrace::Add(&local_res8,lVar8 * -0x30);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  lVar8 = (longlong)(this->InstanceSceneDataBuffers).PrevInstanceToPrimitiveRelative.ArrayMax;
  auVar21 = (uchar  [8])(lVar8 * 0x30);
  if (auVar21 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_b8,"STAT_ProxyInstanceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar9,
                          L"Nanite Proxy Instance Memory","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_f0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res18 = FVar2;
      local_f0.StatData.Pad = auVar21;
      local_f0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_f0);
      FStatsTrace::Add(&local_res18,lVar8 * -0x30);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  lVar8 = (longlong)(this->InstanceSceneDataBuffers).InstanceCustomData.ArrayMax;
  auVar21 = (uchar  [8])(lVar8 * 4);
  if (auVar21 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_b0,"STAT_ProxyInstanceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar9,
                          L"Nanite Proxy Instance Memory","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_e0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res20 = FVar2;
      local_e0.StatData.Pad = auVar21;
      local_e0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_e0);
      FStatsTrace::Add(&local_res20,lVar8 * -4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  lVar8 = (longlong)(this->InstanceSceneDataBuffers).InstanceRandomIDs.ArrayMax;
  auVar21 = (uchar  [8])(lVar8 * 4);
  if (auVar21 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_a8,"STAT_ProxyInstanceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar9,
                          L"Nanite Proxy Instance Memory","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_d0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1f8 = FVar2;
      local_d0.StatData.Pad = auVar21;
      local_d0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_d0);
      FStatsTrace::Add(&local_1f8,lVar8 * -4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  lVar8 = (longlong)(this->InstanceSceneDataBuffers).InstanceLightShadowUVBias.ArrayMax;
  auVar21 = (uchar  [8])(lVar8 * 0x10);
  if (auVar21 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_a0,"STAT_ProxyInstanceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar9,
                          L"Nanite Proxy Instance Memory","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_1a0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1f0 = FVar2;
      local_1a0.StatData.Pad = auVar21;
      local_1a0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_1a0);
      FStatsTrace::Add(&local_1f0,lVar8 * -0x10);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  lVar8 = (longlong)(this->InstanceSceneDataBuffers).InstanceLocalBounds.ArrayMax;
  auVar21 = (uchar  [8])(lVar8 * 0x18);
  if (auVar21 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_98,"STAT_ProxyInstanceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar9,
                          L"Nanite Proxy Instance Memory","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_190.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1e8 = FVar2;
      local_190.StatData.Pad = auVar21;
      local_190.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_190);
      FStatsTrace::Add(&local_1e8,lVar8 * -0x18);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  lVar8 = (longlong)(this->InstanceSceneDataBuffers).InstanceHierarchyOffset.ArrayMax;
  auVar21 = (uchar  [8])(lVar8 * 4);
  if (auVar21 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_90,"STAT_ProxyInstanceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar9,
                          L"Nanite Proxy Instance Memory","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_180.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1e0 = FVar2;
      local_180.StatData.Pad = auVar21;
      local_180.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_180);
      FStatsTrace::Add(&local_1e0,lVar8 * -4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  local_res10 = 0;
  iVar5 = FInstanceSceneDataBuffers::GetNumInstances
                    (&this->InstanceSceneDataBuffers,(FAccessTag)0x0);
  if (iVar5 != 0) {
    FVar13 = StatPtr_STAT_InstanceDataInstanceCount;
    if (StatPtr_STAT_InstanceDataInstanceCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceDataInstanceCount>)0x0) {
      pFVar9 = ::FName::FName(&local_88,"STAT_InstanceDataInstanceCount");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_InstanceDataInstanceCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceDataInstanceCount,
                          *pFVar9,L"Total Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar13;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_170.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1d8 = FVar2;
      local_170.StatData.Pad = (uchar  [8])(longlong)iVar5;
      local_170.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_170);
      FStatsTrace::Add(&local_1d8,-(longlong)iVar5);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  iVar6 = 0;
  if ((uVar1 & 4) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar14 = StatPtr_STAT_InstanceHasDynamicCount;
    if (StatPtr_STAT_InstanceHasDynamicCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasDynamicCount>)0x0) {
      pFVar9 = ::FName::FName(&local_80,"STAT_InstanceHasDynamicCount");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasDynamicCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasDynamicCount,*pFVar9
                          ,L"Dynamic Data Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar14;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_160.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1d0 = FVar2;
      local_160.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_160.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_160);
      FStatsTrace::Add(&local_1d0,-(longlong)iVar6);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  iVar7 = 0;
  iVar6 = iVar7;
  if ((uVar1 & 8) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar15 = StatPtr_STAT_InstanceHasSkinningCount;
    if (StatPtr_STAT_InstanceHasSkinningCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasSkinningCount>)0x0) {
      pFVar9 = ::FName::FName(local_50,"STAT_InstanceHasSkinningCount");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasSkinningCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasSkinningCount,
                          *pFVar9,L"Skinning Data Instances","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar15;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_150.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1c8 = FVar2;
      local_150.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_150.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_150);
      FStatsTrace::Add(&local_1c8,-(longlong)iVar6);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  iVar6 = iVar7;
  if ((uVar1 & 0x10) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar16 = StatPtr_STAT_InstanceHasLMSMBiasCount;
    if (StatPtr_STAT_InstanceHasLMSMBiasCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasLMSMBiasCount>)0x0) {
      pFVar9 = ::FName::FName(local_68,"STAT_InstanceHasLMSMBiasCount");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasLMSMBiasCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasLMSMBiasCount,
                          *pFVar9,L"LMSM Data Instances","STATGROUP_InstanceData","STATCAT_Advanced"
                          ,L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar16;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_140.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1c0 = FVar2;
      local_140.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_140.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_140);
      FStatsTrace::Add(&local_1c0,-(longlong)iVar6);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  iVar6 = iVar7;
  if ((uVar1 & 2) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_InstanceHasCustomDataCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_InstanceHasCustomDataCount,1> *)
                        &StatPtr_STAT_InstanceHasCustomDataCount);
    local_res8 = *(FName *)(TVar17.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_res8,Subtract,(longlong)iVar6,false);
  }
  iVar6 = iVar7;
  if ((uVar1 & 1) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar18 = StatPtr_STAT_InstanceHasRandomCount;
    if (StatPtr_STAT_InstanceHasRandomCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasRandomCount>)0x0) {
      pFVar9 = ::FName::FName(&local_58,"STAT_InstanceHasRandomCount");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasRandomCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasRandomCount,*pFVar9,
                          L"Random Data Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar18;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_130.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1b8 = FVar2;
      local_130.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_130.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_130);
      FStatsTrace::Add(&local_1b8,-(longlong)iVar6);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  iVar6 = iVar7;
  if ((uVar1 & 0x20) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar19 = StatPtr_STAT_InstanceHasLocalBounds;
    if (StatPtr_STAT_InstanceHasLocalBounds ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasLocalBounds>)0x0) {
      pFVar9 = ::FName::FName(&local_78,"STAT_InstanceHasLocalBounds");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasLocalBounds>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasLocalBounds,*pFVar9,
                          L"Local Bounds Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar19;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_120.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1b0 = FVar2;
      local_120.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_120.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_120);
      FStatsTrace::Add(&local_1b0,-(longlong)iVar6);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if ((uVar1 & 0x40) != 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 0) {
    FVar20 = StatPtr_STAT_InstanceHasHierarchyOffset;
    if (StatPtr_STAT_InstanceHasHierarchyOffset ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasHierarchyOffset>)0x0) {
      pFVar9 = ::FName::FName(&local_70,"STAT_InstanceHasHierarchyOffset");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasHierarchyOffset>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasHierarchyOffset,
                          *pFVar9,L"Hierarchy Offset Instances","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar20;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar2;
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_110.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_1a8 = FVar2;
      local_110.StatData.Pad = (uchar  [8])(longlong)iVar7;
      local_110.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_110);
      FStatsTrace::Add(&local_1a8,-(longlong)iVar7);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  return;
}

// GeInstanceSceneDataBuffers @ 147cf9290

FInstanceSceneDataBuffers * __thiscall
FInstanceDataSceneProxy::GeInstanceSceneDataBuffers(FInstanceDataSceneProxy *this)

{
  return &this->InstanceSceneDataBuffers;
}

// GetLegacyInstanceBuffer @ 147d08d60

FStaticMeshInstanceBuffer * __thiscall
FInstanceDataSceneProxy::GetLegacyInstanceBuffer(FInstanceDataSceneProxy *this)

{
  return (FStaticMeshInstanceBuffer *)0x0;
}

// GetUpdateTaskInfo @ 147d10050

FInstanceDataUpdateTaskInfo * __thiscall
FInstanceDataSceneProxy::GetUpdateTaskInfo(FInstanceDataSceneProxy *this)

{
  return (FInstanceDataUpdateTaskInfo *)0x0;
}

// IncStatCounters @ 147d14600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInstanceDataSceneProxy::IncStatCounters(FInstanceDataSceneProxy *this)

{
  ushort uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_InstanceDataInstanceCount> FVar12;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasDynamicCount> FVar13;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasSkinningCount> FVar14;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasLMSMBiasCount> FVar15;
  TStatId TVar16;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasRandomCount> FVar17;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasLocalBounds> FVar18;
  FThreadSafeStaticStat<FStat_STAT_InstanceHasHierarchyOffset> FVar19;
  uchar auVar20 [8];
  FName local_res8;
  undefined8 local_res10;
  FName local_res18;
  FName local_res20;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FStatMessage local_1a0;
  FStatMessage local_190;
  FStatMessage local_180;
  FStatMessage local_170;
  FStatMessage local_160;
  FStatMessage local_150;
  FStatMessage local_140;
  FStatMessage local_130;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68 [2];
  FName local_58;
  FName local_50 [2];
  
  if (((this->InstanceSceneDataBuffers).CurrentWriterTag.Value != (atomic<unsigned_int>)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = (this->InstanceSceneDataBuffers).Flags.Packed;
  auVar20 = (uchar  [8])
            ((longlong)(this->InstanceSceneDataBuffers).InstanceToPrimitiveRelative.ArrayMax * 0x30)
  ;
  if (auVar20 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_c0,"STAT_ProxyInstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar8,
                         L"Nanite Proxy Instance Memory","STATGROUP_InstanceData","STATCAT_Advanced"
                         ,L"InstanceData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_100.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res8 = FVar2;
      local_100.StatData.Pad = auVar20;
      local_100.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_100);
      FStatsTrace::Add(&local_res8,(long64)auVar20);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  auVar20 = (uchar  [8])
            ((longlong)(this->InstanceSceneDataBuffers).PrevInstanceToPrimitiveRelative.ArrayMax *
            0x30);
  if (auVar20 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_b8,"STAT_ProxyInstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar8,
                         L"Nanite Proxy Instance Memory","STATGROUP_InstanceData","STATCAT_Advanced"
                         ,L"InstanceData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_f0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res18 = FVar2;
      local_f0.StatData.Pad = auVar20;
      local_f0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_f0);
      FStatsTrace::Add(&local_res18,(long64)auVar20);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  auVar20 = (uchar  [8])
            ((longlong)(this->InstanceSceneDataBuffers).InstanceCustomData.ArrayMax << 2);
  if (auVar20 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_b0,"STAT_ProxyInstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar8,
                         L"Nanite Proxy Instance Memory","STATGROUP_InstanceData","STATCAT_Advanced"
                         ,L"InstanceData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_e0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res20 = FVar2;
      local_e0.StatData.Pad = auVar20;
      local_e0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_e0);
      FStatsTrace::Add(&local_res20,(long64)auVar20);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  auVar20 = (uchar  [8])((longlong)(this->InstanceSceneDataBuffers).InstanceRandomIDs.ArrayMax << 2)
  ;
  if (auVar20 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_a8,"STAT_ProxyInstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar8,
                         L"Nanite Proxy Instance Memory","STATGROUP_InstanceData","STATCAT_Advanced"
                         ,L"InstanceData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_d0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1f8 = FVar2;
      local_d0.StatData.Pad = auVar20;
      local_d0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_d0);
      FStatsTrace::Add(&local_1f8,(long64)auVar20);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  auVar20 = (uchar  [8])
            ((longlong)(this->InstanceSceneDataBuffers).InstanceLightShadowUVBias.ArrayMax << 4);
  if (auVar20 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_a0,"STAT_ProxyInstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar8,
                         L"Nanite Proxy Instance Memory","STATGROUP_InstanceData","STATCAT_Advanced"
                         ,L"InstanceData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_1a0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1f0 = FVar2;
      local_1a0.StatData.Pad = auVar20;
      local_1a0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_1a0);
      FStatsTrace::Add(&local_1f0,(long64)auVar20);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  auVar20 = (uchar  [8])
            ((longlong)(this->InstanceSceneDataBuffers).InstanceLocalBounds.ArrayMax * 0x18);
  if (auVar20 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_98,"STAT_ProxyInstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar8,
                         L"Nanite Proxy Instance Memory","STATGROUP_InstanceData","STATCAT_Advanced"
                         ,L"InstanceData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_190.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1e8 = FVar2;
      local_190.StatData.Pad = auVar20;
      local_190.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_190);
      FStatsTrace::Add(&local_1e8,(long64)auVar20);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  auVar20 = (uchar  [8])
            ((longlong)(this->InstanceSceneDataBuffers).InstanceHierarchyOffset.ArrayMax << 2);
  if (auVar20 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_ProxyInstanceMemory;
    if (StatPtr_STAT_ProxyInstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_90,"STAT_ProxyInstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_ProxyInstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProxyInstanceMemory,*pFVar8,
                         L"Nanite Proxy Instance Memory","STATGROUP_InstanceData","STATCAT_Advanced"
                         ,L"InstanceData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_180.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1e0 = FVar2;
      local_180.StatData.Pad = auVar20;
      local_180.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_180);
      FStatsTrace::Add(&local_1e0,(long64)auVar20);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  local_res10 = 0;
  iVar5 = FInstanceSceneDataBuffers::GetNumInstances
                    (&this->InstanceSceneDataBuffers,(FAccessTag)0x0);
  if (iVar5 != 0) {
    FVar12 = StatPtr_STAT_InstanceDataInstanceCount;
    if (StatPtr_STAT_InstanceDataInstanceCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceDataInstanceCount>)0x0) {
      pFVar8 = ::FName::FName(&local_88,"STAT_InstanceDataInstanceCount");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_InstanceDataInstanceCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceDataInstanceCount,
                          *pFVar8,L"Total Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar12;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_170.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1d8 = FVar2;
      local_170.StatData.Pad = (uchar  [8])(longlong)iVar5;
      local_170.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_170);
      FStatsTrace::Add(&local_1d8,(longlong)iVar5);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  iVar6 = 0;
  if ((uVar1 & 4) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar13 = StatPtr_STAT_InstanceHasDynamicCount;
    if (StatPtr_STAT_InstanceHasDynamicCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasDynamicCount>)0x0) {
      pFVar8 = ::FName::FName(&local_80,"STAT_InstanceHasDynamicCount");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasDynamicCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasDynamicCount,*pFVar8
                          ,L"Dynamic Data Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar13;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_160.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1d0 = FVar2;
      local_160.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_160.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_160);
      FStatsTrace::Add(&local_1d0,(longlong)iVar6);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  iVar7 = 0;
  iVar6 = iVar7;
  if ((uVar1 & 8) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar14 = StatPtr_STAT_InstanceHasSkinningCount;
    if (StatPtr_STAT_InstanceHasSkinningCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasSkinningCount>)0x0) {
      pFVar8 = ::FName::FName(local_50,"STAT_InstanceHasSkinningCount");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasSkinningCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasSkinningCount,
                          *pFVar8,L"Skinning Data Instances","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar14;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_150.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1c8 = FVar2;
      local_150.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_150.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_150);
      FStatsTrace::Add(&local_1c8,(longlong)iVar6);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  iVar6 = iVar7;
  if ((uVar1 & 0x10) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar15 = StatPtr_STAT_InstanceHasLMSMBiasCount;
    if (StatPtr_STAT_InstanceHasLMSMBiasCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasLMSMBiasCount>)0x0) {
      pFVar8 = ::FName::FName(local_68,"STAT_InstanceHasLMSMBiasCount");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasLMSMBiasCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasLMSMBiasCount,
                          *pFVar8,L"LMSM Data Instances","STATGROUP_InstanceData","STATCAT_Advanced"
                          ,L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar15;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_140.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1c0 = FVar2;
      local_140.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_140.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_140);
      FStatsTrace::Add(&local_1c0,(longlong)iVar6);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  iVar6 = iVar7;
  if ((uVar1 & 2) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    TVar16 = FThreadSafeStaticStatInner<FStat_STAT_InstanceHasCustomDataCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_InstanceHasCustomDataCount,1> *)
                        &StatPtr_STAT_InstanceHasCustomDataCount);
    local_res8 = *(FName *)(TVar16.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_res8,Add,(longlong)iVar6,false);
  }
  iVar6 = iVar7;
  if ((uVar1 & 1) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar17 = StatPtr_STAT_InstanceHasRandomCount;
    if (StatPtr_STAT_InstanceHasRandomCount ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasRandomCount>)0x0) {
      pFVar8 = ::FName::FName(&local_58,"STAT_InstanceHasRandomCount");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasRandomCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasRandomCount,*pFVar8,
                          L"Random Data Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar17;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_130.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1b8 = FVar2;
      local_130.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_130.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_130);
      FStatsTrace::Add(&local_1b8,(longlong)iVar6);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  iVar6 = iVar7;
  if ((uVar1 & 0x20) != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    FVar18 = StatPtr_STAT_InstanceHasLocalBounds;
    if (StatPtr_STAT_InstanceHasLocalBounds ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasLocalBounds>)0x0) {
      pFVar8 = ::FName::FName(&local_78,"STAT_InstanceHasLocalBounds");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasLocalBounds>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasLocalBounds,*pFVar8,
                          L"Local Bounds Instances","STATGROUP_InstanceData","STATCAT_Advanced",
                          L"InstanceData",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar18;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_120.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1b0 = FVar2;
      local_120.StatData.Pad = (uchar  [8])(longlong)iVar6;
      local_120.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_120);
      FStatsTrace::Add(&local_1b0,(longlong)iVar6);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  if ((uVar1 & 0x40) != 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 0) {
    FVar19 = StatPtr_STAT_InstanceHasHierarchyOffset;
    if (StatPtr_STAT_InstanceHasHierarchyOffset ==
        (FThreadSafeStaticStat<FStat_STAT_InstanceHasHierarchyOffset>)0x0) {
      pFVar8 = ::FName::FName(&local_70,"STAT_InstanceHasHierarchyOffset");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_InstanceHasHierarchyOffset>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceHasHierarchyOffset,
                          *pFVar8,L"Hierarchy Offset Instances","STATGROUP_InstanceData",
                          "STATCAT_Advanced",L"InstanceData",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar19;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar2;
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_110.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_1a8 = FVar2;
      local_110.StatData.Pad = (uchar  [8])(longlong)iVar7;
      local_110.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_110);
      FStatsTrace::Add(&local_1a8,(longlong)iVar7);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  return;
}

