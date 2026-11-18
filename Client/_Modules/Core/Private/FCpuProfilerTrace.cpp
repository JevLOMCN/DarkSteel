// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 25

// FlushThreadBuffer @ 14193f9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCpuProfilerTrace::FlushThreadBuffer(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  TLogScope<1> TStack_28;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xb60);
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0x10) != 0)) {
    uStack_18 = __security_cookie.value ^ (ulonglong)auStack_48;
    UE::Trace::Private::FLogScope::Enter<FCpuProfilerEventBatchV3Fields>(&TStack_28);
    UE::Trace::Private::Field_WriteAuxData
              (0,(uchar *)(lVar1 + 0x12),(uint)*(ushort *)(lVar1 + 0x10));
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar3;
    if (lVar2 != TStack_28._8_8_) {
      *(longlong *)(lVar2 + 0x28) = lVar3;
    }
    *(undefined8 *)(TStack_28._8_8_ + 0x28) = *(undefined8 *)(TStack_28._8_8_ + 0x20);
    *(undefined2 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    return;
  }
  return;
}

// GetOrCreateSpecId @ 141948aa0

void __cdecl
FCpuProfilerTrace::GetOrCreateSpecId(uint *param_1,FName *param_2,char *param_3,uint param_4)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = OutputEventType(param_2,param_3,param_4);
    *param_1 = uVar1;
  }
  return;
}

// GetOrCreateSpecId @ 141948ae0

void __cdecl
FCpuProfilerTrace::GetOrCreateSpecId(uint *param_1,char *param_2,char *param_3,uint param_4)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = OutputEventType(param_2,param_3,param_4);
    *param_1 = uVar1;
  }
  return;
}

// GetOrCreateSpecId @ 141948b20

void __cdecl
FCpuProfilerTrace::GetOrCreateSpecId(uint *param_1,wchar_t *param_2,char *param_3,uint param_4)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = OutputEventType(param_2,param_3,param_4);
    *param_1 = uVar1;
  }
  return;
}

// OutputBeginDynamicEvent @ 141957b90

void __cdecl FCpuProfilerTrace::OutputBeginDynamicEvent(FName *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  FThreadBuffer *pFVar5;
  ushort uVar6;
  uchar *puVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  LARGE_INTEGER local_res20;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar5 = *(FThreadBuffer **)(lVar2 + 0xb60);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + 1;
  if (pFVar5 == (FThreadBuffer *)0x0) {
    pFVar5 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  uVar4 = OutputDynamicEventType(param_1,param_2,param_3);
  QueryPerformanceCounter(&local_res20);
  uVar3 = pFVar5->LastCycle;
  pFVar5->LastCycle = (ulong64)local_res20;
  puVar7 = pFVar5->Buffer + pFVar5->BufferSize;
  uVar10 = (local_res20.QuadPart - uVar3) * 4 | 1;
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar10 = (ulonglong)(uVar4 * 2);
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar6 = ((short)puVar7 - (short)pFVar5) - 0x12;
  pFVar5->BufferSize = uVar6;
  if (0xf0 < uVar6) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar5);
  }
  return;
}

// OutputBeginDynamicEvent @ 141957cc0

void __cdecl FCpuProfilerTrace::OutputBeginDynamicEvent(char *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  FThreadBuffer *pFVar5;
  ushort uVar6;
  uchar *puVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  LARGE_INTEGER local_res20;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar5 = *(FThreadBuffer **)(lVar2 + 0xb60);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + 1;
  if (pFVar5 == (FThreadBuffer *)0x0) {
    pFVar5 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  uVar4 = OutputDynamicEventType(param_1,param_2,param_3);
  QueryPerformanceCounter(&local_res20);
  uVar3 = pFVar5->LastCycle;
  pFVar5->LastCycle = (ulong64)local_res20;
  puVar7 = pFVar5->Buffer + pFVar5->BufferSize;
  uVar10 = (local_res20.QuadPart - uVar3) * 4 | 1;
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar10 = (ulonglong)(uVar4 * 2);
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar6 = ((short)puVar7 - (short)pFVar5) - 0x12;
  pFVar5->BufferSize = uVar6;
  if (0xf0 < uVar6) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar5);
  }
  return;
}

// OutputBeginDynamicEvent @ 141957df0

void __cdecl FCpuProfilerTrace::OutputBeginDynamicEvent(wchar_t *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  FThreadBuffer *pFVar5;
  ushort uVar6;
  uchar *puVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  LARGE_INTEGER local_res20;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar5 = *(FThreadBuffer **)(lVar2 + 0xb60);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + 1;
  if (pFVar5 == (FThreadBuffer *)0x0) {
    pFVar5 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  uVar4 = OutputDynamicEventType(param_1,param_2,param_3);
  QueryPerformanceCounter(&local_res20);
  uVar3 = pFVar5->LastCycle;
  pFVar5->LastCycle = (ulong64)local_res20;
  puVar7 = pFVar5->Buffer + pFVar5->BufferSize;
  uVar10 = (local_res20.QuadPart - uVar3) * 4 | 1;
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar10 = (ulonglong)(uVar4 * 2);
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar6 = ((short)puVar7 - (short)pFVar5) - 0x12;
  pFVar5->BufferSize = uVar6;
  if (0xf0 < uVar6) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar5);
  }
  return;
}

