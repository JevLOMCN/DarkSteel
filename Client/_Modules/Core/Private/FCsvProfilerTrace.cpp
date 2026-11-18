// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 18

// OutputBeginCapture @ 1419a4710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCsvProfilerTrace::OutputBeginCapture
          (wchar_t *param_1,uint param_2,uint param_3,char *param_4,bool param_5)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  OutputInlineStat(param_4,_GCsvCategory_Exclusive.Index);
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerBeginCaptureFields>((TLogScope<1> *)&local_30);
    QueryPerformanceCounter(&local_38);
    iVar5 = 0;
    *local_30 = local_38;
    local_30[1].s.LowPart = param_2;
    *(uint *)((longlong)local_30 + 0xc) = param_3;
    *(bool *)(local_30 + 2) = param_5;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar5 = iVar5 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(4,param_1,iVar5);
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
  return;
}

// OutputBeginExclusiveStat @ 1419a4830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputBeginExclusiveStat(char *param_1,int param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerBeginExclusiveStatFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (longlong)param_1 << 0xb) * 2;
    local_28[1] = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputBeginStat @ 1419a4be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputBeginStat(FName *param_1,int param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  ulonglong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerBeginStatFields>((TLogScope<0> *)&local_28);
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (ulonglong)(param_1->ComparisonIndex).Value << 0xb)
                * 2 | 1;
    local_28[1] = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputBeginStat @ 1419a4c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputBeginStat(char *param_1,int param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerBeginStatFields>((TLogScope<0> *)&local_28);
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (longlong)param_1 << 0xb) * 2;
    local_28[1] = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputCustomStat @ 1419a50e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCsvProfilerTrace::OutputCustomStat
          (FName *param_1,int param_2,int param_3,uchar param_4,ulong64 param_5)

{
  undefined1 auStack_48 [32];
  ulonglong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerCustomStatIntFields>((TLogScope<0> *)&local_28)
    ;
    local_28[1] = param_5;
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (ulonglong)(param_1->ComparisonIndex).Value << 0xb)
                * 2 | 1;
    *(int *)(local_28 + 2) = param_3;
    *(uchar *)((longlong)local_28 + 0x14) = param_4;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputCustomStat @ 1419a51a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCsvProfilerTrace::OutputCustomStat
          (FName *param_1,int param_2,float param_3,uchar param_4,ulong64 param_5)

{
  undefined1 auStack_58 [40];
  ulonglong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerCustomStatFloatFields>
              ((TLogScope<0> *)&local_30);
    local_30[1] = param_5;
    *local_30 = ((ulonglong)(param_2 & 0x7ff) | (ulonglong)(param_1->ComparisonIndex).Value << 0xb)
                * 2 | 1;
    *(float *)(local_30 + 2) = param_3;
    *(uchar *)((longlong)local_30 + 0x14) = param_4;
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// OutputCustomStat @ 1419a5270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCsvProfilerTrace::OutputCustomStat
          (char *param_1,int param_2,int param_3,uchar param_4,ulong64 param_5)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerCustomStatIntFields>((TLogScope<0> *)&local_28)
    ;
    local_28[1] = param_5;
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (longlong)param_1 << 0xb) * 2;
    *(int *)(local_28 + 2) = param_3;
    *(uchar *)((longlong)local_28 + 0x14) = param_4;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputCustomStat @ 1419a5320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCsvProfilerTrace::OutputCustomStat
          (char *param_1,int param_2,float param_3,uchar param_4,ulong64 param_5)

