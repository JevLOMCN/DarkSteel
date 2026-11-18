// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 13

// BeginBreadcrumb @ 145c50360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHI::GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb
          (uint param_1,uint param_2,ulong64 param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields>
              ((TLogScope<1> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    *(ulong64 *)(local_28 + 2) = param_3;
    Trace::Private::Field_WriteAuxData
              (3,(uchar *)(param_4->AllocatorInstance).Data,param_4->ArrayNum & 0x7ffff);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar2;
    if (lVar1 != local_20) {
      *(longlong *)(lVar1 + 0x28) = lVar2;
    }
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// BeginWork @ 145c50730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHI::GPUProfiler::FGpuProfilerTrace::BeginWork(uint param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(ulong64 *)(local_28 + 1) = param_2;
    *(ulong64 *)(local_28 + 3) = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// EndBreadcrumb @ 145c569c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::RHI::GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(uint param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(ulong64 *)(local_28 + 1) = param_2;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// EndWork @ 145c56df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::RHI::GPUProfiler::FGpuProfilerTrace::EndWork(uint param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(ulong64 *)(local_28 + 1) = param_2;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// FrameBoundary @ 145c58140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::RHI::GPUProfiler::FGpuProfilerTrace::FrameBoundary(uint param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// Initialize @ 145c5f490

void __cdecl UE::RHI::GPUProfiler::FGpuProfilerTrace::Initialize(void)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FNextSharedBuffer *pFVar4;
  int iVar5;
  undefined4 *puVar6;
  FSharedBuffer *pFVar7;
  uint uVar8;
  undefined4 local_res8;
  FNextSharedBuffer local_18;
  
  if (::bInitialized) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3482707779674702181>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GpuProfilerTrace.cpp"
                       ,0x165,"!bInitialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (-1 < GpuChannel->Enabled) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
        ::__l2::Uid = FGpuProfilerInitFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar7 = Trace::Private::GSharedBuffer;
    uVar8 = `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
            ::__l2::Uid >> 1;
    LOCK();
    iVar5 = Trace::Private::GSharedBuffer->Cursor;
    Trace::Private::GSharedBuffer->Cursor = Trace::Private::GSharedBuffer->Cursor + -0x1401;
    UNLOCK();
    if (iVar5 + -0x1401 < 0) {
      pFVar4 = Trace::Private::Writer_NextSharedBuffer(&local_18,pFVar7,iVar5,-0x1401);
      pFVar7 = pFVar4->Buffer;
      iVar5 = pFVar4->RegionStart;
    }
    puVar6 = (undefined4 *)((longlong)pFVar7 - ((longlong)iVar5 >> 10));
    local_res8 = CONCAT22(1,(short)uVar8);
    *puVar6 = local_res8;
    puVar6 = puVar6 + 1;
    *(undefined1 *)puVar6 = 2;
    LOCK();
    piVar1 = (int *)((longlong)((int)pFVar7 - (int)puVar6) + (longlong)puVar6);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  ::bInitialized = true;
  return;
}

// InitializeQueue @ 145c5fb20

void __cdecl UE::RHI::GPUProfiler::FGpuProfilerTrace::InitializeQueue(uint param_1,wchar_t *param_2)

{
  size_t sVar1;
  int iVar2;
  FImportantLogScope local_18;
  
  iVar2 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    iVar2 = (int)sVar1;
  }
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FImportantLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields>
              (&local_18,iVar2 * 2);
    *(uint *)local_18.Ptr = param_1;
    Trace::Private::FImportantLogScope::
    FFieldSet<UE::Trace::TField<1,4,enum_UE::Trace::WideString>,enum_UE::Trace::WideString>::Impl
              (&local_18,param_2,iVar2);
    LOCK();
    *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) =
         *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) + 1;
    UNLOCK();
  }
  return;
}

// InternalBreadcrumbSpec @ 145c5fc60

uint __cdecl
UE::RHI::GPUProfiler::FGpuProfilerTrace::InternalBreadcrumbSpec
          (wchar_t *param_1,wchar_t *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  uint *puVar1;
  wchar_t wVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  wchar_t *pwVar4;
  atomic<unsigned_int> aVar5;
  uchar *puVar6;
  size_t sVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  FImportantLogScope local_38;
  
  aVar5 = NextSpecId;
  if (-1 < GpuChannel->Enabled) {
    LOCK();
    NextSpecId = (atomic<unsigned_int>)((int)NextSpecId + 1);
    UNLOCK();
    sVar7 = wcslen(param_2);
    sVar8 = wcslen(param_1);
    if (-1 < GpuChannel->Enabled) {
      Trace::Private::FImportantLogScope::
      Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields>
                (&local_38,param_3->ArrayNum + ((int)sVar7 + (int)sVar8) * 2);
      puVar6 = local_38.Ptr;
      iVar9 = 0;
      iVar10 = 0;
      *(atomic<unsigned_int> *)local_38.Ptr = aVar5;
      wVar2 = *param_1;
      pwVar4 = param_1;
      while (wVar2 != L'\0') {
        pwVar4 = pwVar4 + 1;
        iVar10 = iVar10 + 1;
        wVar2 = *pwVar4;
      }
      puVar1 = (uint *)(local_38.Ptr + local_38.AuxCursor);
      *puVar1 = iVar10 << 0xe | 0x100;
      *(undefined1 *)puVar1 = 1;
      memcpy(puVar1 + 1,param_1,(ulonglong)(uint)(iVar10 * 2));
      local_38.AuxCursor = local_38.AuxCursor + iVar10 * 2;
      (&((atomic<unsigned_int> *)((longlong)puVar6 + 4))->field_0x0)[local_38.AuxCursor] = 3;
      wVar2 = *param_2;
      pwVar4 = param_2;
      while (wVar2 != L'\0') {
        pwVar4 = pwVar4 + 1;
        iVar9 = iVar9 + 1;
        wVar2 = *pwVar4;
      }
      *(uint *)(&((atomic<unsigned_int> *)((longlong)puVar6 + 4))->field_0x0 + local_38.AuxCursor) =
           iVar9 << 0xe | 0x200;
      (&((atomic<unsigned_int> *)((longlong)puVar6 + 4))->field_0x0)[local_38.AuxCursor] = 1;
      memcpy(&((atomic<unsigned_int> *)((longlong)puVar6 + 8))->field_0x0 + local_38.AuxCursor,
             param_2,(ulonglong)(uint)(iVar9 * 2));
      iVar10 = local_38.AuxCursor + 4 + iVar9 * 2;
      (&((atomic<unsigned_int> *)((longlong)puVar6 + 4))->field_0x0)[iVar10] = 3;
      uVar3 = param_3->ArrayNum;
      _Src = (param_3->AllocatorInstance).Data;
      *(uint *)(&((atomic<unsigned_int> *)((longlong)puVar6 + 4))->field_0x0 + iVar10) =
           uVar3 << 0xd | 0x300;
      (&((atomic<unsigned_int> *)((longlong)puVar6 + 4))->field_0x0)[iVar10] = 1;
      memcpy(&((atomic<unsigned_int> *)((longlong)puVar6 + 8))->field_0x0 + iVar10,_Src,
             (ulonglong)uVar3);
      (&((atomic<unsigned_int> *)((longlong)puVar6 + 8))->field_0x0)[(int)(iVar10 + uVar3)] = 3;
      LOCK();
      *(int *)(local_38.Ptr + local_38.BufferOffset) =
           *(int *)(local_38.Ptr + local_38.BufferOffset) + 1;
      UNLOCK();
    }
    return (uint)aVar5;
  }
  return 0;
}

// IsAvailable @ 145c5fe20

bool __cdecl UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(void)

{
  return (bool)((byte)((uint)GpuChannel->Enabled >> 0x1f) ^ 1);
}

// SignalFence @ 145c79f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHI::GPUProfiler::FGpuProfilerTrace::SignalFence(uint param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(ulong64 *)(local_28 + 1) = param_2;
    *(ulong64 *)(local_28 + 3) = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// Stats @ 145c7b710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::RHI::GPUProfiler::FGpuProfilerTrace::Stats(uint param_1,uint param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    local_28[2] = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// TraceWait @ 145c7cd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHI::GPUProfiler::FGpuProfilerTrace::TraceWait(uint param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(ulong64 *)(local_28 + 1) = param_2;
    *(ulong64 *)(local_28 + 3) = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// WaitFence @ 145c7f280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHI::GPUProfiler::FGpuProfilerTrace::WaitFence
          (uint param_1,ulong64 param_2,uint param_3,ulong64 param_4)

{
  undefined1 auStack_48 [32];
  uint *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(ulong64 *)(local_28 + 1) = param_2;
    local_28[3] = param_3;
    *(ulong64 *)(local_28 + 4) = param_4;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

