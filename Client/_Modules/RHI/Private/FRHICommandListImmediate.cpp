// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 8

// EndDrawingViewport @ 145c9cfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListImmediate::EndDrawingViewport
          (FRHICommandListImmediate *this,FRHIViewport *param_1,bool param_2,bool param_3)

{
  FRHICommandListBase **ppFVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  IRHICommandContext *pIVar8;
  undefined8 *puVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FRHICommandListImmediate::EndDrawingViewport(FRHIViewport_*,bool,bool)_::_15_::FStat_STAT_EndDrawingViewport_Dispatch>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  ulonglong uVar13;
  FColor_u_0 FVar14;
  FName FVar15;
  FColor_u_0 FVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_a8;
  uint local_a4;
  undefined1 local_a0 [8];
  undefined1 local_98 [16];
  FStatMessage local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  FName local_58;
  FName local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong lStack_30;
  
  local_78 = 0;
  FVar16.Bits = 0;
  uStack_70 = 0;
  lStack_40 = (ulonglong)uStack_6c << 0x20;
  local_48 = 0;
  FRHICommandListExecutor::Submit
            (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)local_a0,
             (ERHISubmitFlags)&local_48);
  if (local_a0 != (undefined1  [8])0x0) {
    LOCK();
    ppFVar1 = (FRHICommandListBase **)((longlong)local_a0 + 0x30);
    iVar3 = *(int *)ppFVar1;
    *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)((*(FRHICommandListBase **)local_a0)->MemManager).Top)(local_a0,1);
    }
  }
  if ((((this->field_0x29b & 0x20) == 0) || (bVar7 = IsInRenderingThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImmediate() && IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x776,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((GRHICommandList.bLatchedBypass != false) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar8 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar8->_padding_ + 400))(pIVar8,param_1,param_2,param_3);
    goto LAB_145c9d3b5;
  }
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar9;
  *(undefined8 **)&this->field_0x30 = puVar9 + 1;
  *(bool *)((longlong)puVar9 + 0x19) = param_3;
  puVar9[1] = 0;
  *puVar9 = &___7FRHICommandEndDrawingViewport__6B_;
  uVar13 = (ulonglong)_tls_index;
  puVar9[2] = param_1;
  *(bool *)(puVar9 + 3) = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_EndDrawingViewport_Dispatch ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRHICommandListImmediate::EndDrawingViewport(FRHIViewport_*,bool,bool)_::_15_::FStat_STAT_EndDrawingViewport_Dispatch>
         )0x0) {
      pFVar10 = ::FName::FName(&local_58,"STAT_EndDrawingViewport_Dispatch");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EndDrawingViewport_Dispatch,*pFVar10,
                 L"STAT_EndDrawingViewport_Dispatch","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_EndDrawingViewport_Dispatch;
  if (StatPtr_STAT_EndDrawingViewport_Dispatch ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRHICommandListImmediate::EndDrawingViewport(FRHIViewport_*,bool,bool)_::_15_::FStat_STAT_EndDrawingViewport_Dispatch>
       )0x0) {
    pFVar10 = ::FName::FName(&local_50,"STAT_EndDrawingViewport_Dispatch");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FRHICommandListImmediate::EndDrawingViewport(FRHIViewport_*,bool,bool)_::_15_::FStat_STAT_EndDrawingViewport_Dispatch>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EndDrawingViewport_Dispatch,
                          *pFVar10,L"STAT_EndDrawingViewport_Dispatch","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar7 = false;
  bVar6 = false;
  FVar14.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Bits == 0) && (uVar12 == 0)) {
LAB_145c9d258:
    bVar5 = false;
    FVar15.ComparisonIndex.Value = 0;
    FVar15.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.Bits = FVar14.Bits;
        local_a4 = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_a8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x781);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c9d258;
    local_res8.Bits = FVar14.Bits;
    uStackX_c = uVar12;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar5 = true;
    FVar16.Bits = FVar14.Bits;
  }
  local_68 = 0;
  uStack_60 = 0;
  lStack_30 = (ulonglong)uStack_5c << 0x20;
  local_38 = 0;
  FRHICommandListExecutor::Submit
            (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)local_98,
             (ERHISubmitFlags)&local_38);
  if ((FRHICommandListBase **)local_98._0_8_ != (FRHICommandListBase **)0x0) {
    LOCK();
    ppFVar1 = (FRHICommandListBase **)(local_98._0_8_ + 0x30);
    iVar3 = *(int *)ppFVar1;
    *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)((*(FRHICommandListBase **)local_98._0_8_)->MemManager).Top)(local_98._0_8_,1);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_88.NameAndInfo.Index.Value = FVar16.Bits;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_98 + 8));
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_98[8];
      local_88.StatData.Pad[1] = local_98[9];
      local_88.StatData.Pad[2] = local_98[10];
      local_88.StatData.Pad[3] = local_98[0xb];
      FThreadStats::AddStatMessage(this_00,&local_88);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_145c9d3b5:
                    /* WARNING: Could not recover jumptable at 0x000145c9d3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x2e8))(GDynamicRHI,param_1,param_2);
  return;
}

// EndFrame @ 145c9d480

void __thiscall FRHICommandListImmediate::EndFrame(FRHICommandListImmediate *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x78b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c9d4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x38))(GDynamicRHI,this);
  return;
}

// ImmediateFlush @ 145cb02d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListImmediate::ImmediateFlush
          (FRHICommandListImmediate *this,Type param_1,ERHISubmitFlags param_2)

{
  FRHICommandListBase **ppFVar1;
  int iVar2;
  FRHICommandListBase **local_res20;
  undefined8 local_18;
  ulonglong uStack_10;
  
  if (param_1 == WaitForOutstandingTasksOnly) {
    FRHICommandListExecutor::WaitForTasks(&GRHICommandList,&GRHICommandList.WaitOutstandingTasks);
    return;
  }
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = 0;
  FRHICommandListExecutor::Submit
            (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)&local_res20,
             (ERHISubmitFlags)&local_18);
  if (local_res20 != (FRHICommandListBase **)0x0) {
    LOCK();
    ppFVar1 = local_res20 + 6;
    iVar2 = *(int *)ppFVar1;
    *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145cb035f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((*local_res20)->MemManager).Top)(local_res20,1);
      return;
    }
  }
  return;
}

// InitializeImmediateContexts @ 145cb0af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListImmediate::InitializeImmediateContexts(FRHICommandListImmediate *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_18 [2];
  
  if (*(longlong *)&this->field_0x50 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Contexts[ERHIPipeline::Graphics ] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x603,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x58 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Contexts[ERHIPipeline::AsyncCompute] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x604,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((GRHICommandList.bLatchedBypass != false) && ((this->field_0x29b & 0x20) != 0)) {
    *(FRHIBreadcrumbNode **)&this->field_0xe0 = GRHICommandList.Breadcrumbs.CPU.Current.Node;
    this->field_0xf8 = GRHICommandList.bEmitBreadcrumbs;
    bVar4 = 3;
    do {
      bVar2 = ~bVar4 + 1 & bVar4;
      if ((bVar2 == 1) || (bVar2 != 2)) {
        if ((bVar2 == 1) || (bVar2 != 2)) {
          *(undefined8 *)&this->field_0x100 = GRHICommandList.Breadcrumbs.GPU._0_8_;
          if ((bVar2 == 1) || (bVar2 != 2)) {
            uVar7 = GRHICommandList.Breadcrumbs.GPU._0_8_;
            if ((bVar2 == 1) || (bVar2 != 2)) {
              lVar5 = 0x108;
            }
            else {
              lVar5 = 0x138;
            }
          }
          else {
            lVar5 = 0x138;
            uVar7 = GRHICommandList.Breadcrumbs.GPU._48_8_;
          }
        }
        else {
          *(undefined8 *)&this->field_0x130 = GRHICommandList.Breadcrumbs.GPU._0_8_;
          lVar5 = 0x138;
          uVar7 = GRHICommandList.Breadcrumbs.GPU._48_8_;
        }
      }
      else {
        lVar5 = 0x138;
        *(undefined8 *)&this->field_0x130 = GRHICommandList.Breadcrumbs.GPU._48_8_;
        uVar7 = GRHICommandList.Breadcrumbs.GPU._48_8_;
      }
      puVar6 = (undefined8 *)(&this->field_0x0 + lVar5);
      if (local_18 != puVar6) {
        *puVar6 = uVar7;
        *(undefined1 *)(puVar6 + 1) = 1;
      }
      bVar4 = bVar4 & ~(~bVar4 + 1);
    } while (bVar4 != 0);
    if ((FRHIDrawStatsCategory **)&this->field_0x1b0 != &GRHICommandList.CurrentDrawStatsCategory) {
      *(FRHIDrawStatsCategory **)&this->field_0x1b0 = GRHICommandList.CurrentDrawStatsCategory;
      this->field_0x1b8 = 1;
    }
  }
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    FRHICommandListBase::ActivatePipelines((FRHICommandListBase *)this,Graphics);
    return;
  }
  return;
}

// IsStalled @ 145cb1e10

bool __cdecl FRHICommandListImmediate::IsStalled(void)

{
  return 0 < (int)GRHIThreadStallRequestCount;
}

// QueueAsyncCommandListSubmit @ 145cb6e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListImmediate::QueueAsyncCommandListSubmit
          (FRHICommandListImmediate *this,
          TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> *param_1,
          ETranslatePriority param_2,int param_3)

{
  FRHICommandListBase **ppFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FQueuedCommandList FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FRHICommandListBase **local_res10;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  FScriptContainerElement *local_18;
  undefined8 uStack_10;
  
  uVar3 = param_1->ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_38,0,&iStack_2c);
  }
  pFVar8 = (FScriptContainerElement *)param_1->DataPtr;
  pFVar2 = pFVar8 + (longlong)(int)uVar3 * 8;
  iVar7 = local_30;
  while( true ) {
    local_30 = iVar7;
    if (pFVar8 == pFVar2) {
      local_28 = local_38.Data;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_10 = CONCAT44(uStack_1c,iVar7);
      local_18 = local_28;
      iStack_20 = iVar7;
      FRHICommandListExecutor::Submit
                (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)&local_res10,
                 (ERHISubmitFlags)&local_18);
      if (local_res10 != (FRHICommandListBase **)0x0) {
        LOCK();
        ppFVar1 = local_res10 + 6;
        iVar7 = *(int *)ppFVar1;
        *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (*(code *)((*local_res10)->MemManager).Top)(local_res10,1);
        }
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return;
    }
    if (((local_38.Data <= pFVar8) && (pFVar8 < local_38.Data + (longlong)iStack_2c * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_38,&iStack_2c);
    }
    iVar7 = local_30 + 1;
    FVar4.CmdList = *(FRHICommandListBase **)pFVar8;
    pFVar8 = pFVar8 + 8;
    *(FRHICommandListBase **)(local_38.Data + (longlong)local_30 * 8) = FVar4.CmdList;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// StallRHIThread @ 145cc14e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRHICommandListImmediate::StallRHIThread(FRHICommandListImmediate *this)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SpinWaitRHIThreadStall> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FColor_u_0 FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  bool bVar17;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  bVar8 = IsInRenderingThread();
  if (((!bVar8) || (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() && IsRunningRHIInSeparateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x73c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if (0 < (int)GRHIThreadStallRequestCount) {
    return false;
  }
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x6fc,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if (GRHICommandList.CompletionEvent.Reference == (FBaseGraphTask *)0x0) {
    return false;
  }
  if ((GRHICommandList.CompletionEvent.Reference)->field_0xd0 != '\0') {
    return false;
  }
  if (__CsvProfilerStat1864 == false) {
    FCsvProfilerTrace::OutputInlineStat("Total",_GCsvCategory_RHITStalls.Index);
    __CsvProfilerStat1864 = true;
  }
  uVar7 = _GCsvCategory_RHITStalls.Index;
  FCsvProfiler::BeginStat("Total",_GCsvCategory_RHITStalls.Index,"CSV_Total");
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"StallRHIThread");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1865,"StallRHIThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x749);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1865);
  }
  LOCK();
  aVar4 = (atomic<int>)((int)GRHIThreadStallRequestCount + 1);
  UNLOCK();
  bVar2 = 0 < (int)GRHIThreadStallRequestCount;
  GRHIThreadStallRequestCount = aVar4;
  if (bVar2) goto LAB_145cc1928;
  FVar16.Value = 0;
  FVar12 = StatPtr_STAT_SpinWaitRHIThreadStall;
  if (StatPtr_STAT_SpinWaitRHIThreadStall ==
      (FThreadSafeStaticStat<FStat_STAT_SpinWaitRHIThreadStall>)0x0) {
    pFVar11 = ::FName::FName(&local_58,"STAT_SpinWaitRHIThreadStall");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_SpinWaitRHIThreadStall>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpinWaitRHIThreadStall,*pFVar11,
                        L"Spin RHIThread wait for stall","STATGROUP_RHICMDLIST","STATCAT_Advanced",
                        L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar2 = false;
  bVar6 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar14.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Bits == 0) && (uVar13 == 0)) {
LAB_145cc179a:
    bVar5 = false;
    FVar15 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar14.Bits;
        local_res1c = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x751);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145cc179a;
    local_res10.Bits = FVar14.Bits;
    uStackX_14 = uVar13;
    local_50 = FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_50.ComparisonIndex.Value;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"RHIThreadLock_Wait");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1876,"RHIThreadLock_Wait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x754);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1876);
  }
  iVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
  while (iVar10 == 0) {
    FWindowsPlatformProcess::YieldThread();
    iVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_40.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res20);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
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
LAB_145cc1928:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FCsvProfiler::EndStat("Total",uVar7);
  return true;
}

// UnStallRHIThread @ 145cc6e20

void __thiscall FRHICommandListImmediate::UnStallRHIThread(FRHICommandListImmediate *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) || (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread() && IsRunningRHIInSeparateThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x766,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  aVar2 = (atomic<int>)((int)GRHIThreadStallRequestCount + -1);
  UNLOCK();
  if ((int)GRHIThreadStallRequestCount + -1 < 0) {
    GRHIThreadStallRequestCount = aVar2;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewStallCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x768,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    bVar3 = GRHIThreadStallRequestCount == (atomic<int>)0x1;
    GRHIThreadStallRequestCount = aVar2;
    if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x000145cc6ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
      return;
    }
  }
  return;
}

