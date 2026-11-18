// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FPendingCleanupObjects @ 145ded790

FPendingCleanupObjects * __thiscall
FPendingCleanupObjects::FPendingCleanupObjects(FPendingCleanupObjects *this)

{
  code *pcVar1;
  bool bVar2;
  FPendingCleanupObjects *pFVar3;
  
  (this->CleanupArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CleanupArray).ArrayNum = 0;
  (this->CleanupArray).ArrayMax = 0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                       ,0x574,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPendingCleanupObjects *)(*pcVar1)();
      return pFVar3;
    }
  }
  FLockFreePointerListLIFOBase<FDeferredCleanupInterface,64,1>::
  PopAll<TArray<FDeferredCleanupInterface_*,TSizedDefaultAllocator<32>_>_>
            ((FLockFreePointerListLIFOBase<FDeferredCleanupInterface,64,1> *)
             &PendingCleanupObjectsList,&this->CleanupArray);
  return this;
}

// ~FPendingCleanupObjects @ 145df0e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPendingCleanupObjects::~FPendingCleanupObjects(FPendingCleanupObjects *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FTaskEvent FVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:___cdecl_FPendingCleanupObjects::~FPendingCleanupObjects(void)_::_5_::FStat_STAT_FPendingCleanupObjects_Destruct>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  FNameEntryId FVar16;
  FName FVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStackY_f8 [32];
  FColor_u_0 local_98 [2];
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_50;
  ulonglong local_38;
  ulonglong uVar20;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((this->CleanupArray).ArrayNum == 0) goto LAB_145df1320;
  uVar18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FPendingCleanupObjects_Destruct ==
        (FThreadSafeStaticStat<_public:___cdecl_FPendingCleanupObjects::~FPendingCleanupObjects(void)_::_5_::FStat_STAT_FPendingCleanupObjects_Destruct>
         )0x0) {
      pFVar12 = ::FName::FName(&local_60,"STAT_FPendingCleanupObjects_Destruct");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FPendingCleanupObjects_Destruct,*pFVar12
                 ,L"STAT_FPendingCleanupObjects_Destruct","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_FPendingCleanupObjects_Destruct;
  if (StatPtr_STAT_FPendingCleanupObjects_Destruct ==
      (FThreadSafeStaticStat<_public:___cdecl_FPendingCleanupObjects::~FPendingCleanupObjects(void)_::_5_::FStat_STAT_FPendingCleanupObjects_Destruct>
       )0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_FPendingCleanupObjects_Destruct");
    FVar13 = (FThreadSafeStaticStat<_public:___cdecl_FPendingCleanupObjects::~FPendingCleanupObjects(void)_::_5_::FStat_STAT_FPendingCleanupObjects_Destruct>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FPendingCleanupObjects_Destruct
                          ,*pFVar12,L"STAT_FPendingCleanupObjects_Destruct","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar11 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar11 == 0)) {
LAB_145df1004:
    bVar6 = false;
    FVar17 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar16.Value;
        local_88.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                   ,0x57c);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145df1004;
    local_90.s.LowPart = FVar16.Value;
    local_90.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar6 = true;
  }
  bVar8 = bEnablePendingCleanupObjectsCommandBatching;
  if (((bEnablePendingCleanupObjectsCommandBatching != false) && (GIsThreadedRendering != false)) &&
     (GRenderCommandFenceBundling != false)) {
    bVar10 = IsInGameThread();
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                            ,0x371,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((GRenderCommandFenceBundlerState.Event.bIsSet == false) !=
         (GRenderCommandFenceBundlerState.RecursionDepth == 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!GRenderCommandFenceBundlerState.Event.IsSet() == !GRenderCommandFenceBundlerState.RecursionDepth"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                            ,0x372,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar9 = GRenderCommandFenceBundlerState.Event.TypedValue;
    GRenderCommandFenceBundlerState.RecursionDepth =
         GRenderCommandFenceBundlerState.RecursionDepth + 1;
    if (GRenderCommandFenceBundlerState.RecursionDepth < 2) {
      if ((GRenderCommandFenceBundlerState.Event.bIsSet != false) &&
         (GRenderCommandFenceBundlerState.Event.TypedValue != (FTaskEvent)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)GRenderCommandFenceBundlerState.Event.TypedValue + 0x30);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (*(code *)**(undefined8 **)FVar9)(FVar9,1);
        }
      }
      UE::Tasks::FTaskEvent::FTaskEvent
                ((FTaskEvent *)&GRenderCommandFenceBundlerState,L"RenderCommandFenceBundlerEvent");
      GRenderCommandFenceBundlerState.Event.bIsSet = true;
      FRenderCommandPipeRegistry::StopRecording(&GRenderCommandPipeRegistry,&local_50);
      TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&UE::RenderCommandPipe::StopRecordingDelegate,&local_50);
      if (local_50.AllocatorInstance.SecondaryData.Data == (uint *)0x0) {
        GRenderCommandFenceBundlerState.RenderCommandPipeBits.AllocatorInstance.InlineData[0] =
             local_50.AllocatorInstance.InlineData[0];
        GRenderCommandFenceBundlerState.RenderCommandPipeBits.AllocatorInstance.InlineData[1] =
             local_50.AllocatorInstance.InlineData[1];
        GRenderCommandFenceBundlerState.RenderCommandPipeBits.AllocatorInstance.InlineData[2] =
             local_50.AllocatorInstance.InlineData[2];
        GRenderCommandFenceBundlerState.RenderCommandPipeBits.AllocatorInstance.InlineData[3] =
             local_50.AllocatorInstance.InlineData[3];
      }
      FVar15.Data = local_50.AllocatorInstance.SecondaryData.Data;
      if (GRenderCommandFenceBundlerState.RenderCommandPipeBits.AllocatorInstance.SecondaryData.Data
          != (uint *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free
                  (GRenderCommandFenceBundlerState.RenderCommandPipeBits.AllocatorInstance.
                   SecondaryData.Data);
        FVar15.Data = local_50.AllocatorInstance.SecondaryData.Data;
      }
      GRenderCommandFenceBundlerState.RenderCommandPipeBits.NumBits = local_50.NumBits;
      GRenderCommandFenceBundlerState.RenderCommandPipeBits.MaxBits = local_50.MaxBits;
      local_50.NumBits = 0;
      local_50.MaxBits = 0;
      local_50.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
      GRenderCommandFenceBundlerState.RenderCommandPipeBits.AllocatorInstance.SecondaryData.Data =
           FVar15.Data;
      StartBatchedRelease();
      if (-1 < RenderCommandsChannel->Enabled) {
        FMiscTrace::OutputBeginRegion(L"Render Command Fence Bundler",(wchar_t *)0x0);
      }
    }
  }
  iVar14 = (this->CleanupArray).ArrayNum;
  uVar20 = uVar18;
  if (0 < iVar14) {
    do {
      uVar19 = (uint)uVar20;
      uVar11 = 0;
      if ((int)uVar19 < iVar14) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar2 = *(undefined8 **)((this->CleanupArray).AllocatorInstance.Data + uVar18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      iVar14 = (this->CleanupArray).ArrayNum;
      uVar18 = uVar18 + 8;
      uVar20 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < iVar14);
  }
  if (bVar8 != false) {
    StopRenderCommandFenceBundler();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_90.s.LowPart._3_1_;
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
LAB_145df1320:
  pFVar3 = (this->CleanupArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