// OutputBeginDynamicEventWithId @ 141957f20

void __cdecl
FCpuProfilerTrace::OutputBeginDynamicEventWithId
          (FName *param_1,char *param_2,char *param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  FThreadBuffer *pFVar5;
  ushort uVar6;
  uchar *puVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  LARGE_INTEGER local_18 [2];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar5 = *(FThreadBuffer **)(lVar2 + 0xb60);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + 1;
  if (pFVar5 == (FThreadBuffer *)0x0) {
    pFVar5 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  uVar4 = OutputDynamicEventTypeWithId(param_1,param_2,param_3,param_4);
  QueryPerformanceCounter(local_18);
  uVar3 = pFVar5->LastCycle;
  pFVar5->LastCycle = (ulong64)local_18[0];
  puVar7 = pFVar5->Buffer + pFVar5->BufferSize;
  uVar10 = (local_18[0].QuadPart - uVar3) * 4 | 1;
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar10 = (ulonglong)(uVar4 * 2);
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar6 = ((short)puVar7 - (short)pFVar5) - 0x12;
  pFVar5->BufferSize = uVar6;
  if (0xf0 < uVar6) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar5);
  }
  return;
}

// OutputBeginDynamicEventWithId @ 141958060

void __cdecl
FCpuProfilerTrace::OutputBeginDynamicEventWithId
          (FName *param_1,wchar_t *param_2,char *param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  FThreadBuffer *pFVar5;
  ushort uVar6;
  uchar *puVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  LARGE_INTEGER local_18 [2];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar5 = *(FThreadBuffer **)(lVar2 + 0xb60);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + 1;
  if (pFVar5 == (FThreadBuffer *)0x0) {
    pFVar5 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  uVar4 = OutputDynamicEventTypeWithId(param_1,param_2,param_3,param_4);
  QueryPerformanceCounter(local_18);
  uVar3 = pFVar5->LastCycle;
  pFVar5->LastCycle = (ulong64)local_18[0];
  puVar7 = pFVar5->Buffer + pFVar5->BufferSize;
  uVar10 = (local_18[0].QuadPart - uVar3) * 4 | 1;
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar10 = (ulonglong)(uVar4 * 2);
  do {
    bVar8 = 0;
    bVar9 = (byte)uVar10;
    if (0x7f < uVar10) {
      bVar8 = 0x80;
    }
    uVar10 = uVar10 >> 7;
    *puVar7 = bVar8 | bVar9 & 0x7f;
    puVar7 = puVar7 + 1;
  } while (uVar10 != 0);
  uVar6 = ((short)puVar7 - (short)pFVar5) - 0x12;
  pFVar5->BufferSize = uVar6;
  if (0xf0 < uVar6) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar5);
  }
  return;
}

// OutputBeginEvent @ 1419581a0

void __cdecl FCpuProfilerTrace::OutputBeginEvent(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  FThreadBuffer *pFVar4;
  ushort uVar5;
  uchar *puVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  LARGE_INTEGER local_res10 [3];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = *(FThreadBuffer **)(lVar2 + 0xb60);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + 1;
  if (pFVar4 == (FThreadBuffer *)0x0) {
    pFVar4 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(local_res10);
  uVar3 = pFVar4->LastCycle;
  pFVar4->LastCycle = (ulong64)local_res10[0];
  puVar6 = pFVar4->Buffer + pFVar4->BufferSize;
  uVar9 = (local_res10[0].QuadPart - uVar3) * 4 | 1;
  do {
    bVar7 = 0;
    bVar8 = (byte)uVar9;
    if (0x7f < uVar9) {
      bVar7 = 0x80;
    }
    uVar9 = uVar9 >> 7;
    *puVar6 = bVar7 | bVar8 & 0x7f;
    puVar6 = puVar6 + 1;
  } while (uVar9 != 0);
  uVar9 = (ulonglong)(param_1 * 2);
  do {
    bVar7 = 0;
    bVar8 = (byte)uVar9;
    if (0x7f < uVar9) {
      bVar7 = 0x80;
    }
    uVar9 = uVar9 >> 7;
    *puVar6 = bVar7 | bVar8 & 0x7f;
    puVar6 = puVar6 + 1;
  } while (uVar9 != 0);
  uVar5 = ((short)puVar6 - (short)pFVar4) - 0x12;
  pFVar4->BufferSize = uVar5;
  if (0xf0 < uVar5) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar4);
  }
  return;
}

// OutputBeginEventWithMetadata @ 1419582a0

