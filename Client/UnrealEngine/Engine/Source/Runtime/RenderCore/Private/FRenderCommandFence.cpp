// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// FRenderCommandFence @ 145dedb90

FRenderCommandFence * __thiscall FRenderCommandFence::FRenderCommandFence(FRenderCommandFence *this)

{
  (this->CompletionTask).Pimpl.Reference = (FTaskBase *)0x0;
  return this;
}

// ~FRenderCommandFence @ 145df14b0

void __thiscall FRenderCommandFence::~FRenderCommandFence(FRenderCommandFence *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  pFVar3 = (this->CompletionTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000145df14cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 145df46c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRenderCommandFence::BeginFence'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *this_00;
  code *pcVar4;
  bool bVar5;
  FTaskEvent FVar6;
  FTask *pFVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  FTaskEvent local_res8;
  undefined4 local_48;
  FTaskEvent local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  longlong lStack_20;
  
  if (*(int *)((longlong)this + 8) == 2) {
    FVar6 = (FTaskEvent)
            TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::TaskEventBaseAllocator);
    if (FVar6 == (FTaskEvent)0x0) {
      local_48 = *(undefined4 *)((longlong)this + 8);
      local_40 = (FTaskEvent)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)FVar6,1,true);
      *(undefined ***)FVar6 = &___7FTaskEventBase_Private_Tasks_UE__6B_;
      TaskTrace::Created((ulong64)*(atomic<unsigned___int64> *)((longlong)FVar6 + 0x50),0xd8);
      if (((*(ulonglong *)((longlong)FVar6 + 0xb0) & 0x20) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)((longlong)FVar6 + 0xa0) + 0x18))
                ((undefined1 *)((longlong)FVar6 + 0xa0),(FTask *)((longlong)FVar6 + 0x78));
      *(FTaskEvent *)((longlong)FVar6 + 0x78) = FVar6;
      *(undefined ***)((longlong)FVar6 + 0xa0) =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskEvent *)((longlong)FVar6 + 0x80) = FVar6;
      pFVar7 = LowLevelTasks::FTask::GetActiveTask();
      uVar8 = 0;
      if (pFVar7 != (FTask *)0x0) {
        uVar8 = *(undefined8 *)&pFVar7->field_0x30;
      }
      *(undefined8 *)((longlong)FVar6 + 0xa8) = uVar8;
      *(undefined8 *)((longlong)FVar6 + 0xb0) = 0xc8000054453b7400;
      *(EExtendedTaskPriority *)((longlong)FVar6 + 0x44) = TaskEvent;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)((longlong)FVar6 + 8));
      UE::Tasks::Private::FTaskBase::AddPrerequisites(*(FTaskBase **)this,(FTaskBase *)FVar6);
      local_48 = *(undefined4 *)((longlong)this + 8);
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) + 1);
      UNLOCK();
      local_40 = FVar6;
    }
    FVar6 = local_40;
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar9;
      *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
      *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,``FRenderCommandFence::BeginFence'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar9[1] = 0;
      puVar9[3] = 0;
      *(undefined4 *)(puVar9 + 2) = local_48;
      *(FTaskEvent *)(puVar9 + 3) = local_40;
      local_40 = (FTaskEvent)0x0;
      puVar9[4] = L"TRHILambdaCommand";
    }
    else {
      RHITriggerTaskEventOnFlip(GRHIGlobals.PresentCounter - 1,&local_40);
    }
    if (local_40 != (FTaskEvent)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned_int> *)((longlong)local_40 + 0x30);
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)local_40)(local_40,1);
      }
    }
    FRHICommandListImmediate::ImmediateFlush(param_1,DispatchToRHIThread,None);
    if (FVar6 == (FTaskEvent)0x0) goto LAB_145df496c;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar6 + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145df496c;
    puVar9 = *(undefined8 **)FVar6;
    local_res8 = FVar6;
  }
  else {
    if (*(int *)((longlong)this + 8) != 1) goto LAB_145df496c;
    local_38 = 0;
    uStack_30 = 0;
    lStack_20 = (ulonglong)uStack_2c << 0x20;
    local_28 = 0;
    TVar10 = FRHICommandListExecutor::Submit
                       (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)&local_res8,
                        (ERHISubmitFlags)&local_28);
    if (*(FTaskBase **)TVar10.Reference != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites
                (*(FTaskBase **)this,*(FTaskBase **)TVar10.Reference);
    }
    if (local_res8 == (FTaskEvent)0x0) goto LAB_145df496c;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_res8 + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar3 != (atomic<unsigned_int>)0x1) || (local_res8 == (FTaskEvent)0x0)) goto LAB_145df496c;
    puVar9 = *(undefined8 **)local_res8;
  }
  (*(code *)*puVar9)(local_res8,1);
