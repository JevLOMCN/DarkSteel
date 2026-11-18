// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// OutputLogMessage<wchar_t_*> @ 1417985f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FLogTrace::OutputLogMessage<wchar_t_*>(void *param_1,wchar_t *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  ForElementType<unsigned_char> FVar7;
  ulonglong _Size;
  int iVar8;
  undefined1 auStack_6b8 [32];
  undefined4 local_698;
  undefined4 uStack_694;
  TArray<unsigned_char,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>_> local_688;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  local_688.ArrayMax = 0x640;
  local_688.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_688.ArrayNum = 0;
  _Size = 2;
  if (param_2 == (wchar_t *)0x0) {
    iVar8 = 2;
  }
  else {
    sVar5 = wcslen(param_2);
    iVar8 = (int)sVar5 * 2 + 2;
    if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
  }
  iVar8 = iVar8 + 2;
  TArray<unsigned_char,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_688,iVar8,Default);
  FVar7 = (ForElementType<unsigned_char>)&local_688;
  if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar7 = local_688.AllocatorInstance.SecondaryData;
  }
  *(undefined2 *)FVar7 = 0xc201;
  puVar1 = (uchar *)((longlong)FVar7 + 2);
  if (param_2 == (wchar_t *)0x0) {
    puVar1[0] = '\0';
    puVar1[1] = '\0';
  }
  else {
    sVar5 = wcslen(param_2);
    uVar4 = (int)sVar5 * 2 + 2;
    uVar6 = (ulonglong)uVar4;
    if (0xffff < (int)uVar4) {
      uVar6 = 0xffff;
    }
    _Size = uVar6 & 0xffff;
    memcpy(puVar1,param_2,_Size);
    if ((short)uVar6 == -1) {
      local_698 = 0x2e002e;
      uStack_694 = 0x2e;
      puVar1 = puVar1 + (_Size - ((uint)_Size & 1)) + -8;
      puVar1[0] = '.';
      puVar1[1] = '\0';
      puVar1[2] = '.';
      puVar1[3] = '\0';
      puVar1[4] = '.';
      puVar1[5] = '\0';
      puVar1[6] = '\0';
      puVar1[7] = '\0';
    }
  }
  if ((_Size + 2 != (longlong)iVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadBufferPtr - Buffer == FormatArgsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                         ,0x2b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar7 = (ForElementType<unsigned_char>)&local_688;
  if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar7 = local_688.AllocatorInstance.SecondaryData;
  }
  if ((iVar8 != 0) && (iVar8 < 0x7fffffff)) {
    OutputLogMessageInternal(param_1,iVar8,(uchar *)FVar7);
  }
  if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_688.AllocatorInstance.SecondaryData);
  }
  return;
}

// OutputLogMessage<wchar_t_const_*> @ 141798790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FLogTrace::OutputLogMessage<wchar_t_const_*>(void *param_1,wchar_t *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  ForElementType<unsigned_char> FVar7;
  ulonglong _Size;
  int iVar8;
  undefined1 auStack_6b8 [32];
  undefined4 local_698;
  undefined4 uStack_694;
  TArray<unsigned_char,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>_> local_688;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  local_688.ArrayMax = 0x640;
  local_688.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_688.ArrayNum = 0;
  _Size = 2;
  if (param_2 == (wchar_t *)0x0) {
    iVar8 = 2;
  }
  else {
    sVar5 = wcslen(param_2);
    iVar8 = (int)sVar5 * 2 + 2;
    if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
  }
  iVar8 = iVar8 + 2;
  TArray<unsigned_char,TSizedInlineAllocator<1600,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_688,iVar8,Default);
  FVar7 = (ForElementType<unsigned_char>)&local_688;
  if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar7 = local_688.AllocatorInstance.SecondaryData;
  }
  *(undefined2 *)FVar7 = 0xc201;
  puVar1 = (uchar *)((longlong)FVar7 + 2);
  if (param_2 == (wchar_t *)0x0) {
    puVar1[0] = '\0';
    puVar1[1] = '\0';
  }
  else {
    sVar5 = wcslen(param_2);
    uVar4 = (int)sVar5 * 2 + 2;
    uVar6 = (ulonglong)uVar4;
    if (0xffff < (int)uVar4) {
      uVar6 = 0xffff;
    }
    _Size = uVar6 & 0xffff;
    memcpy(puVar1,param_2,_Size);
    if ((short)uVar6 == -1) {
      local_698 = 0x2e002e;
      uStack_694 = 0x2e;
      puVar1 = puVar1 + (_Size - ((uint)_Size & 1)) + -8;
      puVar1[0] = '.';
      puVar1[1] = '\0';
      puVar1[2] = '.';
      puVar1[3] = '\0';
      puVar1[4] = '.';
      puVar1[5] = '\0';
      puVar1[6] = '\0';
      puVar1[7] = '\0';
    }
  }
  if ((_Size + 2 != (longlong)iVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadBufferPtr - Buffer == FormatArgsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                         ,0x2b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar7 = (ForElementType<unsigned_char>)&local_688;
  if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar7 = local_688.AllocatorInstance.SecondaryData;
  }
  if ((iVar8 != 0) && (iVar8 < 0x7fffffff)) {
    OutputLogMessageInternal(param_1,iVar8,(uchar *)FVar7);
  }
  if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_688.AllocatorInstance.SecondaryData);
  }
  return;
}