void __cdecl FCpuProfilerTrace::OutputBeginEventWithMetadata(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  FThreadBuffer *pFVar4;
  ushort uVar5;
  uchar *puVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  LARGE_INTEGER local_res10 [3];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = *(FThreadBuffer **)(lVar2 + 0xb60);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + 1;
  if (pFVar4 == (FThreadBuffer *)0x0) {
    pFVar4 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(local_res10);
  uVar3 = pFVar4->LastCycle;
  pFVar4->LastCycle = (ulong64)local_res10[0];
  puVar6 = pFVar4->Buffer + pFVar4->BufferSize;
  uVar9 = (local_res10[0].QuadPart - uVar3) * 4 | 1;
  do {
    bVar7 = 0;
    bVar8 = (byte)uVar9;
    if (0x7f < uVar9) {
      bVar7 = 0x80;
    }
    uVar9 = uVar9 >> 7;
    *puVar6 = bVar7 | bVar8 & 0x7f;
    puVar6 = puVar6 + 1;
  } while (uVar9 != 0);
  uVar9 = (ulonglong)(param_1 * 2) | 1;
  do {
    bVar7 = 0;
    bVar8 = (byte)uVar9;
    if (0x7f < uVar9) {
      bVar7 = 0x80;
    }
    uVar9 = uVar9 >> 7;
    *puVar6 = bVar7 | bVar8 & 0x7f;
    puVar6 = puVar6 + 1;
  } while (uVar9 != 0);
  uVar5 = ((short)puVar6 - (short)pFVar4) - 0x12;
  pFVar4->BufferSize = uVar5;
  if (0xf0 < uVar5) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar4);
  }
  return;
}

// OutputDynamicEventType @ 1419583a0

uint __cdecl FCpuProfilerTrace::OutputDynamicEventType(FName *param_1,char *param_2,uint param_3)

{
  FNameEntryId FVar1;
  longlong lVar2;
  uint uVar3;
  FThreadBuffer *pFVar4;
  uint *puVar5;
  undefined1 *puVar6;
  FLLMScope local_res20 [2];
  uint local_48;
  uint local_44;
  TPairInitializer<FNameEntryId_&&,unsigned_int_const_&> local_40;
  uint *local_30;
  uint *local_28;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = *(FThreadBuffer **)(lVar2 + 0xb60);
  if (pFVar4 == (FThreadBuffer *)0x0) {
    pFVar4 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  FVar1.Value = (param_1->ComparisonIndex).Value;
  uVar3 = ::GetTypeHash(FVar1);
  if (*(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x8 !=
      *(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar4->DynamicFNameScopeNamesMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar4->DynamicFNameScopeNamesMap).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x48 - 1U & uVar3
                               ) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 +
                         *(longlong *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x0);
        if (*puVar5 == FVar1.Value) {
          if ((puVar5 != (uint *)0x0) && (local_48 = puVar5[1], local_48 != 0)) {
            return local_48;
          }
          break;
        }
        uVar3 = puVar5[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name690,L"Trace/CpuProfiler");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name690,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_40.Value,&LLMScope_Name690,true);
  local_48 = OutputEventType(param_1,param_2,param_3);
  local_44 = (param_1->ComparisonIndex).Value;
  local_30 = &local_44;
  local_28 = &local_48;
  TSet<TTuple<FNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNameEntryId_&&,unsigned_int_const_&>_>
            ((TSet<TTuple<FNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
              *)&pFVar4->DynamicFNameScopeNamesMap,&local_40,(bool *)&local_30);
  FMemScope::~FMemScope((FMemScope *)&local_40.Value);
  FLLMScope::~FLLMScope(local_res20);
  return local_48;
}

// OutputDynamicEventType @ 141958570

uint __cdecl FCpuProfilerTrace::OutputDynamicEventType(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  FThreadBuffer *pFVar6;
  size_t sVar7;
  uint uVar8;
  ulong64 _Size;
  char *local_res20;
  uint local_48;
  undefined1 local_44 [20];
  undefined8 *local_30;
  uint *local_28;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar6 = *(FThreadBuffer **)(lVar4 + 0xb60);
  if (pFVar6 == (FThreadBuffer *)0x0) {
    pFVar6 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  uVar8 = 0;
  cVar3 = *param_1;
  pcVar1 = param_1;
  while (cVar3 != '\0') {
    pcVar1 = pcVar1 + 1;
    uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) ^ (int)cVar3;
    cVar3 = *pcVar1;
  }
  local_res20 = param_1;
  iVar5 = TSet<TTuple<char_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<char>,FDefaultSetAllocator>
          ::FindIndexByHash<char_const_*>
                    ((TSet<TTuple<char_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<char>,FDefaultSetAllocator>
                      *)&pFVar6->DynamicAnsiScopeNamesMap,uVar8,&local_res20);
  if (((iVar5 == -1) ||
      (lVar2 = *(longlong *)&pFVar6->DynamicAnsiScopeNamesMap + (longlong)iVar5 * 0x18, lVar2 == 0))
     || (local_48 = *(uint *)(lVar2 + 8), local_48 == 0)) {
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name634,L"Trace/CpuProfiler");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope((FLLMScope *)&local_res20,LLMScope_Name634,false,None,Default,true);
    FMemScope::FMemScope((FMemScope *)(local_44 + 0xc),&LLMScope_Name634,true);
    sVar7 = strlen(param_1);
    _Size = (ulong64)((int)sVar7 + 1);
    local_44._4_8_ = FMemStackBase::Alloc(&pFVar6->DynamicScopeNamesMemory,_Size,1);
    memmove((void *)local_44._4_8_,param_1,_Size);
    local_48 = OutputEventType((char *)local_44._4_8_,param_2,param_3);
    local_30 = (undefined8 *)(local_44 + 4);
    local_28 = &local_48;
    TSet<TTuple<char_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<char>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<char_const_*_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<char_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<char>,FDefaultSetAllocator>
                *)&pFVar6->DynamicAnsiScopeNamesMap,
               (TPairInitializer<char_const_*_const_&,unsigned_int_const_&> *)local_44,
               (bool *)&local_30);
    FMemScope::~FMemScope((FMemScope *)(local_44 + 0xc));
    FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  }
  return local_48;
}

