// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// ~FOpenGLStagingBuffer @ 145be9f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLStagingBuffer::~FOpenGLStagingBuffer(FOpenGLStagingBuffer *this)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&___7FOpenGLStagingBuffer__6B_;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (*glDeleteBuffers)(1,&this->ShadowBuffer);
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145beba60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOpenGLStagingBuffer::Initialize'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bebaea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glGenBuffers)(1,(uint *)(*(longlong *)this + 0x20));
  return;
}

// operator() @ 145beddb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOpenGLStagingBuffer::Lock'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  void *pvVar4;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)(*(longlong *)this + 0x20) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShadowBuffer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                       ,0x158,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*glBindBuffer)(0x8f37,*(uint *)(*(longlong *)this + 0x20));
  pvVar4 = (*glMapBufferRange)(0x8f37,0,(long64)**(undefined4 **)((longlong)this + 8),1);
  if (pvVar4 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalMapping",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                       ,0x15b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  **(longlong **)((longlong)this + 0x10) =
       (ulonglong)**(uint **)((longlong)this + 0x18) + (longlong)pvVar4;
  return;
}

// GetGPUSizeBytes @ 145c020d0

ulong64 __thiscall FOpenGLStagingBuffer::GetGPUSizeBytes(FOpenGLStagingBuffer *this)

{
  return (ulonglong)this->ShadowSize;
}