LAB_145df496c:
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1047,"SyncTrigger_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x417);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1047);
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0xd0) == '\0')) {
    this_00 = *(FTaskBase **)this;
    LOCK();
    aVar2 = this_00->TaskTriggered;
    this_00->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
    }
  }
  if (!bVar5) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// BeginFence @ 145df8d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRenderCommandFence::BeginFence(FRenderCommandFence *this,ESyncDepth param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FRenderCommandPipe *pFVar3;
  FRenderCommandList *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *this_00;
  FTask *pFVar7;
  undefined8 uVar8;
  FTaskBase *this_01;
  FTaskBase *pFVar9;
  FCommandList *pFVar10;
  FRenderCommandTag *pFVar11;
  FRenderCommandPipe **ppFVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  char cVar15;
  ulonglong uVar16;
  FRenderCommandPipe **ppFVar17;
  undefined1 auStack_178 [32];
  uint local_158;
  char local_148;
  ESyncDepth local_144;
  FRenderCommandPipe **local_140;
  TArrayView<FRenderCommandPipe_*_const,int> local_130;
  FRenderCommandFence local_120;
  code *local_118 [2];
  undefined **local_108;
  FTaskBase *pFStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FTaskBase *pFStack_d0;
  ESyncDepth local_c8;
  undefined4 uStack_c4;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FTaskBase *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  code *local_78 [2];
  undefined **local_68;
  FTaskBase *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (!GIsThreadedRendering) {
    return;
  }
  local_144 = param_1;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                         ,0x3d9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((GRenderCommandFenceBundlerState.Event.bIsSet != false) && (param_1 == RenderThread)) {
    UE::Tasks::Private::FTaskHandle::operator=
              (&this->CompletionTask,(FTaskHandle *)&GRenderCommandFenceBundlerState);
    return;
  }
  bVar6 = CpuChannel->Enabled < 0;
  if (bVar6) {
    local_148 = '\0';
  }
  else {
    local_148 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId997,"FRenderCommandFence::BeginFence",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x3e5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId997);
  }
  cVar15 = !bVar6;
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::TaskEventBaseAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,1,true);
    this_00->_padding_ = (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
    TaskTrace::Created((ulong64)this_00->TraceId,0xd8);
    if ((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) {
      local_158 = (uint)*(undefined8 *)&(this_00->LowLevelTask).field_0x38 & 0x3f;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar7 = LowLevelTasks::FTask::GetActiveTask();
    uVar8 = 0;
    if (pFVar7 != (FTask *)0x0) {
      uVar8 = *(undefined8 *)&pFVar7->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar8;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc8000054453bb400;
    this_00->ExtendedPriority = TaskEvent;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
  }
  if (GRenderCommandFenceBundlerState.Event.bIsSet != false) {
    if (GRenderCommandFenceBundlerState.Event.TypedValue != (FTaskEvent)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites
                (this_00,(FTaskBase *)GRenderCommandFenceBundlerState.Event.TypedValue);
    }
    FlushRenderCommandFenceBundler();
  }
  if (GRenderCommandPipeMode == All) {
    UE::RenderCommandPipe::GetPipes(&local_130);
    ppFVar12 = local_130.DataPtr + local_130.ArrayNum;
    ppFVar17 = local_130.DataPtr;
    param_1 = local_144;
    local_140 = ppFVar12;
    if (local_130.DataPtr != ppFVar12) {
      do {
        pFVar3 = *ppFVar17;
        if ((pFVar3->bRecording != false) &&
           ((pFVar3->NumInFlightCommands != (atomic<int>)0x0 ||
            (ppFVar12 = local_140, pFVar3->NumInFlightCommandLists != (atomic<int>)0x0)))) {
          this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&UE::Tasks::Private::TaskEventBaseAllocator);
          pFVar9 = (FTaskBase *)0x0;
          if (this_01 != (FTaskBase *)0x0) {
            UE::Tasks::Private::FTaskBase::FTaskBase(this_01,1,true);
            this_01->_padding_ = (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
            TaskTrace::Created((ulong64)this_01->TraceId,0xd8);
            if ((*(ulonglong *)&(this_01->LowLevelTask).field_0x38 & 0x20) == 0) {
              local_158 = (uint)*(undefined8 *)&(this_01->LowLevelTask).field_0x38 & 0x3f;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsCompleted()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                 ,0x1dd,L"State: %d");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            (**(code **)(*(longlong *)&(this_01->LowLevelTask).field_0x28 + 0x18))
                      (&(this_01->LowLevelTask).field_0x28,&this_01->LowLevelTask);
            *(FTaskBase **)&this_01->LowLevelTask = this_01;
            *(undefined ***)&(this_01->LowLevelTask).field_0x28 =
                 &
                 ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
            ;
            *(FTaskBase **)&(this_01->LowLevelTask).field_0x8 = this_01;
            pFVar7 = LowLevelTasks::FTask::GetActiveTask();
            if (pFVar7 != (FTask *)0x0) {
              pFVar9 = *(FTaskBase **)&pFVar7->field_0x30;
            }
            *(FTaskBase **)&(this_01->LowLevelTask).field_0x30 = pFVar9;
            *(undefined8 *)&(this_01->LowLevelTask).field_0x38 = 0xc8000054453be400;
            this_01->ExtendedPriority = TaskEvent;
            UE::FInheritedContextBase::CaptureInheritedContext
                      ((FInheritedContextBase *)&this_01->_padding_);
            UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,this_01);
            pFVar9 = this_01;
          }
          local_108 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::`28'::<lambda_1>,1,0>
                       ::_vftable_;
          local_118[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FRenderCommandFence::BeginFence'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
                         ::Call;
          local_f0 = (undefined ***)0x0;
          pFVar4 = *(FRenderCommandList **)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xed0);
          pFStack_100 = pFVar9;
          if (pFVar4 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FRenderCommandFence::BeginFence_::__l28::TSTR_BeginFence1018>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
          }
          else {
            pFVar10 = FRenderCommandList::GetRenderThread(pFVar4);
            local_b8._0_8_ = local_118[0];
            local_90 = local_f0;
            local_f0 = (undefined ***)0x0;
            local_a8 = local_108;
            pFStack_a0 = pFStack_100;
            local_98 = local_f8;
            local_118[0] = (code *)0x0;
            local_88 = 2;
            pFVar11 = (FRenderCommandTag *)
                      TRenderCommandTag<`FRenderCommandFence::BeginFence'::__l28::TSTR_BeginFence1018>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (pFVar10,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_b8,pFVar11);
            uVar16 = (ulonglong)local_88;
            if ((2 < uVar16) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar16] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_b8._0_8_ != (code *)0x0) {
                pppuVar14 = (undefined ***)(local_b8 + 0x10);
                if (local_90 != (undefined ***)0x0) {
                  pppuVar14 = local_90;
                }
                (*(code *)(*pppuVar14)[2])();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar16])(local_b8);
            }
          }
          ppFVar12 = local_140;
          if (local_118[0] != (code *)0x0) {
            pppuVar14 = &local_108;
            if (local_f0 != (undefined ***)0x0) {
              pppuVar14 = local_f0;
            }
            (*(code *)(*pppuVar14)[2])();
            ppFVar12 = local_140;
          }
        }
        ppFVar17 = ppFVar17 + 1;
        param_1 = local_144;
        cVar15 = local_148;
      } while (ppFVar17 != ppFVar12);
    }
  }
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::`2'::<lambda_2>,1,0>::
              _vftable_;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRenderCommandFence::BeginFence'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                ::Call;
  local_c0 = (undefined ***)0x0;
  pFVar4 = *(FRenderCommandList **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0)
  ;
  pFStack_d0 = this_00;
  local_c8 = param_1;
  if (pFVar4 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderCommandFence::BeginFence_::__l2::TSTR_BeginFence1026>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    pFVar10 = FRenderCommandList::GetRenderThread(pFVar4);
    local_58._4_4_ = uStack_c4;
    local_58._0_4_ = local_c8;
    local_78[0] = local_e8[0];
    local_50 = local_c0;
    local_68 = local_d8;
    pFStack_60 = pFStack_d0;
    local_e8[0] = (code *)0x0;
    local_48 = 2;
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FRenderCommandFence::BeginFence'::__l2::TSTR_BeginFence1026>::Get()
    ;
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar10,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar11);
    uVar16 = (ulonglong)local_48;
    if ((2 < uVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_78[0] != (code *)0x0) {
        pppuVar14 = (undefined ***)(local_78 + 2);
        if (local_50 != (undefined ***)0x0) {
          pppuVar14 = local_50;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])
                ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_78);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    pppuVar14 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar14 = local_c0;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (this == &local_120) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_145df938c;
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) goto LAB_145df938c;
    puVar13 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar9 = (this->CompletionTask).Pimpl.Reference;
    (this->CompletionTask).Pimpl.Reference = this_00;
    if (pFVar9 == (FTaskBase *)0x0) goto LAB_145df938c;
    LOCK();
    paVar1 = &pFVar9->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) goto LAB_145df938c;
    puVar13 = (undefined8 *)pFVar9->_padding_;
    this_00 = pFVar9;
  }
  (*(code *)*puVar13)(this_00,1);
LAB_145df938c:
  if (cVar15 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsFenceComplete @ 145e18fc0

bool __thiscall FRenderCommandFence::IsFenceComplete(FRenderCommandFence *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FRenderCommandFence local_18 [2];
  
  if (GIsThreadedRendering) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = (*IsInAsyncLoadingThread)();
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInAsyncLoadingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                           ,0x424,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
    }
    CheckRenderingThreadHealth();
    pFVar3 = (this->CompletionTask).Pimpl.Reference;
    if ((pFVar3 != (FTaskBase *)0x0) && ((pFVar3->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
      return false;
    }
    if (this != local_18) {
      pFVar3 = (this->CompletionTask).Pimpl.Reference;
      (this->CompletionTask).Pimpl.Reference = (FTaskBase *)0x0;
      if (pFVar3 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar3->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  return true;
}

// Wait @ 145e37d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderCommandFence::Wait(FRenderCommandFence *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  FRenderCommandList *this_00;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  FEvent *pFVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_GameIdleTime> FVar17;
  FTaskGraphInterface *pFVar18;
  FTaskBase *pFVar19;
  FTask *pFVar20;
  FTaskBase *pFVar21;
  ulonglong uVar22;
  FThreadHeartBeat *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  wchar_t *pwVar23;
  uint uVar24;
  FName FVar25;
  FSharedReferencer<1> FVar26;
  uint uVar27;
  FTaskBase *pFVar28;
  double dVar29;
  double dVar30;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar31 [16];
  double dVar32;
  bool local_res10;
  FColor_u_0 local_f0 [2];
  FName local_e8;
  FName local_e0;
  FSharedEventRef local_d0;
  FEvent *local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FThreadHeartBeatClock local_a0;
  FName local_88;
  FRenderCommandFence local_80;
  FRenderCommandFence local_78 [7];
  
  if (!GIsThreadedRendering) {
    return;
  }
  bVar10 = IsInGameThread();
  if (((!bVar10) && (bVar10 = (*IsInAsyncLoadingThread)(), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread() || IsInAsyncLoadingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                          ,0x424,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  CheckRenderingThreadHealth();
  pFVar28 = (this->CompletionTask).Pimpl.Reference;
  if ((pFVar28 == (FTaskBase *)0x0) || ((pFVar28->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
    if (this == local_78) {
      return;
    }
    pFVar28 = (this->CompletionTask).Pimpl.Reference;
    (this->CompletionTask).Pimpl.Reference = (FTaskBase *)0x0;
    if (pFVar28 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar28->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000145e3861a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar28->_padding_)(pFVar28,1);
    return;
  }
  pFVar28 = (FTaskBase *)0x0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  this_00 = *(FRenderCommandList **)(lVar4 + 0xed0);
  *(undefined8 *)(lVar4 + 0xed0) = 0;
  if (this_00 != (FRenderCommandList *)0x0) {
    FRenderCommandList::Flush(this_00);
  }
  FlushRenderCommandFenceBundler();
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1158,"GameThreadWaitForTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x486);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1158);
  }
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                          ,0x489,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->CompletionTask).Pimpl.Reference == (FTaskBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Task.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                          ,0x48a,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar21 = (this->CompletionTask).Pimpl.Reference;
  if ((pFVar21 == (FTaskBase *)0x0) || ((pFVar21->Subsequents).bIsClosed != (atomic<bool>)0x0))
  goto LAB_145e3854b;
  FVar17 = StatPtr_STAT_GameIdleTime;
  if (StatPtr_STAT_GameIdleTime == (FThreadSafeStaticStat<FStat_STAT_GameIdleTime>)0x0) {
    pFVar16 = ::FName::FName(&local_88,"STAT_GameIdleTime");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_GameIdleTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameIdleTime,*pFVar16,
                        L"Game thread idle time","STATGROUP_Threading","STATCAT_Advanced",
                        L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar17;
  bVar7 = false;
  bVar11 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar13 = false;
  bVar9 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_145e3800b:
    bVar7 = bVar13;
    bVar11 = bVar9;
    bVar9 = false;
    FVar25 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar11 = true;
      bVar13 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_e8.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                   ,0x48e);
        bVar7 = true;
        bVar11 = true;
        bVar13 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145e3800b;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar9 = true;
  }
  NumRecursiveCalls = NumRecursiveCalls + 1;
  if (NumRecursiveCalls < 2) {
LAB_145e3804d:
    pFVar18 = FTaskGraphInterface::Get();
    cVar12 = (**(code **)((longlong)*pFVar18 + 0x38))(pFVar18,1);
    local_res10 = param_1;
    if (cVar12 != '\0') goto LAB_145e38068;
  }
  else {
    if (2 < (byte)LogRendererCore._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_FlushRenderingC_15114f228,
                 (FLogCategoryBase *)&LogRendererCore);
    }
    if (NumRecursiveCalls < 2) goto LAB_145e3804d;
LAB_145e38068:
    local_res10 = false;
  }
  uVar24 = 0x21;
  if ((uint)GTimeToBlockOnRenderFence < 0x21) {
    uVar24 = GTimeToBlockOnRenderFence;
  }
  uVar27 = 0;
  if (uVar24 != 0) {
    uVar27 = uVar24;
  }
  FThreadHeartBeatClock::FThreadHeartBeatClock
            (&local_a0,(double)(uVar27 * 4) * __real_3f50624dd2f1a9fc);
  dVar29 = FThreadHeartBeatClock::Seconds(&local_a0);
  dVar32 = (double)GTimeoutForBlockOnRenderFence * __real_3f50624dd2f1a9fc;
  bVar13 = ::FDebug::IsEnsuring();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar23 = FCommandLine::Get();
    bDisabled = FParse::Param(pwVar23,L"nothreadtimeout");
    _Init_thread_footer(&::_TSS0);
  }
  FSharedEventRef::FSharedEventRef(&local_d0,AutoReset);
  FVar26.ReferenceController = local_d0.Ptr.SharedReferenceCount.ReferenceController;
  local_c0 = local_d0.Ptr.Object;
  if ((FTaskBase *)local_d0.Ptr.SharedReferenceCount.ReferenceController != (FTaskBase *)0x0) {
    LOCK();
    (local_d0.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d0.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar19 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar21 = pFVar28;
  if (pFVar19 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar19,2,true);
    pFVar19->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`GameThreadWaitForTask'::`20'::<lambda_1>,void,void>::_vftable_;
    if (((*(ulonglong *)&(pFVar19->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*(longlong *)&(pFVar19->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar19->LowLevelTask).field_0x28,&pFVar19->LowLevelTask);
    *(FTaskBase **)&pFVar19->LowLevelTask = pFVar19;
    *(undefined ***)&(pFVar19->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar19->LowLevelTask).field_0x8 = pFVar19;
    pFVar20 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar20 != (FTask *)0x0) {
      pFVar21 = *(FTaskBase **)&pFVar20->field_0x30;
    }
    *(FTaskBase **)&(pFVar19->LowLevelTask).field_0x30 = pFVar21;
    *(undefined8 *)&(pFVar19->LowLevelTask).field_0x38 = 0xc8000054453cc000;
    pFVar19->ExtendedPriority = Inline;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar19->_padding_)
    ;
    pFVar19[1]._padding_ = (longlong)local_c0;
    pFVar19[1]._padding_ = (longlong)FVar26.ReferenceController;
    pFVar19->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`GameThreadWaitForTask'::`20'::<lambda_1>_>::_vftable_
    ;
    FVar26.ReferenceController = (TReferenceControllerBase<1> *)pFVar28;
    pFVar21 = pFVar19;
  }
  pFVar19 = (this->CompletionTask).Pimpl.Reference;
  if (pFVar19 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(pFVar21,pFVar19);
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar21,0x100);
  if (pFVar21 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar21->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar21->_padding_)(pFVar21,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = (double)uVar27 * __real_40c3880000000000 + __real_3fe0000000000000;
  auVar31 = roundpd(extraout_XMM0,auVar31,1);
  uVar6 = (longlong)auVar31._0_8_ / 10000;
  uVar22 = 0xffffffff;
  if ((longlong)uVar6 < 0xffffffff) {
    uVar22 = uVar6;
  }
  if (0 < (longlong)uVar22) {
    pFVar28 = (FTaskBase *)(uVar22 & 0xffffffff);
  }
LAB_145e38300:
  CheckRenderingThreadHealth();
  if (local_res10 != false) {
    pFVar18 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar18 + 0x48))(pFVar18,1);
  }
  pFVar8 = local_d0.Ptr.Object;
  if (((longlong)auVar31._0_8_ < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("WaitTime.GetTicks() >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                          ,0x58,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar12 = (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8,pFVar28);
  FThreadHeartBeatClock::Tick(&local_a0);
  dVar30 = FThreadHeartBeatClock::Seconds(&local_a0);
  if (dVar30 < dVar32 + dVar29) {
LAB_145e3839d:
    bVar14 = false;
  }
  else {
    this_01 = FThreadHeartBeat::Get();
    bVar14 = FThreadHeartBeat::IsBeating(this_01);
    if (!bVar14) goto LAB_145e3839d;
    bVar14 = true;
  }
  bVar15 = ::FDebug::IsEnsuring();
  bVar13 = (bool)(bVar13 | bVar15);
  if (cVar12 == '\0') {
    if ((((bVar13 == false) && (bVar14)) && (bDisabled == false)) &&
       (((int)GTimeoutSuspendCount < 1 &&
        (bVar14 = FWindowsPlatformMisc::IsDebuggerPresent(), !bVar14)))) {
      dVar30 = FThreadHeartBeatClock::Seconds(&local_a0);
      HandleRenderTaskHang(GRenderThreadId,dVar30 - dVar29);
    }
    goto LAB_145e38300;
  }
  NumRecursiveCalls = NumRecursiveCalls + -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.Ptr.SharedReferenceCount.ReferenceController);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar25 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_b0);
      piVar2 = &this_02->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
LAB_145e3854b:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this != &local_80) {
    pFVar28 = (this->CompletionTask).Pimpl.Reference;
    (this->CompletionTask).Pimpl.Reference = (FTaskBase *)0x0;
    if (pFVar28 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar28->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar28->_padding_)(pFVar28,1);
      }
    }
  }
  if (this_00 != (FRenderCommandList *)0x0) {
    *(FRenderCommandList **)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0) =
         this_00;
  }
  return;
}