// OutputDynamicEventType @ 141958760

uint __cdecl FCpuProfilerTrace::OutputDynamicEventType(wchar_t *param_1,char *param_2,uint param_3)

{
  wchar_t *pwVar1;
  longlong lVar2;
  wchar_t wVar3;
  longlong lVar4;
  int iVar5;
  FThreadBuffer *pFVar6;
  size_t sVar7;
  uint uVar8;
  ulong64 _Size;
  wchar_t *local_res20;
  uint local_48;
  undefined1 local_44 [20];
  undefined8 *local_30;
  uint *local_28;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar6 = *(FThreadBuffer **)(lVar4 + 0xb60);
  if (pFVar6 == (FThreadBuffer *)0x0) {
    pFVar6 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  uVar8 = 0;
  wVar3 = *param_1;
  pwVar1 = param_1;
  while (wVar3 != L'\0') {
    pwVar1 = pwVar1 + 1;
    uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) ^ (uint)(ushort)wVar3;
    wVar3 = *pwVar1;
  }
  local_res20 = param_1;
  iVar5 = TSet<TTuple<wchar_t_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<wchar_t>,FDefaultSetAllocator>
          ::FindIndexByHash<wchar_t_const_*>
                    ((TSet<TTuple<wchar_t_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<wchar_t>,FDefaultSetAllocator>
                      *)&pFVar6->DynamicTCharScopeNamesMap,uVar8,&local_res20);
  if (((iVar5 == -1) ||
      (lVar2 = *(longlong *)&pFVar6->DynamicTCharScopeNamesMap + (longlong)iVar5 * 0x18, lVar2 == 0)
      ) || (local_48 = *(uint *)(lVar2 + 8), local_48 == 0)) {
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name662,L"Trace/CpuProfiler");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope((FLLMScope *)&local_res20,LLMScope_Name662,false,None,Default,true);
    FMemScope::FMemScope((FMemScope *)(local_44 + 0xc),&LLMScope_Name662,true);
    sVar7 = wcslen(param_1);
    _Size = (ulong64)((int)sVar7 * 2 + 2);
    local_44._4_8_ = FMemStackBase::Alloc(&pFVar6->DynamicScopeNamesMemory,_Size,2);
    memmove((void *)local_44._4_8_,param_1,_Size);
    local_48 = OutputEventType((wchar_t *)local_44._4_8_,param_2,param_3);
    local_30 = (undefined8 *)(local_44 + 4);
    local_28 = &local_48;
    TSet<TTuple<wchar_t_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<wchar_t>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<wchar_t_const_*_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<wchar_t_const_*,unsigned_int>,FCpuProfilerTraceInternal::FDynamicScopeNameMapKeyFuncs<wchar_t>,FDefaultSetAllocator>
                *)&pFVar6->DynamicTCharScopeNamesMap,
               (TPairInitializer<wchar_t_const_*_const_&,unsigned_int_const_&> *)local_44,
               (bool *)&local_30);
    FMemScope::~FMemScope((FMemScope *)(local_44 + 0xc));
    FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  }
  return local_48;
}

// OutputDynamicEventTypeWithId @ 141958960

uint __cdecl
FCpuProfilerTrace::OutputDynamicEventTypeWithId
          (FName *param_1,char *param_2,char *param_3,uint param_4)

{
  FNameEntryId FVar1;
  longlong lVar2;
  uint uVar3;
  FThreadBuffer *pFVar4;
  uint *puVar5;
  undefined1 *puVar6;
  FLLMScope local_48;
  uint local_44;
  uint local_40;
  undefined1 local_3c [12];
  uint *local_30;
  uint *local_28;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = *(FThreadBuffer **)(lVar2 + 0xb60);
  if (pFVar4 == (FThreadBuffer *)0x0) {
    pFVar4 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  FVar1.Value = (param_1->ComparisonIndex).Value;
  uVar3 = ::GetTypeHash(FVar1);
  if (*(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x8 !=
      *(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar4->DynamicFNameScopeNamesMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar4->DynamicFNameScopeNamesMap).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x48 - 1U & uVar3
                               ) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 +
                         *(longlong *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x0);
        if (*puVar5 == FVar1.Value) {
          if ((puVar5 != (uint *)0x0) && (local_44 = puVar5[1], local_44 != 0)) {
            return local_44;
          }
          break;
        }
        uVar3 = puVar5[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name715,L"Trace/CpuProfiler");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_48,LLMScope_Name715,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_3c + 4),&LLMScope_Name715,true);
  if (param_2 == (char *)0x0) {
    local_44 = OutputEventType(param_1,param_3,param_4);
  }
  else {
    local_44 = OutputEventType(param_2,param_3,param_4);
  }
  local_40 = (param_1->ComparisonIndex).Value;
  local_30 = &local_40;
  local_28 = &local_44;
  TSet<TTuple<FNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNameEntryId_&&,unsigned_int_const_&>_>
            ((TSet<TTuple<FNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
              *)&pFVar4->DynamicFNameScopeNamesMap,
             (TPairInitializer<FNameEntryId_&&,unsigned_int_const_&> *)local_3c,(bool *)&local_30);
  FMemScope::~FMemScope((FMemScope *)(local_3c + 4));
  FLLMScope::~FLLMScope(&local_48);
  return local_44;
}

