// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// <lambda_invoker_cdecl> @ 14160c050

/* WARNING: Removing unreachable block (ram,0x0001416352d4) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FGenericStatsUpdater::EnqueueUpdateStats'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  FName FVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  ushort uVar7;
  FName *pFVar8;
  TStatId TVar9;
  FThreadSafeStaticStat<FStat_STAT_TotalPhysical> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_TotalVirtual> FVar13;
  FThreadSafeStaticStat<FStat_STAT_PageSize> FVar14;
  FThreadSafeStaticStat<FStat_STAT_TotalPhysicalGB> FVar15;
  FThreadSafeStaticStat<FStat_STAT_AvailablePhysical> FVar16;
  FThreadSafeStaticStat<FStat_STAT_AvailableVirtual> FVar17;
  FThreadSafeStaticStat<FStat_STAT_UsedPhysical> FVar18;
  FThreadSafeStaticStat<FStat_STAT_PeakUsedPhysical> FVar19;
  FThreadSafeStaticStat<FStat_STAT_UsedVirtual> FVar20;
  FThreadSafeStaticStat<FStat_STAT_PeakUsedVirtual> FVar21;
  uchar auVar22 [8];
  FName FStackX_8;
  FSourceLocation FStack_e8;
  FName FStack_c8;
  byte bStack_c0;
  FPlatformMemoryStats FStack_b8;
  
  if (((byte)`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.
             State & 1) == 0) {
    `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.State =
         `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.State
         | 1;
    LOCK();
    UNLOCK();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
       _thread_safe_static_guard_0__ == -1)) {
      `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
      StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats =
           (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)_::_5_::FStat_STAT_FGenericStatsUpdater_DoUpdateStats>
            )0x0;
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_FGenericStatsUpdater_DoUpdateStats");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
                  StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats,*pFVar8,
                 L"STAT_FGenericStatsUpdater_DoUpdateStats","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::
                           __l5::_thread_safe_static_guard_0__);
    }
    TVar9.StatIdPtr =
         (TStatIdData *)
         `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
         StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats;
    if (`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
        StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)_::_5_::FStat_STAT_FGenericStatsUpdater_DoUpdateStats>
         )0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_FGenericStatsUpdater_DoUpdateStats");
      TVar9.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5
                       ::StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats,*pFVar8,
                      L"STAT_FGenericStatsUpdater_DoUpdateStats","STATGROUP_Quick",
                      "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FStack_e8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMemory.cpp"
    ;
    FStack_e8.Impl._0_8_ = (uchar  [8])0x400000077;
    FStack_e8.Impl._Function = "void __cdecl FGenericStatsUpdater::DoUpdateStats(void)";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&FStack_c8,TVar9,CycleStat|ClearEveryFrame,false,&FStack_e8);
    FWindowsPlatformMemory::GetStats(&FStack_b8);
    FVar10 = StatPtr_STAT_TotalPhysical;
    if (StatPtr_STAT_TotalPhysical == (FThreadSafeStaticStat<FStat_STAT_TotalPhysical>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_TotalPhysical");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_TotalPhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysical,*pFVar8,
                          L"Total Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar10;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar13 = StatPtr_STAT_TotalVirtual;
    if (StatPtr_STAT_TotalVirtual == (FThreadSafeStaticStat<FStat_STAT_TotalVirtual>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_TotalVirtual");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_TotalVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalVirtual,*pFVar8,
                          L"Total Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar13;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar14 = StatPtr_STAT_PageSize;
    if (StatPtr_STAT_PageSize == (FThreadSafeStaticStat<FStat_STAT_PageSize>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_PageSize");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_PageSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageSize,*pFVar8,L"Page Size",
                          "STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar14;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar15 = StatPtr_STAT_TotalPhysicalGB;
    if (StatPtr_STAT_TotalPhysicalGB == (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalGB>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_TotalPhysicalGB");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalGB>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysicalGB,*pFVar8,
                          L"Total Physical GB","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar15;
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    auVar22[0] = (undefined1)FStack_b8._padding_;
    auVar22[1] = FStack_b8._padding_._1_1_;
    auVar22[2] = FStack_b8._padding_._2_1_;
    auVar22[3] = FStack_b8._padding_._3_1_;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_e8.Impl._0_8_ = auVar22;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,(long64)auVar22);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar16 = StatPtr_STAT_AvailablePhysical;
    if (StatPtr_STAT_AvailablePhysical == (FThreadSafeStaticStat<FStat_STAT_AvailablePhysical>)0x0)
    {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_AvailablePhysical");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_AvailablePhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AvailablePhysical,*pFVar8,
                          L"Available Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar16;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar17 = StatPtr_STAT_AvailableVirtual;
    if (StatPtr_STAT_AvailableVirtual == (FThreadSafeStaticStat<FStat_STAT_AvailableVirtual>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_AvailableVirtual");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_AvailableVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AvailableVirtual,*pFVar8,
                          L"Available Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar17;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar18 = StatPtr_STAT_UsedPhysical;
    if (StatPtr_STAT_UsedPhysical == (FThreadSafeStaticStat<FStat_STAT_UsedPhysical>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_UsedPhysical");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_UsedPhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UsedPhysical,*pFVar8,
                          L"Used Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar18;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar19 = StatPtr_STAT_PeakUsedPhysical;
    if (StatPtr_STAT_PeakUsedPhysical == (FThreadSafeStaticStat<FStat_STAT_PeakUsedPhysical>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_PeakUsedPhysical");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_PeakUsedPhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PeakUsedPhysical,*pFVar8,
                          L"Peak Used Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar19;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar20 = StatPtr_STAT_UsedVirtual;
    if (StatPtr_STAT_UsedVirtual == (FThreadSafeStaticStat<FStat_STAT_UsedVirtual>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_UsedVirtual");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_UsedVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UsedVirtual,*pFVar8,
                          L"Used Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar20;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar21 = StatPtr_STAT_PeakUsedVirtual;
    if (StatPtr_STAT_PeakUsedVirtual == (FThreadSafeStaticStat<FStat_STAT_PeakUsedVirtual>)0x0) {
      pFVar8 = ::FName::FName(&FStackX_8,"STAT_PeakUsedVirtual");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_PeakUsedVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PeakUsedVirtual,*pFVar8,
                          L"Peak Used Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = FStack_b8._padding_;
    FVar1 = *(FName *)FVar21;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = FStack_b8._padding_;
      FStack_b8._padding_._0_4_ = (undefined4)lVar4;
      FStack_b8._padding_._4_4_ = SUB84(lVar4,4);
      FStack_e8.Impl._Line = (undefined4)FStack_b8._padding_;
      FStack_e8.Impl._Column = FStack_b8._padding_._4_4_;
      FStack_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      FStackX_8 = FVar1;
      FStack_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&FStack_e8);
      FStatsTrace::Set(&FStackX_8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    if ((__GTraceCounterPlatformMemoryTotalPhysical.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryTotalPhysical.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryTotalPhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryTotalPhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryTotalPhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryTotalPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryTotalPhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryTotalPhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryTotalPhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryTotalPhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryTotalVirtual.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryTotalVirtual.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryTotalVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryTotalVirtual.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryTotalVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryTotalVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryTotalVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryTotalVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryTotalVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryTotalVirtual.Value);
    }
    if ((__GTraceCounterPlatformMemoryPageSize.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryPageSize.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryPageSize.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryPageSize.CounterName,TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryPageSize.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryPageSize.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryPageSize.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryPageSize.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryPageSize.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryPageSize.Value);
    }
    if ((__GTraceCounterPlatformMemoryAvailablePhysical.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryAvailablePhysical.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryAvailablePhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryAvailablePhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryAvailablePhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryAvailablePhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryAvailablePhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryAvailablePhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryAvailablePhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryAvailablePhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryAvailableVirtual.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryAvailableVirtual.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryAvailableVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryAvailableVirtual.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryAvailableVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryAvailableVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryAvailableVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryAvailableVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryAvailableVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryAvailableVirtual.Value);
    }
    if ((__GTraceCounterPlatformMemoryUsedPhysical.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryUsedPhysical.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryUsedPhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryUsedPhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryUsedPhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryUsedPhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryUsedPhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryUsedPhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryPeakUsedPhysical.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryPeakUsedPhysical.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryPeakUsedPhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryUsedVirtual.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryUsedVirtual.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryUsedVirtual.CounterName,TraceCounterType_Int
                           ,__GTraceCounterPlatformMemoryUsedVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryUsedVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryUsedVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryUsedVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryUsedVirtual.Value);
    }
    if ((__GTraceCounterPlatformMemoryPeakUsedVirtual.Value != FStack_b8._padding_) &&
       (__GTraceCounterPlatformMemoryPeakUsedVirtual.Value = FStack_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryPeakUsedVirtual.Value);
    }
    FWindowsPlatformMemory::InternalUpdateStats(&FStack_b8);
    LOCK();
    aVar3 = `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.
            State + -1;
    UNLOCK();
    bVar2 = (byte)`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::
                  Mutex.State & 2;
    `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.State =
         aVar3;
    if (bVar2 != 0) {
      UE::FMutex::WakeWaitingThread
                (&`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::
                  Mutex);
    }
    if ((((bStack_c0 & 1) != 0) &&
        (bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar6)) &&
       (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
    if ((bStack_c0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((bStack_c0 & 4) != 0) {
      FThreadStats::AddMessage(FStack_c8,CycleScopeEnd);
    }
  }
  return;
}

// DoUpdateStats @ 1416352b0

/* WARNING: Removing unreachable block (ram,0x0001416352d4) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericStatsUpdater::DoUpdateStats(void)

{
  FName FVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  ushort uVar7;
  FName *pFVar8;
  TStatId TVar9;
  FThreadSafeStaticStat<FStat_STAT_TotalPhysical> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_TotalVirtual> FVar13;
  FThreadSafeStaticStat<FStat_STAT_PageSize> FVar14;
  FThreadSafeStaticStat<FStat_STAT_TotalPhysicalGB> FVar15;
  FThreadSafeStaticStat<FStat_STAT_AvailablePhysical> FVar16;
  FThreadSafeStaticStat<FStat_STAT_AvailableVirtual> FVar17;
  FThreadSafeStaticStat<FStat_STAT_UsedPhysical> FVar18;
  FThreadSafeStaticStat<FStat_STAT_PeakUsedPhysical> FVar19;
  FThreadSafeStaticStat<FStat_STAT_UsedVirtual> FVar20;
  FThreadSafeStaticStat<FStat_STAT_PeakUsedVirtual> FVar21;
  uchar auVar22 [8];
  FName local_res8;
  FSourceLocation local_e8;
  FName local_c8;
  byte local_c0;
  FPlatformMemoryStats local_b8;
  
  if (((byte)`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.
             State & 1) == 0) {
    `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.State =
         `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.State
         | 1;
    LOCK();
    UNLOCK();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
       _thread_safe_static_guard_0__ == -1)) {
      `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
      StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats =
           (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)_::_5_::FStat_STAT_FGenericStatsUpdater_DoUpdateStats>
            )0x0;
      pFVar8 = ::FName::FName(&local_res8,"STAT_FGenericStatsUpdater_DoUpdateStats");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
                  StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats,*pFVar8,
                 L"STAT_FGenericStatsUpdater_DoUpdateStats","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::
                           __l5::_thread_safe_static_guard_0__);
    }
    TVar9.StatIdPtr =
         (TStatIdData *)
         `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
         StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats;
    if (`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5::
        StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)_::_5_::FStat_STAT_FGenericStatsUpdater_DoUpdateStats>
         )0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_FGenericStatsUpdater_DoUpdateStats");
      TVar9.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l5
                       ::StatPtr_STAT_FGenericStatsUpdater_DoUpdateStats,*pFVar8,
                      L"STAT_FGenericStatsUpdater_DoUpdateStats","STATGROUP_Quick",
                      "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_e8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMemory.cpp"
    ;
    local_e8.Impl._0_8_ = (uchar  [8])0x400000077;
    local_e8.Impl._Function = "void __cdecl FGenericStatsUpdater::DoUpdateStats(void)";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_c8,TVar9,CycleStat|ClearEveryFrame,false,&local_e8);
    FWindowsPlatformMemory::GetStats(&local_b8);
    FVar10 = StatPtr_STAT_TotalPhysical;
    if (StatPtr_STAT_TotalPhysical == (FThreadSafeStaticStat<FStat_STAT_TotalPhysical>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_TotalPhysical");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_TotalPhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysical,*pFVar8,
                          L"Total Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar10;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar13 = StatPtr_STAT_TotalVirtual;
    if (StatPtr_STAT_TotalVirtual == (FThreadSafeStaticStat<FStat_STAT_TotalVirtual>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_TotalVirtual");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_TotalVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalVirtual,*pFVar8,
                          L"Total Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar13;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar14 = StatPtr_STAT_PageSize;
    if (StatPtr_STAT_PageSize == (FThreadSafeStaticStat<FStat_STAT_PageSize>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_PageSize");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_PageSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PageSize,*pFVar8,L"Page Size",
                          "STATGROUP_MemoryPlatform","STATCAT_Advanced",L"Memory Platform",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar14;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar15 = StatPtr_STAT_TotalPhysicalGB;
    if (StatPtr_STAT_TotalPhysicalGB == (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalGB>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_TotalPhysicalGB");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalGB>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysicalGB,*pFVar8,
                          L"Total Physical GB","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar15;
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    auVar22[0] = (undefined1)local_b8._padding_;
    auVar22[1] = local_b8._padding_._1_1_;
    auVar22[2] = local_b8._padding_._2_1_;
    auVar22[3] = local_b8._padding_._3_1_;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_e8.Impl._0_8_ = auVar22;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,(long64)auVar22);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar16 = StatPtr_STAT_AvailablePhysical;
    if (StatPtr_STAT_AvailablePhysical == (FThreadSafeStaticStat<FStat_STAT_AvailablePhysical>)0x0)
    {
      pFVar8 = ::FName::FName(&local_res8,"STAT_AvailablePhysical");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_AvailablePhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AvailablePhysical,*pFVar8,
                          L"Available Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar16;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar17 = StatPtr_STAT_AvailableVirtual;
    if (StatPtr_STAT_AvailableVirtual == (FThreadSafeStaticStat<FStat_STAT_AvailableVirtual>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_AvailableVirtual");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_AvailableVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AvailableVirtual,*pFVar8,
                          L"Available Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar17;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar18 = StatPtr_STAT_UsedPhysical;
    if (StatPtr_STAT_UsedPhysical == (FThreadSafeStaticStat<FStat_STAT_UsedPhysical>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_UsedPhysical");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_UsedPhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UsedPhysical,*pFVar8,
                          L"Used Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar18;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar19 = StatPtr_STAT_PeakUsedPhysical;
    if (StatPtr_STAT_PeakUsedPhysical == (FThreadSafeStaticStat<FStat_STAT_PeakUsedPhysical>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_PeakUsedPhysical");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_PeakUsedPhysical>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PeakUsedPhysical,*pFVar8,
                          L"Peak Used Physical","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar19;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar20 = StatPtr_STAT_UsedVirtual;
    if (StatPtr_STAT_UsedVirtual == (FThreadSafeStaticStat<FStat_STAT_UsedVirtual>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_UsedVirtual");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_UsedVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UsedVirtual,*pFVar8,
                          L"Used Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar20;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar21 = StatPtr_STAT_PeakUsedVirtual;
    if (StatPtr_STAT_PeakUsedVirtual == (FThreadSafeStaticStat<FStat_STAT_PeakUsedVirtual>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_PeakUsedVirtual");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_PeakUsedVirtual>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PeakUsedVirtual,*pFVar8,
                          L"Peak Used Virtual","STATGROUP_MemoryPlatform","STATCAT_Advanced",
                          L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
    }
    lVar4 = local_b8._padding_;
    FVar1 = *(FName *)FVar21;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      lVar5 = local_b8._padding_;
      local_b8._padding_._0_4_ = (undefined4)lVar4;
      local_b8._padding_._4_4_ = SUB84(lVar4,4);
      local_e8.Impl._Line = (undefined4)local_b8._padding_;
      local_e8.Impl._Column = local_b8._padding_._4_4_;
      local_e8.Impl._File = (char *)((ulonglong)FVar1 & 0xffff8fffffffffff | 0x800000000000);
      local_res8 = FVar1;
      local_b8._padding_ = lVar5;
      FThreadStats::AddStatMessage(pFVar11,(FStatMessage *)&local_e8);
      FStatsTrace::Set(&local_res8,lVar4);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    if ((__GTraceCounterPlatformMemoryTotalPhysical.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryTotalPhysical.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryTotalPhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryTotalPhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryTotalPhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryTotalPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryTotalPhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryTotalPhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryTotalPhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryTotalPhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryTotalVirtual.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryTotalVirtual.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryTotalVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryTotalVirtual.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryTotalVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryTotalVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryTotalVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryTotalVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryTotalVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryTotalVirtual.Value);
    }
    if ((__GTraceCounterPlatformMemoryPageSize.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryPageSize.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryPageSize.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryPageSize.CounterName,TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryPageSize.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryPageSize.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryPageSize.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryPageSize.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryPageSize.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryPageSize.Value);
    }
    if ((__GTraceCounterPlatformMemoryAvailablePhysical.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryAvailablePhysical.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryAvailablePhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryAvailablePhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryAvailablePhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryAvailablePhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryAvailablePhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryAvailablePhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryAvailablePhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryAvailablePhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryAvailableVirtual.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryAvailableVirtual.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryAvailableVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryAvailableVirtual.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryAvailableVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryAvailableVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryAvailableVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryAvailableVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryAvailableVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryAvailableVirtual.Value);
    }
    if ((__GTraceCounterPlatformMemoryUsedPhysical.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryUsedPhysical.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryUsedPhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryUsedPhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryUsedPhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryUsedPhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryUsedPhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryUsedPhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryPeakUsedPhysical.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryPeakUsedPhysical.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryPeakUsedPhysical.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryPeakUsedPhysical.Value);
    }
    if ((__GTraceCounterPlatformMemoryUsedVirtual.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryUsedVirtual.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryUsedVirtual.CounterName,TraceCounterType_Int
                           ,__GTraceCounterPlatformMemoryUsedVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryUsedVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryUsedVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryUsedVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryUsedVirtual.Value);
    }
    if ((__GTraceCounterPlatformMemoryPeakUsedVirtual.Value != local_b8._padding_) &&
       (__GTraceCounterPlatformMemoryPeakUsedVirtual.Value = local_b8._padding_,
       -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._2_2_ = 0;
          __GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterPlatformMemoryPeakUsedVirtual.CounterId._0_2_,
                 __GTraceCounterPlatformMemoryPeakUsedVirtual.Value);
    }
    FWindowsPlatformMemory::InternalUpdateStats(&local_b8);
    LOCK();
    aVar3 = `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.
            State + -1;
    UNLOCK();
    bVar2 = (byte)`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::
                  Mutex.State & 2;
    `public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::Mutex.State =
         aVar3;
    if (bVar2 != 0) {
      UE::FMutex::WakeWaitingThread
                (&`public:_static_void___cdecl_FGenericStatsUpdater::DoUpdateStats(void)'::__l2::
                  Mutex);
    }
    if ((((local_c0 & 1) != 0) &&
        (bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar6)) &&
       (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
    if ((local_c0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_c0 & 4) != 0) {
      FThreadStats::AddMessage(local_c8,CycleScopeEnd);
    }
  }
  return;
}

// EnqueueUpdateStats @ 141638460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericStatsUpdater::EnqueueUpdateStats(float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_20 = `FGenericStatsUpdater::EnqueueUpdateStats'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  AsyncTask(AnyBackgroundThreadNormalTask,(TUniqueFunction<void___cdecl(void)> *)local_38);
  return true;
}

