// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~IFileCacheHandle @ 14158a450

void __thiscall IFileCacheHandle::~IFileCacheHandle(IFileCacheHandle *this)

{
  *this = (IFileCacheHandle)&___7IFileCacheHandle__6B_;
  return;
}

// CreateFileCacheHandle @ 1415ba100

/* WARNING: Enum "Type": Some values do not have unique names */

IFileCacheHandle * __cdecl
IFileCacheHandle::CreateFileCacheHandle(IAsyncReadFileHandle *param_1,long64 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SFC_CreateHandle> FVar6;
  FFileCacheHandle *this;
  FFileCacheHandle *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  pFVar7 = (FFileCacheHandle *)0x0;
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_SFC_CreateHandle;
  if (StatPtr_STAT_SFC_CreateHandle == (FThreadSafeStaticStat<FStat_STAT_SFC_CreateHandle>)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_SFC_CreateHandle");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SFC_CreateHandle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SFC_CreateHandle,*pFVar5,
                       L"Create Handle","STATGROUP_SFC","STATCAT_Advanced",L"Streaming File Cache",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                   ,0x3b9);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1415ba269;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1415ba269:
  if (param_1 != (IAsyncReadFileHandle *)0x0) {
    this = ::operator_new(0x78);
    if (this != (FFileCacheHandle *)0x0) {
      pFVar7 = FFileCacheHandle::FFileCacheHandle(this,param_1,param_2);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (IFileCacheHandle *)pFVar7;
}

// CreateFileCacheHandle @ 1415ba390

/* WARNING: Enum "Type": Some values do not have unique names */

IFileCacheHandle * __cdecl IFileCacheHandle::CreateFileCacheHandle(wchar_t *param_1,long64 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SFC_CreateHandle> FVar6;
  FPlatformFileManager *this;
  IPlatformFile *pIVar7;
  IAsyncReadFileHandle *pIVar8;
  FFileCacheHandle *this_00;
  FFileCacheHandle *pFVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  pFVar9 = (FFileCacheHandle *)0x0;
  FVar13.Value = 0;
  FVar6 = StatPtr_STAT_SFC_CreateHandle;
  if (StatPtr_STAT_SFC_CreateHandle == (FThreadSafeStaticStat<FStat_STAT_SFC_CreateHandle>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_SFC_CreateHandle");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SFC_CreateHandle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SFC_CreateHandle,*pFVar5,
                       L"Create Handle","STATGROUP_SFC","STATCAT_Advanced",L"Streaming File Cache",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar11.Value;
        local_res18.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                   ,0x3ac);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_1415ba4f7;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_1415ba4f7:
  this = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this);
  pIVar8 = (IAsyncReadFileHandle *)(**(code **)((longlong)*pIVar7 + 400))(pIVar7,param_1);
  if (pIVar8 != (IAsyncReadFileHandle *)0x0) {
    this_00 = ::operator_new(0x78);
    if (this_00 != (FFileCacheHandle *)0x0) {
      pFVar9 = FFileCacheHandle::FFileCacheHandle(this_00,pIVar8,param_2);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (IFileCacheHandle *)pFVar9;
}

// EvictAll @ 1415c0f40

void __cdecl IFileCacheHandle::EvictAll(void)

{
  FFileCache *this;
  
  this = GetCache();
  FFileCache::EvictAll(this,(FFileCacheHandle *)0x0);
  return;
}

// GetFileCacheSize @ 1415c6ec0

long64 __cdecl IFileCacheHandle::GetFileCacheSize(void)

{
  FFileCache *pFVar1;
  
  pFVar1 = GetCache();
  return pFVar1->SizeInBytes;
}

