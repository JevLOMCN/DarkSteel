// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// Get @ 14a6de100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

IEnhancedInputModule * __cdecl IEnhancedInputModule::Get(void)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  IEnhancedInputModule *pIVar5;
  uint uVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FModuleManager *this_01;
  FNameEntryId FVar9;
  FNameEntryId FVar10;
  FName FVar11;
  int *piVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  FVar10.Value = 0;
  if ((*piVar12 <
       `public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_IEnhancedInputModule_Get = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_IEnhancedInputModule_Get");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
                ::__l2::StatPtr_STAT_IEnhancedInputModule_Get,*pFVar7,
               L"STAT_IEnhancedInputModule_Get","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_IEnhancedInputModule_Get;
  if (_StatPtr_STAT_IEnhancedInputModule_Get == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_IEnhancedInputModule_Get");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
                         ::__l2::StatPtr_STAT_IEnhancedInputModule_Get,*pFVar7,
                        L"STAT_IEnhancedInputModule_Get","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar11.ComparisonIndex.Value;
  uVar6 = FVar11.Number;
  if ((FVar9.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\EnhancedInputModule.h"
                   ,0x27);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar9.Value;
      goto LAB_14a6de285;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14a6de285:
  if ((*piVar12 <
       `public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'::
     __l2::_thread_safe_static_guard_1__ == -1)) {
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"EnhancedInput");
    FVar1 = *pFVar7;
    this_01 = FModuleManager::Get();
    `public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'::
    __l2::Singleton = (IEnhancedInputModule *)FModuleManager::LoadModuleChecked(this_01,FVar1);
    _Init_thread_footer(&`public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  pIVar5 = `public:_static_class_IEnhancedInputModule&___ptr64___cdecl_IEnhancedInputModule::Get(void)'
           ::__l2::Singleton;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_28);
      piVar12 = &this->ScopeCount;
      *piVar12 = *piVar12 + -1;
      if (*piVar12 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return pIVar5;
}

