// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// <lambda_invoker_cdecl> @ 14197df20

void __cdecl
`FModuleTrace::Initialize'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (ulong param_1,void *param_2,void *param_3)

{
  if (param_1 == 1) {
    FModuleTrace::OnDllLoaded
              (param_3,*(_UNICODE_STRING **)((longlong)param_2 + 8),
               *(ulong64 *)((longlong)param_2 + 0x18));
    return;
  }
  if (param_1 == 2) {
    FModuleTrace::OnDllUnloaded(param_3,*(ulong64 *)((longlong)param_2 + 0x18));
    return;
  }
  return;
}

// FModuleTrace @ 141986b40

FModuleTrace * __thiscall FModuleTrace::FModuleTrace(FModuleTrace *this,FMalloc *param_1)

{
  (this->Subscribers).ArrayMax = 0x40;
  (this->Subscribers).ArrayNum = 0;
  this->CallbackCookie = (void *)0x0;
  this->ProgramHeapId = 0;
  Instance = this;
  return this;
}

// ~FModuleTrace @ 141988010

void __thiscall FModuleTrace::~FModuleTrace(FModuleTrace *this)

{
  code *pcVar1;
  bool bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  
  if (this->CallbackCookie != (void *)0x0) {
    hModule = LoadLibraryW(L"ntdll.dll");
    if (hModule == (HMODULE)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NtDll",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsModuleDiagnostics.cpp"
                         ,0x18,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = GetProcAddress(hModule,"LdrUnregisterDllNotification");
    (*pFVar3)(this->CallbackCookie);
  }
  return;
}

// Get @ 1419947f0

FModuleTrace * __cdecl FModuleTrace::Get(void)

{
  return Instance;
}

// Initialize @ 14199dd00

void __thiscall FModuleTrace::Initialize(FModuleTrace *this)

{
  undefined4 *puVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<unsigned_int> aVar5;
  bool bVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  int iVar8;
  longlong *plVar9;
  atomic<unsigned_int> aVar10;
  FImportantLogScope local_28;
  FImportantLogScope local_18;
  
  aVar10 = HeapIdCount;
  if (GTraceAllowed) {
    LOCK();
    aVar5 = (atomic<unsigned_int>)((int)HeapIdCount + 1);
    UNLOCK();
    bVar6 = HeapIdCount == (atomic<unsigned_int>)0x0;
    HeapIdCount = aVar5;
    if ((bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentId < Id",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\MemoryTrace.cpp"
                           ,0x2c3,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FImportantLogScope::Enter<FMemoryHeapSpecFields>(&local_28,0xc);
      puVar1 = (undefined4 *)(local_28.Ptr + local_28.AuxCursor);
      *(atomic<unsigned_int> *)local_28.Ptr = aVar10;
      *(atomic<unsigned_int> *)((longlong)local_28.Ptr + 4) = (atomic<unsigned_int>)0x0;
      *puVar1 = 0x18300;
      *(undefined1 *)puVar1 = 1;
      *(undefined8 *)(puVar1 + 1) = u_Module._0_8_;
      puVar1[3] = u_Module._8_4_;
      iVar8 = local_28.AuxCursor + 0xc;
      local_28.AuxCursor = local_28.AuxCursor + 0x10;
      (&((atomic<unsigned_int> *)((longlong)local_28.Ptr + 4))->field_0x0)[iVar8] = 3;
      *(undefined2 *)((longlong)local_28.Ptr + 8) = 0;
      LOCK();
      *(int *)(local_28.Ptr + local_28.BufferOffset) =
           *(int *)(local_28.Ptr + local_28.BufferOffset) + 1;
      UNLOCK();
    }
  }
  else {
    aVar10 = (atomic<unsigned_int>)0x0;
  }
  this->ProgramHeapId = (uint)aVar10;
  if (-1 < ModuleChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FDiagnosticsModuleInitFields>(&local_18,3);
    puVar2 = local_18.Ptr + local_18.AuxCursor;
    puVar2[0] = '\0';
    puVar2[1] = '`';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = local_18.Ptr + local_18.AuxCursor;
    *puVar2 = '\x01';
    *(short *)(puVar2 + 4) = s_pdb._0_2_;
    puVar2[6] = s_pdb[2];
    local_18.AuxCursor = local_18.AuxCursor + 7;
    local_18.Ptr[local_18.AuxCursor] = '\x03';
    *local_18.Ptr = '\0';
    LOCK();
    *(int *)(local_18.Ptr + local_18.BufferOffset) =
         *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
    UNLOCK();
  }
  hModule = LoadLibraryW(L"ntdll.dll");
  if ((hModule == (HMODULE)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NtDll",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsModuleDiagnostics.cpp"
                         ,0x18,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = GetProcAddress(hModule,"LdrRegisterDllNotification");
  (*pFVar7)(0,`FModuleTrace::Initialize'::__l2::<lambda_1>::<lambda_invoker_cdecl>,this,
            &this->CallbackCookie);
  plVar9 = *(longlong **)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x18) + 0x20);
  lVar3 = plVar9[1];
  do {
    if (plVar9[4] == 0) {
      return;
    }
    OnDllLoaded(this,(_UNICODE_STRING *)(plVar9 + 7),plVar9[4]);
    plVar9 = (longlong *)*plVar9;
  } while (plVar9 != (longlong *)lVar3);
  return;
}

// OnDllLoaded @ 1419a3d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FModuleTrace::OnDllLoaded(FModuleTrace *this,_UNICODE_STRING *param_1,ulong64 param_2)

{
  wchar_t *_Src;
  code *pcVar1;
  undefined8 uVar2;
  TArray<void_(__cdecl*)(bool,void_*,wchar_t_const_*),TFixedAllocator<64>_> *pTVar3;
  _UNICODE_STRING *p_Var4;
  uchar *puVar5;
  uint uVar6;
  FWriteBuffer *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  size_t _Size;
  bool bVar16;
  bool bVar17;
  undefined1 auStackY_108 [32];
  bool local_d8 [4];
  undefined4 local_d4;
  uint local_d0;
  longlong local_c8;
  _UNICODE_STRING *local_c0;
  FImportantLogScope local_b8;
  undefined4 local_a4;
  undefined4 *local_a0;
  longlong local_98;
  ForElementType<unsigned_char> local_90;
  uint local_7c [3];
  ulong64 *local_70;
  longlong local_68;
  ulong64 *local_60;
  longlong local_58;
  TLogScope<0> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8 = (longlong)*(int *)(param_2 + 0x3c) + param_2;
  local_7c[0] = 0;
  local_7c[1] = 0x14;
  _Size = 0;
  uVar9 = (ulonglong)*(uint *)(local_c8 + 0xbc) / 7;
  lVar14 = *(uint *)(local_c8 + 0xb8) + param_2;
  uVar13 = 0;
  uVar6 = (uint)((*(uint *)(local_c8 + 0xbc) - uVar9 >> 1) + uVar9 >> 4);
  local_c0 = param_1;
  if (uVar6 != 0) {
    do {
      lVar8 = uVar13 * 0x1c;
      if (((*(int *)(lVar8 + 0xc + lVar14) == 2) && (0x17 < *(uint *)(lVar8 + 0x10 + lVar14))) &&
         (piVar11 = (int *)(*(uint *)(lVar8 + 0x14 + lVar14) + param_2), *piVar11 == 0x53445352)) {
        if ((piVar11 + 1 == (int *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar16)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar10 = UE::Core::Private::
                 ReallocGrow<0,TFixedAllocator<20>::ForElementType<unsigned_char>_>
                           (1,1,0x10,&local_90,(int *)local_7c,(int *)(local_7c + 1));
        uVar2 = *(undefined8 *)(piVar11 + 3);
        *(undefined8 *)(local_90.InlineData + iVar10) = *(undefined8 *)(piVar11 + 1);
        *(undefined8 *)(local_90.InlineData + (longlong)iVar10 + 8) = uVar2;
        if ((piVar11 + 5 == (int *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar16)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar10 = UE::Core::Private::
                 ReallocGrow<0,TFixedAllocator<20>::ForElementType<unsigned_char>_>
                           (1,1,4,&local_90,(int *)local_7c,(int *)(local_7c + 1));
        *(int *)(local_90.InlineData + iVar10) = piVar11[5];
        _Size = (size_t)local_7c[0];
        break;
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < uVar6);
  }
  p_Var4 = local_c0;
  lVar14 = local_c8;
  if (-1 < ModuleChannel->Enabled) {
    iVar15 = (int)_Size;
    UE::Trace::Private::FImportantLogScope::Enter<FDiagnosticsModuleLoadFields>
              (&local_b8,(uint)local_c0->Length + iVar15);
    puVar5 = local_b8.Ptr;
    _Src = p_Var4->Buffer;
    uVar6 = p_Var4->Length & 0xfffffffe;
    piVar11 = (int *)((longlong)local_b8.Ptr + (longlong)local_b8.AuxCursor);
    *piVar11 = uVar6 << 0xd;
    *(undefined1 *)piVar11 = 1;
    memcpy(piVar11 + 1,_Src,(ulonglong)uVar6);
    lVar14 = local_c8;
    iVar10 = local_b8.AuxCursor + uVar6;
    local_b8.AuxCursor = iVar10 + 4;
    *(undefined1 *)((longlong)puVar5 + (longlong)iVar10 + 4) = 3;
    *(ulong64 *)puVar5 = param_2;
    *(undefined4 *)((longlong)puVar5 + 8) = *(undefined4 *)(local_c8 + 0x50);
    *(uint *)((longlong)puVar5 + (longlong)iVar10 + 4) = iVar15 << 0xd | 0x300;
    *(undefined1 *)((longlong)puVar5 + (longlong)iVar10 + 4) = 1;
    memcpy((void *)((longlong)puVar5 + (longlong)iVar10 + 8),&local_90,_Size);
    local_b8.AuxCursor = iVar10 + iVar15 + 8;
    *(undefined1 *)((longlong)(iVar10 + iVar15) + 8 + (longlong)puVar5) = 3;
    LOCK();
    *(int *)((longlong)local_b8.BufferOffset + (longlong)local_b8.Ptr) =
         *(int *)((longlong)local_b8.BufferOffset + (longlong)local_b8.Ptr) + 1;
    UNLOCK();
  }
  bVar16 = -1 < MetadataChannel->Enabled;
  if (bVar16) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_50);
    *(undefined8 *)(local_50._8_8_ + 0x28) = *(undefined8 *)(local_50._8_8_ + 0x20);
  }
  uVar9 = (ulonglong)_tls_index;
  local_d8[0] = false;
  bVar17 = MemAllocChannel->Enabled < 0;
  if (bVar17) {
    local_d4 = local_a4;
  }
  else {
    UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopeFields>((TLogScope<0> *)&local_a0);
    *local_a0 = 0x14;
    *(undefined8 *)(local_98 + 0x28) = *(undefined8 *)(local_98 + 0x20);
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
    local_d4 = *(undefined4 *)(lVar8 + 0xbb0);
    *(undefined4 *)(lVar8 + 0xbb0) = 0x14;
  }
  local_d8[0] = !bVar17;
  uVar6 = *(uint *)(lVar14 + 0x50);
  if (GTraceAllowed != false) {
    for (iVar10 = 0; (0x1000U >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
    local_d0 = iVar10 * 8 | uVar6 & 7;
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0xbb4) == '\0')
        && (-1 < CallstackChannel->Enabled)) && (FBacktracer::Instance != (FBacktracer *)0x0)) {
      uVar12 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      uVar12 = 0;
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryAllocSystemFields>((TLogScope<0> *)&local_70);
      *local_70 = param_2;
      *(uint *)(local_70 + 1) = uVar12;
      *(uint *)((longlong)local_70 + 0xc) = uVar6 >> 3;
      *(char *)(local_70 + 2) = (char)local_d0;
      *(undefined8 *)(local_68 + 0x28) = *(undefined8 *)(local_68 + 0x20);
    }
    MemoryTrace_UpdateInternal();
    lVar14 = local_c8;
  }
  MemoryTrace_MarkAllocAsHeap(param_2,this->ProgramHeapId,None,0);
  uVar6 = *(uint *)(lVar14 + 0x50);
  if (GTraceAllowed != false) {
    for (iVar10 = 0; (0x1000U >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
    }
    uVar12 = 0;
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0xbb4) == '\0')
        && (uVar12 = 0, -1 < CallstackChannel->Enabled)) &&
       (FBacktracer::Instance != (FBacktracer *)0x0)) {
      uVar12 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryAllocSystemFields>((TLogScope<0> *)&local_60);
      *local_60 = param_2;
      *(uint *)(local_60 + 1) = uVar12;
      *(uint *)((longlong)local_60 + 0xc) = uVar6 >> 3;
      *(byte *)(local_60 + 2) = (byte)uVar6 & 7 | (char)iVar10 * '\b';
      *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
    }
    MemoryTrace_UpdateInternal();
  }
  if (local_d8[0] != false) {
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
    *(undefined4 *)(lVar14 + 0xbb0) = local_d4;
    if (*(char *)(lVar14 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar7 = *(FWriteBuffer **)(lVar14 + 0x20);
    if ((int)pFVar7 - *(int *)&pFVar7->Cursor < 1) {
      pFVar7 = UE::Trace::Private::Writer_NextBuffer();
    }
    uVar9 = (ulonglong)_tls_index;
    *pFVar7->Cursor = '\n';
    pFVar7->Cursor = pFVar7->Cursor + 1;
    pFVar7->Committed = pFVar7->Cursor;
  }
  if (bVar16) {
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
    if (*(char *)(lVar14 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar7 = *(FWriteBuffer **)(lVar14 + 0x20);
    if ((int)pFVar7 - *(int *)&pFVar7->Cursor < 1) {
      pFVar7 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar7->Cursor = '\n';
    pFVar7->Cursor = pFVar7->Cursor + 1;
    pFVar7->Committed = pFVar7->Cursor;
  }
  p_Var4 = local_c0;
  piVar11 = &(this->Subscribers).ArrayNum;
  iVar10 = *piVar11;
  pTVar3 = &this->Subscribers;
  while( true ) {
    if (*piVar11 != iVar10) {
      `TCheckedPointerIterator<void_(__cdecl*)(bool,void_*,wchar_t_const_*),int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_d8);
    }
    if (this == (FModuleTrace *)((pTVar3->AllocatorInstance).InlineData + iVar10)) break;
    (**(code **)(this->Subscribers).AllocatorInstance.InlineData[0].Pad)(1,param_2,p_Var4->Buffer);
    this = (FModuleTrace *)((this->Subscribers).AllocatorInstance.InlineData + 1);
  }
  return;
}

