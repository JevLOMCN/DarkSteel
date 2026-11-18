// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// OutputBookmark<wchar_t_const_*> @ 141850800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMiscTrace::OutputBookmark<wchar_t_const_*>(uint param_1,void *param_2,wchar_t *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong _Size;
  undefined1 auStack_1068 [32];
  undefined4 local_1048;
  undefined4 uStack_1044;
  undefined1 auStack_103e [8];
  undefined1 auStack_1036 [4094];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x141850816;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1068;
  if (param_3 == (wchar_t *)0x0) {
    uVar7 = 4;
    stack0xffffffffffffefc8 = 0xc201;
    _Size = 2;
  }
  else {
    sVar5 = wcslen(param_3);
    iVar3 = (int)sVar5 * 2 + 2;
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    uVar7 = (longlong)iVar3 + 2;
    if (0x1000 < uVar7) {
      return;
    }
    stack0xffffffffffffefc8 = CONCAT22(auStack_1036._0_2_,0xc201);
    sVar5 = wcslen(param_3);
    uVar4 = (int)sVar5 * 2 + 2;
    uVar6 = (ulonglong)uVar4;
    if (0xffff < (int)uVar4) {
      uVar6 = 0xffff;
    }
    _Size = uVar6 & 0xffff;
    memcpy(auStack_1036,param_3,_Size);
    if ((short)uVar6 == -1) {
      local_1048 = 0x2e002e;
      uStack_1044 = 0x2e;
      *(undefined8 *)(auStack_103e + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
    }
  }
  if ((_Size + 2 != uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadBufferPtr - Buffer == FormatArgsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                         ,0x44,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((ushort)uVar7 != 0) {
    OutputBookmarkInternal(param_2,param_1,(ushort)uVar7,auStack_103e + 6);
  }
  return;
}

// OutputBookmark<int> @ 141910760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputBookmark<int>(uint param_1,void *param_2,int param_3)

{
  undefined1 auStack_1038 [32];
  uchar local_1018 [2];
  int local_1016;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14191076a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  local_1018[0] = '\x01';
  local_1018[1] = 'D';
  local_1016 = param_3;
  OutputBookmarkInternal(param_2,param_1,6,local_1018);
  return;
}

// OutputBookmark<unsigned_int> @ 1419107d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputBookmark<unsigned_int>(uint param_1,void *param_2,uint param_3)

{
  undefined1 auStack_1038 [32];
  uchar local_1018 [2];
  uint local_1016;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1419107da;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  local_1018[0] = '\x01';
  local_1018[1] = 'D';
  local_1016 = param_3;
  OutputBookmarkInternal(param_2,param_1,6,local_1018);
  return;
}

// OutputBeginFrame @ 1419a48d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputBeginFrame(ETraceFrameType param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FrameChannel->Enabled) {
    QueryPerformanceCounter(&local_28);
    if (-1 < FrameChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMiscBeginFrameFields>((TLogScope<0> *)&local_20);
      *local_20 = local_28;
      *(char *)(local_20 + 1) = (char)param_1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// OutputBeginRegion @ 1419a4960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputBeginRegion(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < RegionChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMiscRegionBeginFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    iVar5 = 0;
    iVar6 = 0;
    *local_20 = local_28;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar6 = iVar6 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_1,iVar6);
    if (param_2 == (wchar_t *)0x0) {
      param_2 = L"";
    }
    wVar1 = *param_2;
    pwVar3 = param_2;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar5 = iVar5 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(2,param_2,iVar5);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar4;
    if (lVar2 != local_18) {
      *(longlong *)(lVar2 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputBeginRegionWithId @ 1419a4aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl FMiscTrace::OutputBeginRegionWithId(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_38);
  if (-1 < RegionChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMiscRegionBeginWithIdFields>((TLogScope<1> *)&local_30);
    iVar5 = 0;
    iVar6 = 0;
    local_30->QuadPart = (LONGLONG)local_38;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar6 = iVar6 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_1,iVar6);
    if (param_2 == (wchar_t *)0x0) {
      param_2 = L"";
    }
    wVar1 = *param_2;
    pwVar3 = param_2;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar5 = iVar5 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(2,param_2,iVar5);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar4;
    if (lVar2 != local_28) {
      *(longlong *)(lVar2 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return local_38.QuadPart;
}

// OutputBookmarkInternal @ 1419a4d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMiscTrace::OutputBookmarkInternal(void *param_1,uint param_2,ushort param_3,uchar *param_4)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_38);
  if (-1 < BookmarkChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMiscBookmarkFields>((TLogScope<1> *)&local_30);
    *local_30 = local_38;
    local_30[1] = (LARGE_INTEGER)param_1;
    UE::Trace::Private::Field_WriteAuxData(2,param_4,(uint)param_3);
    pvVar2 = ThreadLocalStoragePointer;
    uVar4 = (ulonglong)_tls_index;
    local_30[2].s.LowPart = param_2;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar4 * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar3;
    if (lVar1 != local_28) {
      *(longlong *)(lVar1 + 0x28) = lVar3;
    }
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// OutputBookmarkInternalCycles @ 1419a4e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMiscTrace::OutputBookmarkInternalCycles
          (ulong64 param_1,void *param_2,uint param_3,ushort param_4,uchar *param_5)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  ulong64 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < BookmarkChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMiscBookmarkFields>((TLogScope<1> *)&local_38);
    *local_38 = param_1;
    local_38[1] = (ulong64)param_2;
    UE::Trace::Private::Field_WriteAuxData(2,param_5,(uint)param_4);
    pvVar2 = ThreadLocalStoragePointer;
    uVar4 = (ulonglong)_tls_index;
    *(uint *)(local_38 + 2) = param_3;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar4 * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar3;
    if (lVar1 != local_30) {
      *(longlong *)(lVar1 + 0x28) = lVar3;
    }
    *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
  }
  return;
}

// OutputBookmarkSpec @ 1419a4f30

void __cdecl
FMiscTrace::OutputBookmarkSpec(void *param_1,char *param_2,int param_3,wchar_t *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  size_t sVar6;
  size_t sVar7;
  int iVar8;
  FImportantLogScope local_38;
  
  sVar6 = strlen(param_2);
  sVar7 = wcslen(param_4);
  if (-1 < BookmarkChannel->Enabled) {
    uVar2 = (uint)sVar7 & 0xffff;
    uVar4 = uVar2 * 2;
    iVar3 = (int)(sVar6 & 0xffff);
    UE::Trace::Private::FImportantLogScope::Enter<FMiscBookmarkSpecFields>(&local_38,uVar4 + iVar3);
    puVar5 = local_38.Ptr;
    *(void **)local_38.Ptr = param_1;
    *(int *)(local_38.Ptr + 8) = param_3;
    puVar1 = (uint *)(local_38.Ptr + local_38.AuxCursor);
    *puVar1 = uVar2 << 0xe | 0x200;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,param_4,(ulonglong)uVar4);
    iVar8 = local_38.AuxCursor + uVar4;
    *(uint *)(puVar5 + (longlong)iVar8 + 4) = iVar3 << 0xd | 0x300;
    puVar5[(longlong)iVar8 + 4] = '\x01';
    memcpy(puVar5 + (longlong)iVar8 + 8,param_2,sVar6 & 0xffff);
    puVar5[(longlong)(iVar8 + iVar3) + 8] = '\x03';
    LOCK();
    *(int *)(local_38.Ptr + local_38.BufferOffset) =
         *(int *)(local_38.Ptr + local_38.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

// OutputEndFrame @ 1419a5630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputEndFrame(ETraceFrameType param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < FrameChannel->Enabled) {
    QueryPerformanceCounter(&local_28);
    if (-1 < FrameChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMiscEndFrameFields>((TLogScope<0> *)&local_20);
      *local_20 = local_28;
      *(char *)(local_20 + 1) = (char)param_1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// OutputEndRegion @ 1419a56c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputEndRegion(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < RegionChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMiscRegionEndFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    iVar5 = 0;
    *local_20 = local_28;
    wVar2 = *param_1;
    pwVar1 = param_1;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      iVar5 = iVar5 + 1;
      wVar2 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_1,iVar5);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar4;
    if (lVar3 != local_18) {
      *(longlong *)(lVar3 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputEndRegionWithId @ 1419a57c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputEndRegionWithId(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < RegionChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMiscRegionEndWithIdFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputScreenshot @ 1419a5d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMiscTrace::OutputScreenshot
          (wchar_t *param_1,ulong64 param_2,uint param_3,uint param_4,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<unsigned_int> aVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  size_t sVar9;
  longlong lVar10;
  ulonglong uVar11;
  atomic<unsigned_int> aVar12;
  atomic<unsigned_int> aVar13;
  atomic<unsigned_int> aVar14;
  undefined1 auStack_78 [32];
  atomic<unsigned_int> local_58;
  atomic<unsigned_int> *local_50;
  longlong local_48;
  atomic<unsigned_int> *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  aVar12 = *(atomic<unsigned_int> *)&param_5->ArrayNum;
  aVar14 = (atomic<unsigned_int>)(((int)aVar12 + 0xfffeU) / 0xffff);
  LOCK();
  aVar5 = (atomic<unsigned_int>)((int)ScreenshotId + 1);
  UNLOCK();
  uVar11 = (ulonglong)_tls_index;
  local_58 = ScreenshotId;
  ScreenshotId = aVar5;
  local_50 = (atomic<unsigned_int> *)param_2;
  if (-1 < ScreenshotChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMiscScreenshotHeaderFields>((TLogScope<1> *)&local_40);
    *local_40 = local_58;
    sVar9 = wcslen(param_1);
    UE::Trace::Private::Field_WriteStringWide(1,param_1,(uint)sVar9 & 0xffff);
    *(atomic<unsigned_int> **)(local_40 + 1) = local_50;
    pvVar6 = ThreadLocalStoragePointer;
    local_40[3] = (atomic<unsigned_int>)param_3;
    local_40[4] = (atomic<unsigned_int>)param_4;
    local_40[5] = aVar14;
    local_40[6] = aVar12;
    lVar2 = *(longlong *)((longlong)pvVar6 + uVar11 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar10 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar10;
    if (lVar2 != local_38) {
      *(longlong *)(lVar2 + 0x28) = lVar10;
    }
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  aVar5 = local_58;
  aVar13 = (atomic<unsigned_int>)0x0;
  if (((int)aVar12 + 0xfffeU) / 0xffff != 0) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8);
    do {
      uVar8 = 0xffff;
      if ((uint)aVar12 < 0xffff) {
        uVar8 = (uint)aVar12 & 0xffff;
      }
      pFVar3 = (param_5->AllocatorInstance).Data;
      if (-1 < ScreenshotChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FMiscScreenshotChunkFields>((TLogScope<1> *)&local_50);
        *local_50 = aVar5;
        local_50[1] = aVar13;
        *(short *)(local_50 + 2) = (short)uVar8;
        UE::Trace::Private::Field_WriteAuxData
                  (3,(uchar *)(pFVar3 + (uint)((int)aVar13 * 0xffff)),uVar8);
        lVar2 = *plVar1;
        if (*(char *)(lVar2 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar2 = *(longlong *)(lVar2 + 0x20);
        **(undefined1 **)(lVar2 + 0x20) = 6;
        lVar10 = *(longlong *)(lVar2 + 0x20) + 1;
        *(longlong *)(lVar2 + 0x20) = lVar10;
        if (lVar2 != local_48) {
          *(longlong *)(lVar2 + 0x28) = lVar10;
        }
        *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
      }
      aVar12 = (atomic<unsigned_int>)((int)aVar12 - uVar8);
      aVar13 = (atomic<unsigned_int>)((int)aVar13 + 1);
    } while ((uint)aVar13 < (uint)aVar14);
  }
  if (aVar12 != (atomic<unsigned_int>)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RemainingSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\MiscTrace.cpp"
                       ,0xc3,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_5->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ShouldTraceBookmark @ 1419ab650

bool __cdecl FMiscTrace::ShouldTraceBookmark(void)

{
  return (bool)((byte)((uint)BookmarkChannel->Enabled >> 0x1f) ^ 1);
}

// ShouldTraceRegion @ 1419ab670

bool __cdecl FMiscTrace::ShouldTraceRegion(void)

{
  return (bool)((byte)((uint)RegionChannel->Enabled >> 0x1f) ^ 1);
}

// ShouldTraceScreenshot @ 1419ab690

bool __cdecl FMiscTrace::ShouldTraceScreenshot(void)

{
  return (bool)((byte)((uint)ScreenshotChannel->Enabled >> 0x1f) ^ 1);
}