// OutputDynamicEventTypeWithId @ 141958b30

uint __cdecl
FCpuProfilerTrace::OutputDynamicEventTypeWithId
          (FName *param_1,wchar_t *param_2,char *param_3,uint param_4)

{
  FNameEntryId FVar1;
  longlong lVar2;
  uint uVar3;
  FThreadBuffer *pFVar4;
  uint *puVar5;
  undefined1 *puVar6;
  FLLMScope local_48;
  uint local_44;
  uint local_40;
  undefined1 local_3c [12];
  uint *local_30;
  uint *local_28;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = *(FThreadBuffer **)(lVar2 + 0xb60);
  if (pFVar4 == (FThreadBuffer *)0x0) {
    pFVar4 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  FVar1.Value = (param_1->ComparisonIndex).Value;
  uVar3 = ::GetTypeHash(FVar1);
  if (*(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x8 !=
      *(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar4->DynamicFNameScopeNamesMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar4->DynamicFNameScopeNamesMap).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x48 - 1U & uVar3
                               ) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 +
                         *(longlong *)&(pFVar4->DynamicFNameScopeNamesMap).field_0x0);
        if (*puVar5 == FVar1.Value) {
          if ((puVar5 != (uint *)0x0) && (local_44 = puVar5[1], local_44 != 0)) {
            return local_44;
          }
          break;
        }
        uVar3 = puVar5[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name747,L"Trace/CpuProfiler");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_48,LLMScope_Name747,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_3c + 4),&LLMScope_Name747,true);
  if (param_2 == (wchar_t *)0x0) {
    local_44 = OutputEventType(param_1,param_3,param_4);
  }
  else {
    local_44 = OutputEventType(param_2,param_3,param_4);
  }
  local_40 = (param_1->ComparisonIndex).Value;
  local_30 = &local_40;
  local_28 = &local_44;
  TSet<TTuple<FNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNameEntryId_&&,unsigned_int_const_&>_>
            ((TSet<TTuple<FNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
              *)&pFVar4->DynamicFNameScopeNamesMap,
             (TPairInitializer<FNameEntryId_&&,unsigned_int_const_&> *)local_3c,(bool *)&local_30);
  FMemScope::~FMemScope((FMemScope *)(local_3c + 4));
  FLLMScope::~FLLMScope(&local_48);
  return local_44;
}

// OutputEndEvent @ 141958d00

void __cdecl FCpuProfilerTrace::OutputEndEvent(void)

{
  longlong lVar1;
  ulong64 uVar2;
  FThreadBuffer *pFVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  int *piVar7;
  ushort uVar8;
  uchar *puVar9;
  LARGE_INTEGER local_res8;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar7 = (int *)(lVar1 + 0xb58);
  pFVar3 = *(FThreadBuffer **)(lVar1 + 0xb60);
  *piVar7 = *piVar7 + -1;
  if (pFVar3 == (FThreadBuffer *)0x0) {
    pFVar3 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(&local_res8);
  uVar2 = pFVar3->LastCycle;
  pFVar3->LastCycle = (ulong64)local_res8;
  puVar9 = pFVar3->Buffer + pFVar3->BufferSize;
  uVar6 = (local_res8.QuadPart - uVar2) * 4;
  do {
    bVar5 = (byte)uVar6;
    bVar4 = 0;
    if (0x7f < uVar6) {
      bVar4 = 0x80;
    }
    uVar6 = uVar6 >> 7;
    *puVar9 = bVar4 | bVar5 & 0x7f;
    puVar9 = puVar9 + 1;
  } while (uVar6 != 0);
  uVar8 = ((short)puVar9 - (short)pFVar3) - 0x12;
  pFVar3->BufferSize = uVar8;
  if (*piVar7 == 0 || 0xf0 < uVar8) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar3);
  }
  return;
}

// OutputEndEventWithMetadata @ 141958df0

void __cdecl FCpuProfilerTrace::OutputEndEventWithMetadata(void)

