// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 17

// OutputAsyncPackageImportDependency @ 141f3f880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FLoadTimeProfilerTracePrivate::OutputAsyncPackageImportDependency(void *param_1,void *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeAsyncPackageImportDependencyFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputAsyncPackageLinkerAssociation @ 141f3f900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FLoadTimeProfilerTracePrivate::OutputAsyncPackageLinkerAssociation(void *param_1,void *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeAsyncPackageLinkerAssociationFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputAsyncPackageRequestAssociation @ 141f3f980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FLoadTimeProfilerTracePrivate::OutputAsyncPackageRequestAssociation(void *param_1,ulong64 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeAsyncPackageRequestAssociationFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputBeginProcessSummary @ 141f3fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputBeginProcessSummary(void *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeBeginProcessSummaryFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputBeginRequest @ 141f3fa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputBeginRequest(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeBeginRequestFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputClassInfo @ 141f3fb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputClassInfo(UClass *param_1,FName *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  uchar *puVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_868 [32];
  FImportantLogScope local_848;
  wchar_t local_838 [1040];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_868;
  uVar2 = ::FName::ToStringInternal(param_2,local_838,0x40b);
  if (-1 < LoadTimeChannel->Enabled) {
    uVar2 = uVar2 & 0xffff;
    UE::Trace::Private::FImportantLogScope::Enter<FLoadTimeClassInfoFields>(&local_848,uVar2);
    pwVar4 = local_838;
    lVar6 = (longlong)local_848.AuxCursor;
    *(UClass **)local_848.Ptr = param_1;
    *(uint *)(local_848.Ptr + lVar6) = uVar2 << 0xd | 0x100;
    puVar3 = local_848.Ptr + lVar6 + 4;
    local_848.Ptr[lVar6] = '\x01';
    if (uVar2 != 0) {
      uVar5 = (ulonglong)uVar2;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
        *puVar3 = (uchar)wVar1;
        puVar3 = puVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    local_848.Ptr[(longlong)(int)(local_848.AuxCursor + uVar2) + 4] = '\x03';
    LOCK();
    *(int *)(local_848.Ptr + local_848.BufferOffset) =
         *(int *)(local_848.Ptr + local_848.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

// OutputClassInfo @ 141f3fc20

void __cdecl FLoadTimeProfilerTracePrivate::OutputClassInfo(UClass *param_1,wchar_t *param_2)

{
  size_t sVar1;
  uint uVar2;
  FImportantLogScope local_18;
  
  sVar1 = wcslen(param_2);
  if (-1 < LoadTimeChannel->Enabled) {
    uVar2 = (uint)sVar1 & 0xffff;
    UE::Trace::Private::FImportantLogScope::Enter<FLoadTimeClassInfoFields>(&local_18,uVar2);
    *(UClass **)local_18.Ptr = param_1;
    UE::Trace::Private::FImportantLogScope::
    FFieldSet<UE::Trace::TField<1,8,enum_UE::Trace::AnsiString>,enum_UE::Trace::AnsiString>::Impl
              (&local_18,param_2,uVar2);
    LOCK();
    *(int *)(local_18.Ptr + local_18.BufferOffset) =
         *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

// OutputDestroyAsyncPackage @ 141f3fca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputDestroyAsyncPackage(void *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeDestroyAsyncPackageFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputDestroyLinker @ 141f3fd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputDestroyLinker(void *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeDestroyLinkerFields>((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputEndProcessSummary @ 141f3fd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputEndProcessSummary(void)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeEndProcessSummaryFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputEndRequest @ 141f3fe00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputEndRequest(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeEndRequestFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputNewAsyncPackage @ 141f3fe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputNewAsyncPackage(void *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeNewAsyncPackageFields>((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputNewLinker @ 141f3ff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputNewLinker(void *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeNewLinkerFields>((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputPackageSummary @ 141f3ff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FLoadTimeProfilerTracePrivate::OutputPackageSummary
          (void *param_1,FName *param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  wchar_t *pwVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_878 [32];
  undefined8 *local_858;
  longlong local_850;
  wchar_t local_848;
  wchar_t local_846 [1039];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_878;
  uVar3 = ::FName::ToStringInternal(param_2,&local_848,0x40b);
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimePackageSummaryFields>((TLogScope<1> *)&local_858);
    *local_858 = param_1;
    *(uint *)(local_858 + 1) = param_3;
    *(uint *)((longlong)local_858 + 0xc) = param_4;
    *(uint *)(local_858 + 2) = param_5;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
      pwVar1 = &local_848;
      while (local_848 != L'\0') {
        pwVar1 = pwVar1 + 1;
        uVar3 = uVar3 + 1;
        local_848 = *pwVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(4,&local_848,uVar3);
    uVar5 = (ulonglong)_tls_index;
    *(int *)((longlong)local_858 + 0x14) = param_6;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar4;
    if (lVar2 != local_850) {
      *(longlong *)(lVar2 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_850 + 0x28) = *(undefined8 *)(local_850 + 0x20);
  }
  return;
}

// OutputResumeAsyncLoading @ 141f400c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputResumeAsyncLoading(void)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeResumeAsyncLoadingFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputStartAsyncLoading @ 141f40140

void __cdecl FLoadTimeProfilerTracePrivate::OutputStartAsyncLoading(void)

{
  FSharedBuffer *pFVar1;
  int *piVar2;
  FNextSharedBuffer *pFVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  FSharedBuffer *pFVar7;
  LARGE_INTEGER local_res8;
  FNextSharedBuffer local_18;
  
  if (-1 < LoadTimeChannel->Enabled) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::__l2
          ::_thread_safe_static_guard_0__ == -1) {
        `public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::__l2::
        Uid = FLoadTimeStartAsyncLoadingFields::Initialize();
        _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    pFVar7 = UE::Trace::Private::GSharedBuffer;
    uVar5 = `public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::
            __l2::Uid >> 1;
    LOCK();
    iVar6 = UE::Trace::Private::GSharedBuffer->Cursor;
    UE::Trace::Private::GSharedBuffer->Cursor = UE::Trace::Private::GSharedBuffer->Cursor + -0x3001;
    UNLOCK();
    if (iVar6 + -0x3001 < 0) {
      pFVar3 = UE::Trace::Private::Writer_NextSharedBuffer(&local_18,pFVar7,iVar6,-0x3001);
      pFVar7 = pFVar3->Buffer;
      iVar6 = pFVar3->RegionStart;
    }
    puVar4 = (undefined4 *)((longlong)pFVar7 - ((longlong)iVar6 >> 10));
    local_res8.s.LowPart._0_2_ = (undefined2)uVar5;
    local_res8.s.LowPart._2_2_ = 8;
    *puVar4 = CONCAT22(8,local_res8.s.LowPart._0_2_);
    pFVar1 = (FSharedBuffer *)(puVar4 + 1);
    iVar6 = (int)pFVar7 - (int)pFVar1;
    local_18._12_4_ = 0;
    local_18.Buffer = pFVar1;
    local_18.RegionStart = iVar6;
    QueryPerformanceCounter(&local_res8);
    (local_18.Buffer)->Cursor = CONCAT22(local_res8.s.LowPart._2_2_,local_res8.s.LowPart._0_2_);
    (local_18.Buffer)->Size = local_res8._4_4_;
    LOCK();
    piVar2 = (int *)((longlong)&pFVar1->Cursor + (longlong)iVar6);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

// OutputSuspendAsyncLoading @ 141f40280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLoadTimeProfilerTracePrivate::OutputSuspendAsyncLoading(void)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoadTimeSuspendAsyncLoadingFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

