// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// Create @ 1459b8e40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<FD3D12SyncPoint> __cdecl
FD3D12SyncPoint::Create(ED3D12SyncPointType param_1,wchar_t *param_2)

{
  FBaseGraphTask *pFVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  atomic<void_*> aVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  undefined4 in_register_0000000c;
  FD3D12SyncPoint *pFVar8;
  undefined8 in_R8;
  FLLMScope local_res8 [2];
  undefined8 *local_res20;
  FMemScope local_38 [2];
  
  pFVar8 = (FD3D12SyncPoint *)CONCAT44(in_register_0000000c,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                      ::__l2::LLMScope_Name103,L"RHIMisc/CreateSyncPoint");
      _Init_thread_footer(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
             ::__l2::LLMScope_Name103,false,None,Default,true);
  FMemScope::FMemScope
            (local_38,&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                       ::__l2::LLMScope_Name103,true);
  uVar5 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)&MemoryPool)
  ;
  aVar6 = (atomic<void_*>)0x0;
  if (uVar5 != 0) {
    aVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe][uVar5 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
  }
  if (aVar6 == (atomic<void_*>)0x0) {
    aVar6 = (atomic<void_*>)FMemory::Malloc(0x38,8);
    if (aVar6 == (atomic<void_*>)0x0) {
      pFVar8->_padding_ = 0;
      goto LAB_1459b8fb2;
    }
  }
  pFVar1 = (FBaseGraphTask *)((longlong)aVar6 + 0x28);
  *(longlong *)pFVar1 = 0;
  *(undefined4 *)((longlong)aVar6 + 8) = 0;
  *(undefined ***)aVar6 = &___7FD3D12SyncPoint__6B_;
  *(undefined1 *)((longlong)aVar6 + 0x20) = 0;
  *(undefined8 *)((longlong)aVar6 + 0x30) = in_R8;
  if ((int)param_2 == 1) {
    TVar7 = FBaseGraphTask::CreateGraphEvent();
    if (pFVar1 != TVar7.Reference) {
      puVar4 = *(undefined8 **)pFVar1;
      *(longlong *)pFVar1 = *(longlong *)TVar7.Reference;
      *(undefined8 *)TVar7.Reference = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 6);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar4)(puVar4,(ulonglong)param_2 & 0xffffffff);
        }
      }
    }
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res20 + 6);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_res20 != (undefined8 *)0x0)) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
  }
  pFVar8->_padding_ = (longlong)aVar6;
  if (aVar6 != (atomic<void_*>)0x0) {
    LOCK();
    *(int *)((longlong)aVar6 + 8) = *(int *)((longlong)aVar6 + 8) + 1;
    UNLOCK();
  }
LAB_1459b8fb2:
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res8);
  return (TRefCountPtr<FD3D12SyncPoint>)pFVar8;
}

// IsComplete @ 1459c73d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12SyncPoint::IsComplete(FD3D12SyncPoint *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->GraphEvent).Reference == (FBaseGraphTask *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.h"
                       ,0x6d,
                       L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)((this->GraphEvent).Reference)->field_0xd0;
}

// FD3D12SyncPoint @ 1459f5030

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SyncPoint * __thiscall
FD3D12SyncPoint::FD3D12SyncPoint(FD3D12SyncPoint *this,ED3D12SyncPointType param_1,wchar_t *param_2)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_00;
  FBaseGraphTask *pFVar6;
  FD3D12SyncPoint *pFVar7;
  FTask *pFVar8;
  undefined8 *puVar9;
  FBaseGraphTask *pFVar10;
  longlong local_28 [2];
  
  pFVar10 = (FBaseGraphTask *)0x0;
  this->DebugName = param_2;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12SyncPoint__6B_;
  pTVar1 = &this->GraphEvent;
  (this->ResolvedFence).bIsSet = false;
  pTVar1->Reference = (FBaseGraphTask *)0x0;
  if (param_1 != GPUAndCPU) {
    return this;
  }
  this_00 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate(this_00);
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              (pFVar6,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0);
    *(undefined ***)pFVar6 = &___7FGraphEventImpl__6B_;
    TaskTrace::Created(*(ulong64 *)&pFVar6->field_0x50,0xd8);
    if (((*(ulonglong *)&pFVar6->field_0xb0 & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FD3D12SyncPoint *)(*pcVar4)();
      return pFVar7;
    }
    (**(code **)(*(longlong *)&pFVar6->field_0xa0 + 0x18))(&pFVar6->field_0xa0,&pFVar6->field_0x78);
    *(FBaseGraphTask **)&pFVar6->field_0x78 = pFVar6;
    *(undefined ***)&pFVar6->field_0xa0 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FBaseGraphTask **)&pFVar6->field_0x80 = pFVar6;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar8 != (FTask *)0x0) {
      pFVar10 = *(FBaseGraphTask **)&pFVar8->field_0x30;
    }
    *(FBaseGraphTask **)&pFVar6->field_0xa8 = pFVar10;
    *(undefined8 *)&pFVar6->field_0xb0 = 0xc8000054184c7c00;
    pFVar6->field_0x44 = 2;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar6->field_0x8);
    pFVar10 = pFVar6;
  }
  if (pTVar1 == (TRefCountPtr<FBaseGraphTask> *)local_28) {
    if (pFVar10 == (FBaseGraphTask *)0x0) {
      return this;
    }
    LOCK();
    puVar2 = &pFVar10->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return this;
    }
    puVar9 = *(undefined8 **)pFVar10;
  }
  else {
    pFVar6 = pTVar1->Reference;
    pTVar1->Reference = pFVar10;
    if (pFVar6 == (FBaseGraphTask *)0x0) {
      return this;
    }
    LOCK();
    puVar2 = &pFVar6->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return this;
    }
    puVar9 = *(undefined8 **)pFVar6;
    pFVar10 = pFVar6;
  }
  (*(code *)*puVar9)(pFVar10,1);
  return this;
}