{
  longlong lVar1;
  ulong64 uVar2;
  FThreadBuffer *pFVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  int *piVar7;
  ushort uVar8;
  uchar *puVar9;
  LARGE_INTEGER LStackX_8;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar7 = (int *)(lVar1 + 0xb58);
  pFVar3 = *(FThreadBuffer **)(lVar1 + 0xb60);
  *piVar7 = *piVar7 + -1;
  if (pFVar3 == (FThreadBuffer *)0x0) {
    pFVar3 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(&LStackX_8);
  uVar2 = pFVar3->LastCycle;
  pFVar3->LastCycle = (ulong64)LStackX_8;
  puVar9 = pFVar3->Buffer + pFVar3->BufferSize;
  uVar6 = (LStackX_8.QuadPart - uVar2) * 4;
  do {
    bVar5 = (byte)uVar6;
    bVar4 = 0;
    if (0x7f < uVar6) {
      bVar4 = 0x80;
    }
    uVar6 = uVar6 >> 7;
    *puVar9 = bVar4 | bVar5 & 0x7f;
    puVar9 = puVar9 + 1;
  } while (uVar6 != 0);
  uVar8 = ((short)puVar9 - (short)pFVar3) - 0x12;
  pFVar3->BufferSize = uVar8;
  if (*piVar7 == 0 || 0xf0 < uVar8) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar3);
  }
  return;
}

// OutputEventMetadataSpec @ 141958e00

void __cdecl
FCpuProfilerTrace::OutputEventMetadataSpec
          (uint param_1,wchar_t *param_2,wchar_t *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  uint *puVar1;
  FScriptContainerElement *_Src;
  uint uVar2;
  uchar *puVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FImportantLogScope local_28;
  
  sVar4 = wcslen(param_2);
  uVar5 = (uint)sVar4 & 0xffff;
  sVar4 = wcslen(param_3);
  uVar6 = (uint)sVar4 & 0xffff;
  if (-1 < CpuChannel->Enabled) {
    uVar2 = uVar6 * 2;
    UE::Trace::Private::FImportantLogScope::Enter<FCpuProfilerMetadataSpecFields>
              (&local_28,param_4->ArrayNum + uVar2 + uVar5);
    *(uint *)local_28.Ptr = param_1;
    UE::Trace::Private::FImportantLogScope::
    FFieldSet<UE::Trace::TField<1,4,enum_UE::Trace::AnsiString>,enum_UE::Trace::AnsiString>::Impl
              (&local_28,param_2,uVar5);
    puVar3 = local_28.Ptr;
    puVar1 = (uint *)((longlong)local_28.Ptr + (longlong)local_28.AuxCursor);
    *puVar1 = uVar6 << 0xe | 0x200;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,param_3,(ulonglong)uVar2);
    iVar7 = uVar2 + local_28.AuxCursor;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar7 + 4) = 3;
    uVar5 = param_4->ArrayNum;
    _Src = (param_4->AllocatorInstance).Data;
    *(uint *)((longlong)puVar3 + (longlong)iVar7 + 4) = uVar5 << 0xd | 0x300;
    *(undefined1 *)((longlong)puVar3 + (longlong)iVar7 + 4) = 1;
    memcpy((void *)((longlong)puVar3 + (longlong)iVar7 + 8),_Src,(ulonglong)uVar5);
    *(undefined1 *)((longlong)(int)(iVar7 + uVar5) + 8 + (longlong)puVar3) = 3;
    LOCK();
    *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) =
         *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) + 1;
    UNLOCK();
  }
  return;
}

// OutputEventType @ 141958f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FCpuProfilerTrace::OutputEventType(FName *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  FNameEntry *this;
  undefined1 auStack_848 [48];
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  this = ::FName::GetDisplayNameEntry(param_1);
  if (this.bIsWide == 0) {
    FNameEntry::GetAnsiName(this,(char (*) [1024])local_818);
    uVar1 = OutputEventType((char *)local_818,param_2,param_3);
  }
  else {
    FNameEntry::GetWideName(this,&local_818);
    uVar1 = OutputEventType(local_818,param_2,param_3);
  }
  return uVar1;
}

// OutputEventType @ 141958fb0

uint __cdecl FCpuProfilerTrace::OutputEventType(char *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  uchar *puVar2;
  ushort uVar3;
  size_t sVar4;
  int iVar6;
  uint uVar7;
  FImportantLogScope local_38;
  size_t sVar5;
  
  LOCK();
  UNLOCK();
  uVar7 = (int)NextSpecId + 1;
  NextSpecId = (TAtomic<unsigned_int>)((int)NextSpecId + 1);
  sVar4 = strlen(param_1);
  if (param_2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    sVar5 = strlen(param_2);
    uVar3 = (ushort)sVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    iVar6 = (int)(sVar4 & 0xffff);
    UE::Trace::Private::FImportantLogScope::Enter<FCpuProfilerEventSpecFields>
              (&local_38,(uint)uVar3 + iVar6);
    puVar2 = local_38.Ptr;
    puVar1 = (uint *)((longlong)local_38.Ptr + (longlong)local_38.AuxCursor);
    *(uint *)local_38.Ptr = uVar7;
    *puVar1 = iVar6 << 0xd | 0x100;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,param_1,sVar4 & 0xffff);
    iVar6 = local_38.AuxCursor + iVar6;
    *(uint *)((longlong)puVar2 + (longlong)iVar6 + 4) = (uint)uVar3 << 0xd | 0x200;
    *(undefined1 *)((longlong)puVar2 + (longlong)iVar6 + 4) = 1;
    memcpy((void *)((longlong)puVar2 + (longlong)iVar6 + 8),param_2,(ulonglong)uVar3);
    *(undefined1 *)((longlong)(int)(iVar6 + (uint)uVar3) + 8 + (longlong)puVar2) = 3;
    *(uint *)((longlong)puVar2 + 4) = param_3;
    LOCK();
    *(int *)((longlong)local_38.BufferOffset + (longlong)local_38.Ptr) =
         *(int *)((longlong)local_38.BufferOffset + (longlong)local_38.Ptr) + 1;
    UNLOCK();
  }
  return uVar7;
}

