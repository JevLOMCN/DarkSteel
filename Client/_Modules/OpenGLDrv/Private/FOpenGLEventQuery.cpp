// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 4

// FOpenGLEventQuery @ 145be11c0

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLEventQuery * __thiscall FOpenGLEventQuery::FOpenGLEventQuery(FOpenGLEventQuery *this)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  HGLRC pHVar4;
  __GLsync *p_Var5;
  FOpenGLEventQuery *pFVar6;
  
  this->Sync = (__GLsync *)0x0;
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->Sync != (__GLsync *)0x0) {
    (*glDeleteSync)(this->Sync);
    this->Sync = (__GLsync *)0x0;
  }
  p_Var5 = (*glFenceSync)(0x9117,0);
  this->Sync = p_Var5;
  (*glFlush)();
  uVar2 = (*glIsSync)(this->Sync);
  if (uVar2 != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FOpenGL::IsSync(Sync)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x217,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FOpenGLEventQuery *)(*pcVar1)();
      return pFVar6;
    }
  }
  return this;
}

// ~FOpenGLEventQuery @ 145be9730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLEventQuery::~FOpenGLEventQuery(FOpenGLEventQuery *this)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
                    /* WARNING: Could not recover jumptable at 0x000145be97b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glDeleteSync)(this->Sync);
  return;
}

// IssueEvent @ 145c0b0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLEventQuery::IssueEvent(FOpenGLEventQuery *this)

{
  HGLRC pHVar1;
  __GLsync *p_Var2;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->Sync != (__GLsync *)0x0) {
    (*glDeleteSync)(this->Sync);
    this->Sync = (__GLsync *)0x0;
  }
  p_Var2 = (*glFenceSync)(0x9117,0);
  this->Sync = p_Var2;
                    /* WARNING: Could not recover jumptable at 0x000145c0b146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glFlush)();
  return;
}

// WaitForCompletion @ 145c386c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLEventQuery::WaitForCompletion(FOpenGLEventQuery *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  HGLRC pHVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLEventQuery::WaitForCompletion(void)_::_2_::FStat_STAT_FOpenGLEventQuery_WaitForCompletion>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FStaticBasicLogRecord *pFVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FOpenGLEventQuery_WaitForCompletion ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLEventQuery::WaitForCompletion(void)_::_2_::FStat_STAT_FOpenGLEventQuery_WaitForCompletion>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_FOpenGLEventQuery_WaitForCompletion");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FOpenGLEventQuery_WaitForCompletion,
                   *pFVar7,L"STAT_FOpenGLEventQuery_WaitForCompletion","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FOpenGLEventQuery_WaitForCompletion;
  if (StatPtr_STAT_FOpenGLEventQuery_WaitForCompletion ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLEventQuery::WaitForCompletion(void)_::_2_::FStat_STAT_FOpenGLEventQuery_WaitForCompletion>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_FOpenGLEventQuery_WaitForCompletion");
    FVar8 = (FThreadSafeStaticStat<_public:_void___cdecl_FOpenGLEventQuery::WaitForCompletion(void)_::_2_::FStat_STAT_FOpenGLEventQuery_WaitForCompletion>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FOpenGLEventQuery_WaitForCompletion,*pFVar7,
                         L"STAT_FOpenGLEventQuery_WaitForCompletion","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar5 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar5 == 0)) {
LAB_145c38888:
    bVar3 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                   ,500);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c38888;
    local_res8.s.LowPart = FVar10.Value;
    local_res8.s.HighPart = uVar5;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar3 = true;
  }
  uVar5 = (*glClientWaitSync)(this->Sync,0,500000000);
  if (uVar5 != 0x911a) {
    if (uVar5 == 0x911b) {
      if ((byte)LogRHI._0_1_ < 5) goto LAB_145c388e0;
      pFVar9 = &::LOG_Static;
    }
    else {
      if ((uVar5 == 0x911c) || ((byte)LogRHI._0_1_ < 5)) goto LAB_145c388e0;
      pFVar9 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<5>(pFVar9,(FLogCategoryBase *)&LogRHI);
  }
LAB_145c388e0:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
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

