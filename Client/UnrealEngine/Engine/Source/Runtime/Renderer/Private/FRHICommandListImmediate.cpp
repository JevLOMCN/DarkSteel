// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// SubmitAndBlockUntilGPUIdle @ 144835ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(FRHICommandListImmediate *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_res10.s,
                            "STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                ::__l2::StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush,*pFVar5,
               L"STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush;
  if (_StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                         ::__l2::StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush,*pFVar5,
                        L"STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                   ,0x133e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_144836045;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_144836045:
  ImmediateFlush(this,FlushRHIThread,None);
  (**(code **)(GDynamicRHI->_padding_ + 0x340))();
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res10);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  return;
}

// FlushResources @ 1454eff80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHICommandListImmediate::FlushResources(FRHICommandListImmediate *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FRHICommandListImmediate::FlushResources(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FRHICommandListImmediate::FlushResources(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FRHICommandListImmediate::FlushResources(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_RHIMETHOD_FlushResources_Flush = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_RHIMETHOD_FlushResources_Flush");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FRHICommandListImmediate::FlushResources(void)___ptr64'::__l2
                ::StatPtr_STAT_RHIMETHOD_FlushResources_Flush,*pFVar5,
               L"STAT_RHIMETHOD_FlushResources_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FRHICommandListImmediate::FlushResources(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_RHIMETHOD_FlushResources_Flush;
  if (_StatPtr_STAT_RHIMETHOD_FlushResources_Flush == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_RHIMETHOD_FlushResources_Flush");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_void___cdecl_FRHICommandListImmediate::FlushResources(void)___ptr64'
                         ::__l2::StatPtr_STAT_RHIMETHOD_FlushResources_Flush,*pFVar5,
                        L"STAT_RHIMETHOD_FlushResources_Flush","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                   ,0x1330);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1454f0105;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1454f0105:
  ImmediateFlush(this,FlushRHIThread,None);
  (**(code **)(GDynamicRHI->_padding_ + 0x300))();
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res10);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  return;
}

// LockTexture2D @ 1457188e0

void * __thiscall
FRHICommandListImmediate::LockTexture2D
          (FRHICommandListImmediate *this,FRHITexture *param_1,uint param_2,
          EResourceLockMode param_3,uint *param_4,bool param_5,bool param_6,ulong64 *param_7)

{
  FMemScope local_res10;
  FLLMScope local_res18 [5];
  FMemScope local_58;
  void *local_50;
  ulong64 local_48;
  uint local_40;
  FRHITexture *local_38;
  undefined8 local_30;
  uint local_28;
  EResourceLockMode local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  FLLMScope::FLLMScope(local_res18,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_58,Textures,true);
  local_30 = 0;
  local_1c = param_5;
  local_1b = param_6;
  local_38 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  FLLMScope::FLLMScope((FLLMScope *)&param_5,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,&local_50,this,&local_38);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope((FLLMScope *)&param_5);
  *param_4 = local_40;
  if (param_7 != (ulong64 *)0x0) {
    *param_7 = local_48;
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res18);
  return local_50;
}

// UnlockTexture2D @ 145726510

void __thiscall
FRHICommandListImmediate::UnlockTexture2D
          (FRHICommandListImmediate *this,FRHITexture *param_1,uint param_2,bool param_3,
          bool param_4)

{
  FMemScope local_res10 [3];
  FRHITexture *local_28;
  undefined8 local_20;
  uint local_18;
  undefined4 local_10;
  undefined1 local_c;
  bool local_b;
  
  local_20 = 0;
  local_10 = 3;
  local_b = param_4;
  local_28 = param_1;
  local_18 = param_2;
  local_c = param_3;
  FLLMScope::FLLMScope((FLLMScope *)&param_4,Textures,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,this,&local_28);
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope((FLLMScope *)&param_4);
  return;
}