// OutputEventType @ 1419590e0

uint __cdecl FCpuProfilerTrace::OutputEventType(wchar_t *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uchar *puVar3;
  ushort uVar4;
  size_t sVar5;
  uint uVar6;
  FImportantLogScope local_28;
  
  LOCK();
  UNLOCK();
  uVar6 = (int)NextSpecId + 1;
  NextSpecId = (TAtomic<unsigned_int>)((int)NextSpecId + 1);
  sVar5 = wcslen(param_1);
  uVar2 = (uint)sVar5 & 0xffff;
  if (param_2 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar5 = strlen(param_2);
    uVar4 = (ushort)sVar5;
  }
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FCpuProfilerEventSpecFields>
              (&local_28,uVar4 + uVar2);
    *(uint *)local_28.Ptr = uVar6;
    UE::Trace::Private::FImportantLogScope::
    FFieldSet<UE::Trace::TField<1,4,enum_UE::Trace::AnsiString>,enum_UE::Trace::AnsiString>::Impl
              (&local_28,param_1,uVar2);
    puVar3 = local_28.Ptr;
    puVar1 = (uint *)((longlong)local_28.Ptr + (longlong)local_28.AuxCursor);
    *puVar1 = (uint)uVar4 << 0xd | 0x200;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,param_2,(ulonglong)uVar4);
    *(undefined1 *)((longlong)(int)(local_28.AuxCursor + (uint)uVar4) + 4 + (longlong)puVar3) = 3;
    *(uint *)((longlong)puVar3 + 4) = param_3;
    LOCK();
    *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) =
         *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) + 1;
    UNLOCK();
  }
  return uVar6;
}

// OutputMetadata @ 141959340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl
FCpuProfilerTrace::OutputMetadata
          (uint param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  TAtomic<unsigned_int> TVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  FLogScope local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (CpuChannel->Enabled < 0) {
    uVar2 = 0;
  }
  else {
    LOCK();
    TVar1 = (TAtomic<unsigned_int>)((int)NextMetadataId + 1);
    UNLOCK();
    uVar2 = (int)NextMetadataId + 1;
    NextMetadataId = TVar1;
    if (-1 < CpuChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FCpuProfilerMetadataFields>((TLogScope<1> *)&local_28);
      *(uint *)local_28.Ptr = uVar2;
      *(uint *)((longlong)local_28.Ptr + 4) = param_1;
      UE::Trace::Private::Field_WriteAuxData
                (2,(uchar *)(param_2->AllocatorInstance).Data,param_2->ArrayNum & 0x7ffff);
      UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_28,&local_28);
    }
  }
  return uVar2;
}

// OutputResumeEvent @ 141959400