// OnDllNotification @ 1419a4290

void __thiscall FModuleTrace::OnDllNotification(FModuleTrace *this,uint param_1,void *param_2)

{
  if (param_1 == 1) {
    OnDllLoaded(this,*(_UNICODE_STRING **)((longlong)param_2 + 8),
                *(ulong64 *)((longlong)param_2 + 0x18));
    return;
  }
  if (param_1 == 2) {
    OnDllUnloaded(this,*(ulong64 *)((longlong)param_2 + 0x18));
    return;
  }
  return;
}

// OnDllUnloaded @ 1419a42c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FModuleTrace::OnDllUnloaded(FModuleTrace *this,ulong64 param_1)

{
  int *piVar1;
  TArray<void_(__cdecl*)(bool,void_*,wchar_t_const_*),TFixedAllocator<64>_> *pTVar2;
  uint uVar3;
  FNextSharedBuffer *pFVar4;
  int iVar5;
  undefined4 *puVar6;
  FSharedBuffer *pFVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  FNextSharedBuffer local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar8 = (ulonglong)_tls_index;
  if (GTraceAllowed) {
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0xbb4) == '\0')
        && (-1 < CallstackChannel->Enabled)) && (FBacktracer::Instance != (FBacktracer *)0x0)) {
      uVar3 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      uVar3 = 0;
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_30);
      (local_30.Buffer)->Cursor = (int)param_1;
      (local_30.Buffer)->Size = (int)(param_1 >> 0x20);
      (local_30.Buffer)->Final = uVar3;
      *(undefined8 *)(CONCAT44(local_30._12_4_,local_30.RegionStart) + 0x28) =
           *(undefined8 *)(CONCAT44(local_30._12_4_,local_30.RegionStart) + 0x20);
    }
    MemoryTrace_UpdateInternal();
  }
  MemoryTrace_UnmarkAllocAsHeap(param_1,this->ProgramHeapId,0);
  if (GTraceAllowed != false) {
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0xbb4) == '\0')
        && (-1 < CallstackChannel->Enabled)) && (FBacktracer::Instance != (FBacktracer *)0x0)) {
      uVar3 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      uVar3 = 0;
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_30);
      (local_30.Buffer)->Cursor = (int)param_1;
      (local_30.Buffer)->Size = (int)(param_1 >> 0x20);
      (local_30.Buffer)->Final = uVar3;
      *(undefined8 *)(CONCAT44(local_30._12_4_,local_30.RegionStart) + 0x28) =
           *(undefined8 *)(CONCAT44(local_30._12_4_,local_30.RegionStart) + 0x20);
    }
    MemoryTrace_UpdateInternal();
  }
  if (-1 < ModuleChannel->Enabled) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
        `public:_static_unsigned_int___cdecl_FDiagnosticsModuleUnloadFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_unsigned_int___cdecl_FDiagnosticsModuleUnloadFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_unsigned_int___cdecl_FDiagnosticsModuleUnloadFields::GetUid(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        `public:_static_unsigned_int___cdecl_FDiagnosticsModuleUnloadFields::GetUid(void)'::__l2::
        Uid = FDiagnosticsModuleUnloadFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FDiagnosticsModuleUnloadFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar7 = UE::Trace::Private::GSharedBuffer;
    uVar3 = `public:_static_unsigned_int___cdecl_FDiagnosticsModuleUnloadFields::GetUid(void)'::__l2
            ::Uid >> 1;
    LOCK();
    iVar5 = UE::Trace::Private::GSharedBuffer->Cursor;
    UE::Trace::Private::GSharedBuffer->Cursor = UE::Trace::Private::GSharedBuffer->Cursor + -0x3001;
    UNLOCK();
    if (iVar5 + -0x3001 < 0) {
      pFVar4 = UE::Trace::Private::Writer_NextSharedBuffer(&local_30,pFVar7,iVar5,-0x3001);
      pFVar7 = pFVar4->Buffer;
      iVar5 = pFVar4->RegionStart;
    }
    puVar6 = (undefined4 *)((longlong)pFVar7 - ((longlong)iVar5 >> 10));
    local_34 = CONCAT22(8,(short)uVar3);
    *puVar6 = local_34;
    local_30.Buffer = (FSharedBuffer *)(puVar6 + 1);
    local_30.RegionStart = (int)pFVar7 - (int)local_30.Buffer;
    local_30._12_4_ = 0;
    (local_30.Buffer)->Cursor = (int)param_1;
    (local_30.Buffer)->Size = (int)(param_1 >> 0x20);
    LOCK();
    piVar1 = (int *)((longlong)&(local_30.Buffer)->Cursor + (longlong)local_30.RegionStart);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = &(this->Subscribers).ArrayNum;
  iVar5 = *piVar1;
  pTVar2 = &this->Subscribers;
  while( true ) {
    if (*piVar1 != iVar5) {
      `TCheckedPointerIterator<void_(__cdecl*)(bool,void_*,wchar_t_const_*),int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_38);
    }
    if (this == (FModuleTrace *)((pTVar2->AllocatorInstance).InlineData + iVar5)) break;
    (**(code **)(this->Subscribers).AllocatorInstance.InlineData[0].Pad)(0,param_1,0);
    this = (FModuleTrace *)((this->Subscribers).AllocatorInstance.InlineData + 1);
  }
  return;
}

// Subscribe @ 1419aca20

void __thiscall
FModuleTrace::Subscribe(FModuleTrace *this,_func___cdecl_void_bool_void_ptr_wchar_t_ptr *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTypeCompatibleBytes<void_(__cdecl*)(bool,void_*,wchar_t_const_*)> local_res10 [3];
  
  local_res10[0].Pad = (uchar  [8])param_1;
  if ((this <= (FModuleTrace *)local_res10) &&
     (local_res10 < (this->Subscribers).AllocatorInstance.InlineData + (this->Subscribers).ArrayMax)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Subscribers).ArrayNum;
  piVar1 = &(this->Subscribers).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<void_(__cdecl*)(bool,void_*,wchar_t_const_*)>_>
                      (0x808,(ForElementType<void_(__cdecl*)(bool,void_*,wchar_t_const_*)> *)this,
                       piVar1);
  }
  (this->Subscribers).ArrayNum = iVar4 + 1;
  *&(this->Subscribers).AllocatorInstance.InlineData[iVar4].Pad = local_res10[0].Pad;
  return;
}