// Wait @ 145a836a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12SyncPoint::Wait(FD3D12SyncPoint *this)

{
  wchar_t wVar1;
  uint uVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  FBaseGraphTask *this_00;
  code *pcVar5;
  wchar_t *pwVar6;
  FD3D12DynamicRHI *this_01;
  bool bVar7;
  BOOL BVar8;
  DWORD DVar9;
  longlong lVar10;
  FProcessResult FVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  ulong64 uVar14;
  FWriteBuffer *pFVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_98 [33];
  undefined1 local_77 [7];
  FScopeIdle local_70;
  LARGE_INTEGER local_68;
  code *local_60;
  undefined1 *local_58;
  TLogScope<1> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((this->GraphEvent).Reference == (FBaseGraphTask *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                         ,0x3d2,
                         L"This sync point was not created with a CPU event. Cannot wait for completion on the CPU."
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->GraphEvent).Reference)->field_0xd0 != '\0') goto LAB_145a839b5;
  bVar7 = false;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuSyncPoint_WaitFields>(&local_48);
    pwVar3 = this->DebugName;
    iVar17 = 0;
    wVar1 = *pwVar3;
    pwVar6 = pwVar3;
    while (wVar1 != L'\0') {
      pwVar6 = pwVar6 + 1;
      iVar17 = iVar17 + 1;
      wVar1 = *pwVar6;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar3,iVar17);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    **(undefined1 **)(lVar4 + 0x20) = 6;
    lVar10 = *(longlong *)(lVar4 + 0x20) + 1;
    *(longlong *)(lVar4 + 0x20) = lVar10;
    if (lVar4 != local_48._8_8_) {
      *(longlong *)(lVar4 + 0x28) = lVar10;
    }
    bVar7 = true;
    *(undefined8 *)(local_48._8_8_ + 0x28) = *(undefined8 *)(local_48._8_8_ + 0x20);
  }
  this_01 = FD3D12DynamicRHI::SingleD3DRHI;
  this_00 = (this->GraphEvent).Reference;
  if (FD3D12DynamicRHI::SingleD3DRHI->InterruptThread == (FD3D12Thread *)0x0) {
    if ((this_00 == (FBaseGraphTask *)0x0) || (this_00->field_0xd0 == '\0')) {
      UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle
                (&local_70,this_00 == (FBaseGraphTask *)0x0);
      BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this_01->InterruptCS);
      if (BVar8 == 0) {
        if (this_00 != (FBaseGraphTask *)0x0) {
          do {
            if (this_00->field_0xd0 != '\0') goto LAB_145a838c0;
            FWindowsPlatformProcess::SleepNoStats(0.0);
            BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this_01->InterruptCS);
          } while (BVar8 == 0);
          goto LAB_145a83862;
        }
      }
      else {
LAB_145a83862:
        DVar9 = GetCurrentThreadId();
        uVar2 = this_01->InterruptThreadID;
        this_01->InterruptThreadID = DVar9;
        do {
          FVar11 = FD3D12DynamicRHI::ProcessInterruptQueue(this_01);
          if (this_00 == (FBaseGraphTask *)0x0) {
            uVar16 = (uint)*(undefined8 *)FVar11 & 1;
          }
          else {
            uVar16 = (uint)(this_00->field_0xd0 == '\0');
          }
        } while (uVar16 != 0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this_01->InterruptCS);
        this_01->InterruptThreadID = uVar2;
      }
LAB_145a838c0:
      if (local_70.bIgnore == false) {
        puVar12 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
        local_58 = local_77;
        local_60 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar13 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar12);
        QueryPerformanceCounter(&local_68);
        *(DWORD *)(pFVar13 + 2) = *(int *)(pFVar13 + 2) + (local_68.s.LowPart - local_70.Start);
        if (0 < *(int *)(pFVar13 + 3)) {
          *(DWORD *)&pFVar13[2].field_0x4 =
               *(int *)&pFVar13[2].field_0x4 + (local_68.s.LowPart - local_70.Start);
        }
        pFVar13[3].field_0x4 = 0;
      }
      if (local_70.TraceEventScope.bEnabled != false) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  else if ((this_00 != (FBaseGraphTask *)0x0) && (this_00->field_0xd0 == '\0')) {
    FBaseGraphTask::Wait(this_00,AnyNormalThreadNormalTask);
  }
  if (bVar7) {
    uVar14 = UE::Trace::Private::TimeGetTimestamp();
    lVar10 = uVar14 - UE::Trace::Private::GStartCycle;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar15 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar15 - *(int *)&pFVar15->Cursor < 8) {
      pFVar15 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar15->Cursor = lVar10 * 0x100 + 0x12;
    pFVar15->Cursor = pFVar15->Cursor + 8;
    pFVar15->Committed = pFVar15->Cursor;
  }
LAB_145a839b5:
  if ((((this->GraphEvent).Reference)->field_0xd0 == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                         ,0x3df,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