void __cdecl FCpuProfilerTrace::OutputResumeEvent(ulong64 param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FThreadBuffer *pFVar7;
  ushort uVar8;
  ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *pFVar9;
  uchar *puVar10;
  byte bVar11;
  byte bVar12;
  ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *pFVar13;
  ulonglong uVar14;
  LARGE_INTEGER local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar14 = (ulonglong)_tls_index;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8);
  pFVar13 = (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *)(lVar2 + 0xb70);
  uStack_20 = *(undefined4 *)(lVar2 + 0xb58);
  pFVar9 = *(ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> **)(lVar2 + 0xba0);
  if (*(ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> **)(lVar2 + 0xba0) ==
      (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *)0x0) {
    pFVar9 = pFVar13;
  }
  _local_28 = param_2;
  if ((pFVar9 <= (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *)
                 &stack0xffffffffffffffd8) &&
     (&stack0xffffffffffffffd8 < pFVar9->InlineData + (longlong)*(int *)(lVar2 + 0xbac) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0xba8);
  if (iVar6 == *(int *)(lVar2 + 0xbac)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCpuProfilerTraceInternal::FSuspendScopes>_>
                      (0x810,pFVar13,(int *)(lVar2 + 0xbac));
  }
  *(int *)(lVar2 + 0xba8) = iVar6 + 1;
  pFVar9 = *(ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> **)(lVar2 + 0xba0);
  if (*(ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> **)(lVar2 + 0xba0) ==
      (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *)0x0) {
    pFVar9 = pFVar13;
  }
  puVar10 = pFVar9->InlineData + (longlong)iVar6 * 0x10;
  *(undefined4 *)puVar10 = local_28;
  *(undefined4 *)(puVar10 + 4) = uStack_24;
  *(undefined4 *)(puVar10 + 8) = uStack_20;
  *(undefined4 *)(puVar10 + 0xc) = uStack_1c;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8);
  piVar1 = (int *)(lVar2 + 0xb58);
  *piVar1 = *piVar1 + *param_2;
  pFVar7 = *(FThreadBuffer **)(lVar2 + 0xb60);
  if (pFVar7 == (FThreadBuffer *)0x0) {
    pFVar7 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(&stack0x00000008);
  uVar3 = pFVar7->LastCycle;
  pFVar7->LastCycle = (ulong64)local_res8;
  puVar10 = pFVar7->Buffer + pFVar7->BufferSize;
  uVar14 = (local_res8.QuadPart - uVar3) * 4 | 3;
  do {
    bVar11 = 0;
    bVar12 = (byte)uVar14;
    if (0x7f < uVar14) {
      bVar11 = 0x80;
    }
    uVar14 = uVar14 >> 7;
    *puVar10 = bVar11 | bVar12 & 0x7f;
    puVar10 = puVar10 + 1;
  } while (uVar14 != 0);
  do {
    bVar11 = 0;
    bVar12 = (byte)param_1;
    if (0x7f < param_1) {
      bVar11 = 0x80;
    }
    param_1 = param_1 >> 7;
    *puVar10 = bVar11 | bVar12 & 0x7f;
    puVar10 = puVar10 + 1;
  } while (param_1 != 0);
  uVar14 = (ulonglong)*param_2;
  do {
    bVar12 = (byte)uVar14;
    bVar11 = 0;
    if (0x7f < uVar14) {
      bVar11 = 0x80;
    }
    uVar14 = uVar14 >> 7;
    *puVar10 = bVar11 | bVar12 & 0x7f;
    puVar10 = puVar10 + 1;
  } while (uVar14 != 0);
  uVar8 = ((short)puVar10 - (short)pFVar7) - 0x12;
  pFVar7->BufferSize = uVar8;
  if (0xf0 < uVar8) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar7);
  }
  return;
}

// OutputSuspendEvent @ 141959760

void __cdecl FCpuProfilerTrace::OutputSuspendEvent(void)

{
  longlong lVar1;
  ulong64 uVar2;
  code *pcVar3;
  uint *puVar4;
  undefined8 uVar5;
  bool bVar6;
  FThreadBuffer *pFVar7;
  ushort uVar8;
  ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *pFVar9;
  uchar *puVar10;
  byte bVar11;
  byte bVar12;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  LARGE_INTEGER local_res8;
  
  uVar13 = (ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
  if (*(int *)(lVar1 + 0xba8) < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = *(ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> **)(lVar1 + 0xba0);
  if (*(ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> **)(lVar1 + 0xba0) ==
      (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *)0x0) {
    pFVar9 = (ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *)(lVar1 + 0xb70);
  }
  iVar14 = *(int *)(lVar1 + 0xba8) + -1;
  puVar4 = *(uint **)(pFVar9->InlineData + (longlong)*(int *)(lVar1 + 0xba8) * 0x10 + -0x10);
  uVar5 = *(undefined8 *)(pFVar9->InlineData + (longlong)*(int *)(lVar1 + 0xba8) * 0x10 + -0x10 + 8)
  ;
  *(int *)(lVar1 + 0xba8) = iVar14;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCpuProfilerTraceInternal::FSuspendScopes>_>
            (0x10,8,(ForElementType<FCpuProfilerTraceInternal::FSuspendScopes> *)(lVar1 + 0xb70),
             iVar14,(int *)(lVar1 + 0xbac));
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
  piVar15 = (int *)(lVar1 + 0xb58);
  iVar14 = (int)uVar5;
  *puVar4 = *piVar15 - iVar14;
  pFVar7 = *(FThreadBuffer **)(lVar1 + 0xb60);
  *piVar15 = iVar14;
  if (pFVar7 == (FThreadBuffer *)0x0) {
    pFVar7 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(&local_res8);
  uVar2 = pFVar7->LastCycle;
  pFVar7->LastCycle = (ulong64)local_res8;
  puVar10 = pFVar7->Buffer + pFVar7->BufferSize;
  uVar13 = (local_res8.QuadPart - uVar2) * 4 | 2;
  do {
    bVar12 = (byte)uVar13;
    bVar11 = 0;
    if (0x7f < uVar13) {
      bVar11 = 0x80;
    }
    uVar13 = uVar13 >> 7;
    *puVar10 = bVar11 | bVar12 & 0x7f;
    puVar10 = puVar10 + 1;
  } while (uVar13 != 0);
  uVar13 = (ulonglong)*puVar4;
  do {
    bVar12 = (byte)uVar13;
    bVar11 = 0;
    if (0x7f < uVar13) {
      bVar11 = 0x80;
    }
    uVar13 = uVar13 >> 7;
    *puVar10 = bVar11 | bVar12 & 0x7f;
    puVar10 = puVar10 + 1;
  } while (uVar13 != 0);
  uVar8 = ((short)puVar10 - (short)pFVar7) - 0x12;
  pFVar7->BufferSize = uVar8;
  if (*piVar15 == 0 || 0xf0 < uVar8) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar7);
  }
  return;
}