// OutputLogCategory @ 1417e8610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FLogTrace::OutputLogCategory(FLogCategoryBase *param_1,wchar_t *param_2,Type param_3)

{
  wchar_t wVar1;
  size_t sVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  FImportantLogScope local_18;
  
  sVar2 = wcslen(param_2);
  if (-1 < LogChannel->Enabled) {
    uVar4 = sVar2 & 0xffff;
    uVar5 = (uint)uVar4;
    UE::Trace::Private::FImportantLogScope::Enter<FLoggingLogCategoryFields>(&local_18,uVar5);
    puVar3 = (uint *)(local_18.Ptr + local_18.AuxCursor);
    *(FLogCategoryBase **)local_18.Ptr = param_1;
    local_18.Ptr[8] = param_3;
    *puVar3 = uVar5 << 0xd | 0x200;
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
    local_18.Ptr[(longlong)(int)(local_18.AuxCursor + uVar5) + 4] = '\x03';
    LOCK();
    *(int *)(local_18.Ptr + local_18.BufferOffset) =
         *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

// OutputLogMessageInternal @ 1417e86e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLogTrace::OutputLogMessageInternal(void *param_1,int param_2,uchar *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < LogChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FLoggingLogMessageFields>((TLogScope<1> *)&local_30);
    *local_30 = param_1;
    QueryPerformanceCounter(&local_38);
    *(LARGE_INTEGER *)(local_30 + 1) = local_38;
    UE::Trace::Private::Field_WriteAuxData(2,param_3,param_2 & 0x7ffff);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar2;
    if (lVar1 != local_28) {
      *(longlong *)(lVar1 + 0x28) = lVar2;
    }
    *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
  }
  return;
}

// OutputLogMessageSimple @ 1417e87e0

void __cdecl FLogTrace::OutputLogMessageSimple(void *param_1,wchar_t *param_2)

{
  ulong64 *puVar1;
  undefined1 local_res18 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CS,4000);
      atexit(`GetLogTraceStaticBufferGuard'::__l2::_dynamic_atexit_destructor_for__CS__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&CS);
  puVar1 = __local_stdio_printf_options();
  __stdio_common_vswprintf(*puVar1,LogTraceStaticBuffer,0x2000,param_2,0,local_res18);
  OutputLogMessage<wchar_t_*>(param_1,LogTraceStaticBuffer);
  LeaveCriticalSection((LPCRITICAL_SECTION)&CS);
  return;
}

// OutputLogMessageSpec @ 1417e88d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FLogTrace::OutputLogMessageSpec
          (void *param_1,FLogCategoryBase *param_2,Type param_3,char *param_4,int param_5,
          wchar_t *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  FImportantLogScope local_28;
  
  sVar5 = strlen(param_4);
  sVar6 = wcslen(param_6);
  if (-1 < LogChannel->Enabled) {
    uVar2 = (uint)sVar6 & 0xffff;
    uVar3 = uVar2 * 2;
    iVar7 = (int)(sVar5 & 0xffff);
    UE::Trace::Private::FImportantLogScope::Enter<FLoggingLogMessageSpecFields>
              (&local_28,uVar3 + iVar7);
    puVar4 = local_28.Ptr;
    *(void **)local_28.Ptr = param_1;
    *(FLogCategoryBase **)(local_28.Ptr + 8) = param_2;
    *(int *)(local_28.Ptr + 0x10) = param_5;
    local_28.Ptr[0x14] = param_3;
    puVar1 = (uint *)(local_28.Ptr + local_28.AuxCursor);
    *puVar1 = iVar7 << 0xd | 0x400;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,param_4,sVar5 & 0xffff);
    iVar7 = local_28.AuxCursor + iVar7;
    puVar4[(longlong)iVar7 + 4] = '\x03';
    *(uint *)(puVar4 + (longlong)iVar7 + 4) = uVar2 << 0xe | 0x500;
    puVar4[(longlong)iVar7 + 4] = '\x01';
    memcpy(puVar4 + (longlong)iVar7 + 8,param_6,(ulonglong)uVar3);
    puVar4[(longlong)(int)(uVar3 + 4 + iVar7) + 4] = '\x03';
    LOCK();
    *(int *)(local_28.Ptr + local_28.BufferOffset) =
         *(int *)(local_28.Ptr + local_28.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