{
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerCustomStatFloatFields>
              ((TLogScope<0> *)&local_30);
    local_30[1] = param_5;
    *local_30 = ((ulonglong)(param_2 & 0x7ff) | (longlong)param_1 << 0xb) * 2;
    *(float *)(local_30 + 2) = param_3;
    *(uchar *)((longlong)local_30 + 0x14) = param_4;
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// OutputDeclaredStat @ 1419a53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputDeclaredStat(FName *param_1,int param_2)

{
  wchar_t wVar1;
  size_t sVar2;
  undefined1 *puVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_848 [32];
  FImportantLogScope local_828;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  ::FName::GetPlainNameString(param_1,&local_818);
  sVar2 = wcslen(local_818);
  if (-1 < CountersChannel->Enabled) {
    uVar6 = sVar2 & 0xffff;
    uVar5 = (uint)uVar6;
    UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerDefineDeclaredStatFields>
              (&local_828,uVar5);
    pwVar4 = local_818;
    lVar7 = (longlong)local_828.AuxCursor;
    *(ulonglong *)local_828.Ptr =
         ((ulonglong)(param_2 & 0x7ff) | (ulonglong)(param_1->ComparisonIndex).Value << 0xb) * 2 | 1
    ;
    *(int *)((longlong)local_828.Ptr + 8) = param_2;
    *(uint *)(lVar7 + (longlong)local_828.Ptr) = uVar5 << 0xd | 0x200;
    puVar3 = (undefined1 *)((longlong)local_828.Ptr + lVar7 + 4);
    *(undefined1 *)(lVar7 + (longlong)local_828.Ptr) = 1;
    if (uVar5 != 0) {
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
        *puVar3 = (char)wVar1;
        puVar3 = puVar3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *(undefined1 *)((longlong)(int)(local_828.AuxCursor + uVar5) + 4 + (longlong)local_828.Ptr) = 3;
    LOCK();
    *(int *)((longlong)local_828.BufferOffset + (longlong)local_828.Ptr) =
         *(int *)((longlong)local_828.BufferOffset + (longlong)local_828.Ptr) + 1;
    UNLOCK();
  }
  return;
}

// OutputEndCapture @ 1419a5510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputEndCapture(void)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerEndCaptureFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputEndExclusiveStat @ 1419a5590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputEndExclusiveStat(char *param_1,int param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerEndExclusiveStatFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (longlong)param_1 << 0xb) * 2;
    local_28[1] = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputEndStat @ 1419a5850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputEndStat(FName *param_1,int param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  ulonglong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerEndStatFields>((TLogScope<0> *)&local_28);
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (ulonglong)(param_1->ComparisonIndex).Value << 0xb)
                * 2 | 1;
    local_28[1] = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputEndStat @ 1419a58f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputEndStat(char *param_1,int param_2,ulong64 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerEndStatFields>((TLogScope<0> *)&local_28);
    *local_28 = ((ulonglong)(param_2 & 0x7ff) | (longlong)param_1 << 0xb) * 2;
    local_28[1] = param_3;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputEvent @ 1419a5990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputEvent(wchar_t *param_1,int param_2,ulong64 param_3)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerEventFields>((TLogScope<1> *)&local_28);
    iVar5 = 0;
    *local_28 = param_3;
    *(int *)(local_28 + 1) = param_2;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar5 = iVar5 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(2,param_1,iVar5);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar4;
    if (lVar2 != local_20) {
      *(longlong *)(lVar2 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// OutputInlineStat @ 1419a5a90

void __cdecl FCsvProfilerTrace::OutputInlineStat(char *param_1,int param_2)

{
  uint *puVar1;
  uchar *puVar2;
  size_t sVar3;
  uint uVar4;
  FImportantLogScope local_18;
  
  sVar3 = strlen(param_1);
  if (-1 < CountersChannel->Enabled) {
    uVar4 = (uint)(sVar3 & 0xffff);
    UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerDefineInlineStatFields>
              (&local_18,uVar4);
    puVar2 = local_18.Ptr;
    *(ulonglong *)local_18.Ptr = ((ulonglong)(param_2 & 0x7ff) | (longlong)param_1 << 0xb) * 2;
    *(int *)((longlong)local_18.Ptr + 8) = param_2;
    puVar1 = (uint *)((longlong)local_18.Ptr + (longlong)local_18.AuxCursor);
    *puVar1 = uVar4 << 0xd | 0x200;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,param_1,sVar3 & 0xffff);
    *(undefined1 *)((longlong)(int)(local_18.AuxCursor + uVar4) + 4 + (longlong)puVar2) = 3;
    LOCK();
    *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) =
         *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) + 1;
    UNLOCK();
  }
  return;
}

// OutputInlineStatExclusive @ 1419a5b70

void __cdecl FCsvProfilerTrace::OutputInlineStatExclusive(char *param_1)

{
  OutputInlineStat(param_1,_GCsvCategory_Exclusive.Index);
  return;
}

// OutputMetadata @ 1419a5b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCsvProfilerTrace::OutputMetadata(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  TLogScope<1> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < CountersChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCsvProfilerMetadataFields>(&local_28);
    iVar5 = 0;
    iVar6 = 0;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar6 = iVar6 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(0,param_1,iVar6);
    wVar1 = *param_2;
    pwVar3 = param_2;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar5 = iVar5 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_2,iVar5);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar4;
    if (lVar2 != local_28._8_8_) {
      *(longlong *)(lVar2 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  return;
}

// OutputRegisterCategory @ 1419a5ca0

void __cdecl FCsvProfilerTrace::OutputRegisterCategory(int param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  size_t sVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  FImportantLogScope local_18;
  
  sVar2 = wcslen(param_2);
  if (-1 < CountersChannel->Enabled) {
    uVar4 = sVar2 & 0xffff;
    uVar5 = (uint)uVar4;
    UE::Trace::Private::FImportantLogScope::Enter<FCsvProfilerRegisterCategoryFields>
              (&local_18,uVar5);
    puVar3 = (uint *)((longlong)local_18.Ptr + (longlong)local_18.AuxCursor);
    *(int *)local_18.Ptr = param_1;
    *puVar3 = uVar5 << 0xd | 0x100;
    *(undefined1 *)puVar3 = 1;
    puVar3 = puVar3 + 1;
    if (uVar5 != 0) {
      do {
        wVar1 = *param_2;
        param_2 = param_2 + 1;
        *(char *)puVar3 = (char)wVar1;
        puVar3 = (uint *)((longlong)puVar3 + 1);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *(undefined1 *)((longlong)(int)(local_18.AuxCursor + uVar5) + 4 + (longlong)local_18.Ptr) = 3;
    LOCK();
    *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) =
         *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) + 1;
    UNLOCK();
  }
  return;
}