// Initialize @ 145c08090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLStagingBuffer::Initialize(FOpenGLStagingBuffer *this)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLStagingBuffer::Initialize(void)_::_2_::FStat_STAT_OGLRHIThread_Flush>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FColor_u_0 FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  uint uVar12;
  bool bVar13;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  FOpenGLStagingBuffer *local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  FVar11.Value = 0;
  this->ShadowBuffer = 0;
  this->ShadowSize = 0;
  this->Mapping = (void *)0x0;
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18 = this;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLStagingBuffer::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = L"TRHILambdaCommand";
    puVar6[2] = this;
  }
  else {
    `FOpenGLStagingBuffer::Initialize'::__l2::<lambda_1>::operator()
              (&local_res18,&GRHICommandList.CommandListImmediate);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OGLRHIThread_Flush ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLStagingBuffer::Initialize(void)_::_2_::FStat_STAT_OGLRHIThread_Flush>
         )0x0) {
      pFVar7 = ::FName::FName(&local_58,"STAT_OGLRHIThread_Flush");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                 L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_OGLRHIThread_Flush;
  if (StatPtr_STAT_OGLRHIThread_Flush ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLStagingBuffer::Initialize(void)_::_2_::FStat_STAT_OGLRHIThread_Flush>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_OGLRHIThread_Flush");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_FOpenGLStagingBuffer::Initialize(void)_::_2_::FStat_STAT_OGLRHIThread_Flush>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar7,
                         L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar9.Bits = (uint)FVar2.ComparisonIndex.Value;
  uVar12 = FVar2.Number;
  if ((FVar9.Bits == 0) && (uVar12 == 0)) {
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    return;
  }
  if (GCycleStatsShouldEmitNamedEvents != 0) {
    local_res8.Bits = 0;
    FGenericPlatformMisc::BeginNamedEvent
              ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
    bVar5 = false;
    bVar4 = true;
    if (-1 < CpuChannel->Enabled) {
      local_res10.Bits = FVar9.Bits;
      local_res14 = uVar12;
      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                 ,0x144);
      bVar5 = true;
      bVar4 = true;
    }
  }
  bVar13 = FThreadStats::bPrimaryEnable != false;
  FVar10 = local_48;
  if (bVar13) {
    local_res8.Bits = FVar9.Bits;
    uStackX_c = uVar12;
    local_48 = FVar2;
    FThreadStats::AddMessage(FVar2,CycleScopeStart);
    FVar10 = FVar2;
    FVar11.Value = local_48.ComparisonIndex.Value;
  }
  FRHICommandListImmediate::ImmediateFlush
            (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Lock @ 145c0bd10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FOpenGLStagingBuffer::Lock(FOpenGLStagingBuffer *this,uint param_1,uint param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLStagingBuffer::Lock(unsigned_int,unsigned_int)_::_5_::FStat_STAT_OGLRHIThread_Flush>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FColor_u_0 FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  uint uVar13;
  bool bVar14;
  uint local_res10 [2];
  uint local_res18 [2];
  FColor_u_0 local_res20;
  uint uStackX_24;
  void *local_98;
  FName local_90;
  FColor_u_0 local_80;
  uint local_7c;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FOpenGLStagingBuffer *local_60;
  uint *local_58;
  void **local_50;
  uint *local_48;
  FName local_40;
  FName local_38 [2];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if ((glBufferStorage == (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) ||
     (OpenGLConsoleVariables::bUsePersistentMappingStagingBuffer == 0)) {
    FVar12.Value = 0;
    local_98 = (void *)0x0;
    bVar5 = IsInRenderingThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
    local_58 = local_res18;
    local_50 = &local_98;
    local_48 = local_res10;
    local_60 = this;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar7 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x38,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar7;
      GRHICommandList.CommandListImmediate._48_8_ = puVar7 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar7 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLStagingBuffer::Lock'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar7[2] = this;
      puVar7[3] = local_res18;
      puVar7[4] = &local_98;
      puVar7[5] = local_res10;
      puVar7[6] = L"TRHILambdaCommand";
    }
    else {
      `FOpenGLStagingBuffer::Lock'::__l5::<lambda_1>::operator()
                (&local_60,&GRHICommandList.CommandListImmediate);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_OGLRHIThread_Flush ==
          (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLStagingBuffer::Lock(unsigned_int,unsigned_int)_::_5_::FStat_STAT_OGLRHIThread_Flush>
           )0x0) {
        pFVar8 = ::FName::FName(&local_40,"STAT_OGLRHIThread_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar8,
                   L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar9 = StatPtr_STAT_OGLRHIThread_Flush;
    if (StatPtr_STAT_OGLRHIThread_Flush ==
        (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLStagingBuffer::Lock(unsigned_int,unsigned_int)_::_5_::FStat_STAT_OGLRHIThread_Flush>
         )0x0) {
      pFVar8 = ::FName::FName(local_38,"STAT_OGLRHIThread_Flush");
      FVar9 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FOpenGLStagingBuffer::Lock(unsigned_int,unsigned_int)_::_5_::FStat_STAT_OGLRHIThread_Flush>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OGLRHIThread_Flush,*pFVar8,
                           L"STAT_OGLRHIThread_Flush","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                           true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar9;
    bVar5 = false;
    bVar4 = false;
    local_90.ComparisonIndex.Value = 0;
    local_90.Number = 0;
    FVar10.Bits = (uint)FVar2.ComparisonIndex.Value;
    uVar13 = FVar2.Number;
    if ((FVar10.Bits == 0) && (uVar13 == 0)) {
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
      pvVar6 = local_98;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
        bVar5 = false;
        bVar4 = true;
        if (-1 < CpuChannel->Enabled) {
          local_80.Bits = FVar10.Bits;
          local_7c = uVar13;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_80._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                     ,0x15e);
          bVar5 = true;
          bVar4 = true;
        }
      }
      bVar14 = FThreadStats::bPrimaryEnable != false;
      FVar11 = local_90;
      if (bVar14) {
        local_res20.Bits = FVar10.Bits;
        uStackX_24 = uVar13;
        local_90 = FVar2;
        FThreadStats::AddMessage(FVar2,CycleScopeStart);
        FVar11 = FVar2;
        FVar12.Value = local_90.ComparisonIndex.Value;
      }
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
      pvVar6 = local_98;
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar14) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_70.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
          local_70.NameAndInfo.Index.Value = FVar12.Value;
          QueryPerformanceCounter(&local_78);
          local_70.StatData.Pad[4] = '\0';
          local_70.StatData.Pad[5] = '\0';
          local_70.StatData.Pad[6] = '\0';
          local_70.StatData.Pad[7] = '\0';
          local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
          local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
          local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
          local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_70);
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
    }
    return pvVar6;
  }
  if ((this->Mapping == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mapping != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                         ,0x164,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  return (void *)((ulonglong)local_res10[0] + (longlong)this->Mapping);
}

// Unlock @ 145c352d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLStagingBuffer::Unlock(FOpenGLStagingBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if ((glBufferStorage == (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) ||
     (OpenGLConsoleVariables::bUsePersistentMappingStagingBuffer == 0)) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((GRHICommandList.bLatchedBypass != false) &&
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) != 0)) ||
       (GRHICommandList.CommandListImmediate._100_1_ != '\0')) {
      (*glUnmapBuffer)(0x8f37);
      this->Mapping = (void *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145c35359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*glBindBuffer)(0x8f37,0);
      return;
    }
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLStagingBuffer::Unlock'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = L"TRHILambdaCommand";
    puVar3[2] = this;
  }
  return;
}

