// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// operator() @ 145df4070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FFrameEndSync::Sync'::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(ulong64 *)this;
  uVar2 = *(ulong64 *)((longlong)this + 8);
  if (((!GRHICommandList.bLatchedBypass) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,``FFrameEndSync::Sync'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
    puVar3[4] = L"TRHILambdaCommand";
    return;
  }
  RHISetFrameDebugInfo(GRHIGlobals.PresentCounter - 1,uVar1,uVar2);
  return;
}

// Sync @ 145e33f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FFrameEndSync::Sync(EFlushMode param_1)

{
  int *piVar1;
  FRenderCommandFence *pFVar2;
  FRenderCommandList *this;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_FrameSyncTime> FVar15;
  FCommandList *this_00;
  FRenderCommandTag *pFVar16;
  longlong lVar17;
  FTaskGraphInterface *pFVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  IConsoleManager *pIVar19;
  undefined ***pppuVar20;
  TArray<FFrameEndSync::FRenderThreadFence,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar21;
  FName FVar22;
  ulonglong uVar23;
  TArray<FRenderCommandFence,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *pTVar24;
  ESyncDepth EVar25;
  int iVar26;
  undefined1 auStackY_158 [32];
  FName local_f0;
  FColor_u_0 local_e8 [2];
  FName local_e0;
  FName local_d8;
  LARGE_INTEGER local_c8;
  FStatMessage local_c0;
  FName local_b0;
  code *local_a8 [2];
  undefined **local_98;
  ulong64 uStack_90;
  ulong64 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  ulong64 uStack_60;
  ulong64 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  bVar8 = bRecursive;
  pTVar7 = CVarAllowOneFrameThreadLag.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bRecursive = true;
  if (bVar8) {
    local_f0.ComparisonIndex.Value = 0;
    local_f0.Number = 0;
    FRenderCommandFence::BeginFence((FRenderCommandFence *)&local_f0,RenderThread);
    FRenderCommandFence::Wait((FRenderCommandFence *)&local_f0,false);
    if (local_f0 == (FName)0x0) {
      bRecursive = bVar8;
      return;
    }
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0x30);
    iVar26 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar26 != 1) {
      bRecursive = bVar8;
      return;
    }
    (*(code *)**(undefined8 **)local_f0)(local_f0,1);
    bRecursive = bVar8;
    return;
  }
  bVar10 = IsInParallelGameThread();
  if (bVar10) {
LAB_145e34018:
    lVar17 = 0;
  }
  else {
    bVar10 = IsInGameThread();
    lVar17 = 4;
    if (bVar10) goto LAB_145e34018;
  }
  iVar26 = 0;
  bVar10 = *(int *)((longlong)pTVar7->ShadowedValue + lVar17) < 1;
  FVar15 = StatPtr_STAT_FrameSyncTime;
  if (StatPtr_STAT_FrameSyncTime == (FThreadSafeStaticStat<FStat_STAT_FrameSyncTime>)0x0) {
    pFVar14 = ::FName::FName(&local_b0,"STAT_FrameSyncTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_FrameSyncTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FrameSyncTime,*pFVar14,
                        L"Frame Sync Time","STATGROUP_RenderThreadProcessing","STATCAT_Advanced",
                        L"Render Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar15;
  bVar5 = false;
  bVar6 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar9 = false;
  bVar11 = false;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_145e34155:
    bVar6 = bVar11;
    bVar5 = bVar9;
    bVar9 = false;
    FVar22 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_e0.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                   ,0x9c0);
        bVar5 = true;
        bVar6 = true;
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145e34155;
    local_f0 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar9 = true;
  }
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                          ,0x9c2,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FFrameEndSync::Sync'::`2'::<lambda_1>,1,0>::_vftable_;
  uStack_90 = GFrameCounter;
  local_88 = GInputTime;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FFrameEndSync::Sync'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_80 = (undefined ***)0x0;
  this = *(FRenderCommandList **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0);
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FFrameEndSync::Sync_::__l2::TSTR_FrameDebugInfo2502>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    uStack_60 = uStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar16 = (FRenderCommandTag *)
              TRenderCommandTag<`FFrameEndSync::Sync'::__l2::TSTR_FrameDebugInfo2502>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar16);
    uVar23 = (ulonglong)local_48;
    if ((2 < uVar23) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar20 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar20 = local_50;
        }
        (*(code *)(*pppuVar20)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar20 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar20 = local_80;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (RenderThreadFences.ArrayNum == RenderThreadFences.ArrayMax) {
    RenderThreadFences.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFrameEndSync::FRenderThreadFence>_>
                   (0x808,&RenderThreadFences.AllocatorInstance,&RenderThreadFences.ArrayMax);
  }
  pTVar21 = &RenderThreadFences;
  if (RenderThreadFences.AllocatorInstance.SecondaryData !=
      (ForElementType<FFrameEndSync::FRenderThreadFence>)0x0) {
    pTVar21 = (TArray<FFrameEndSync::FRenderThreadFence,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *)RenderThreadFences.AllocatorInstance.SecondaryData;
  }
  pFVar2 = (FRenderCommandFence *)((longlong)pTVar21 + (longlong)RenderThreadFences.ArrayNum * 8);
  RenderThreadFences.ArrayNum = RenderThreadFences.ArrayNum + 1;
  (pFVar2->CompletionTask).Pimpl.Reference = (FTaskBase *)0x0;
  FRenderCommandFence::BeginFence(pFVar2,RenderThread);
  pTVar7 = CVarGTSyncType.Ref;
  while (CVarGTSyncType.Ref = pTVar7,
        (int)((bVar10 || param_1 == Threads) ^ 1) < RenderThreadFences.ArrayNum) {
    if ((RenderThreadFences.ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar21 = &RenderThreadFences;
    if (RenderThreadFences.AllocatorInstance.SecondaryData !=
        (ForElementType<FFrameEndSync::FRenderThreadFence>)0x0) {
      pTVar21 = (TArray<FFrameEndSync::FRenderThreadFence,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)RenderThreadFences.AllocatorInstance.SecondaryData;
    }
    FRenderCommandFence::Wait((FRenderCommandFence *)pTVar21,true);
    puVar3 = *(undefined8 **)pTVar21;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (RenderThreadFences.ArrayNum + -1 != 0) {
      memmove(pTVar21,(void *)((longlong)pTVar21 + 8),
              (longlong)(RenderThreadFences.ArrayNum + -1) << 3);
    }
    RenderThreadFences.ArrayNum = RenderThreadFences.ArrayNum + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFrameEndSync::FRenderThreadFence>_>
              (8,8,&RenderThreadFences.AllocatorInstance,RenderThreadFences.ArrayNum,
               &RenderThreadFences.ArrayMax);
    pTVar7 = CVarGTSyncType.Ref;
  }
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_145e34422:
    lVar17 = 0;
  }
  else {
    bVar11 = IsInGameThread();
    lVar17 = 4;
    if (bVar11) goto LAB_145e34422;
  }
  iVar13 = *(int *)((longlong)pTVar7->ShadowedValue + lVar17);
  if (bVar10 || param_1 == Threads) {
    if ((iVar13 < 2) || (EVar25 = Swapchain, param_1 == Threads)) {
      EVar25 = RHIThread;
    }
    iVar13 = 0;
    if (EVar25 != Swapchain) goto LAB_145e34523;
LAB_145e34469:
    iVar26 = iVar13;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar19 = IConsoleManager::Get();
      CVarVsync = (IConsoleVariable *)(**(code **)((longlong)*pIVar19 + 0xc0))(pIVar19,L"r.VSync",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    if ((CVarVsync == (IConsoleVariable *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CVarVsync != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                            ,0x9fe,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = (**(code **)(*(longlong *)CVarVsync + 200))();
    if (iVar13 != 0) goto LAB_145e34523;
  }
  else {
    EVar25 = Swapchain;
    if (1 < iVar13) {
      iVar13 = 1;
      goto LAB_145e34469;
    }
    if (iVar13 == 1) {
      EVar25 = RHIThread;
      iVar26 = 1;
      goto LAB_145e34523;
    }
    if ((0 < iVar13) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GTSyncType <= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                            ,0x9f3,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar26 = 2 - iVar13;
  }
  EVar25 = RHIThread;
LAB_145e34523:
  if (PipelineFences.ArrayNum == PipelineFences.ArrayMax) {
    PipelineFences.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>_>
                   (0x808,&PipelineFences.AllocatorInstance,&PipelineFences.ArrayMax);
  }
  pTVar24 = &PipelineFences;
  if (PipelineFences.AllocatorInstance.SecondaryData != (ForElementType<FRenderCommandFence>)0x0) {
    pTVar24 = (TArray<FRenderCommandFence,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
               *)PipelineFences.AllocatorInstance.SecondaryData;
  }
  pFVar2 = (FRenderCommandFence *)((longlong)pTVar24 + (longlong)PipelineFences.ArrayNum * 8);
  PipelineFences.ArrayNum = PipelineFences.ArrayNum + 1;
  (pFVar2->CompletionTask).Pimpl.Reference = (FTaskBase *)0x0;
  FRenderCommandFence::BeginFence(pFVar2,EVar25);
  if (param_1 == EndFrame) {
    pFVar18 = FTaskGraphInterface::Get();
    cVar12 = (**(code **)((longlong)*pFVar18 + 0x38))(pFVar18,1);
    if (cVar12 == '\0') {
      pFVar18 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar18 + 0x48))(pFVar18,1);
    }
  }
  while( true ) {
    if (PipelineFences.ArrayNum <= iVar26) {
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar9) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_c0.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
          local_c0.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_c8);
          local_c0.StatData.Pad[4] = '\0';
          local_c0.StatData.Pad[5] = '\0';
          local_c0.StatData.Pad[6] = '\0';
          local_c0.StatData.Pad[7] = '\0';
          local_c0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
          local_c0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
          local_c0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
          local_c0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_c0);
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
      bRecursive = bVar8;
      return;
    }
    if ((PipelineFences.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    pTVar24 = &PipelineFences;
    if (PipelineFences.AllocatorInstance.SecondaryData != (ForElementType<FRenderCommandFence>)0x0)
    {
      pTVar24 = (TArray<FRenderCommandFence,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                 *)PipelineFences.AllocatorInstance.SecondaryData;
    }
    FRenderCommandFence::Wait((FRenderCommandFence *)pTVar24,true);
    if ((PipelineFences.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar24 = &PipelineFences;
    if (PipelineFences.AllocatorInstance.SecondaryData != (ForElementType<FRenderCommandFence>)0x0)
    {
      pTVar24 = (TArray<FRenderCommandFence,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                 *)PipelineFences.AllocatorInstance.SecondaryData;
    }
    puVar3 = *(undefined8 **)pTVar24;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (PipelineFences.ArrayNum + -1 != 0) {
      memmove(pTVar24,(longlong *)((longlong)pTVar24 + 8),
              (longlong)(PipelineFences.ArrayNum + -1) << 3);
    }
    PipelineFences.ArrayNum = PipelineFences.ArrayNum + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>_>
              (8,8,&PipelineFences.AllocatorInstance,PipelineFences.ArrayNum,
               &PipelineFences.ArrayMax);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

