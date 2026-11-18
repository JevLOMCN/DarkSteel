// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// BeginEncodeOp @ 141a7b280

void __cdecl
FStatsTraceInternal::BeginEncodeOp
          (FName *param_1,EOpType param_2,FThreadState **param_3,uchar **param_4)

{
  longlong lVar1;
  FThreadState *pFVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uchar *puVar7;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FThreadState **)(lVar1 + 0xbc0);
  *param_3 = pFVar2;
  if (pFVar2 == (FThreadState *)0x0) {
    pFVar2 = InitThreadState();
    *param_3 = pFVar2;
  }
  if (0x1e1 < pFVar2->BufferSize) {
    FlushThreadBuffer(pFVar2);
  }
  uVar4 = local_res8.QuadPart - ((LARGE_INTEGER *)*param_3)->QuadPart;
  ((LARGE_INTEGER *)*param_3)->QuadPart = (LONGLONG)local_res8;
  puVar7 = (*param_3)->Buffer + (*param_3)->BufferSize;
  *param_4 = puVar7;
  uVar6 = (ulonglong)(param_1->ComparisonIndex).Value << 3 | (longlong)(int)param_2;
  do {
    bVar3 = 0;
    bVar5 = (byte)uVar6;
    if (0x7f < uVar6) {
      bVar3 = 0x80;
    }
    uVar6 = uVar6 >> 7;
    *puVar7 = bVar3 | bVar5 & 0x7f;
    puVar7 = *param_4 + 1;
    *param_4 = puVar7;
  } while (uVar6 != 0);
  do {
    bVar5 = 0;
    bVar3 = (byte)uVar4;
    if (0x7f < uVar4) {
      bVar5 = 0x80;
    }
    uVar4 = uVar4 >> 7;
    *puVar7 = bVar5 | bVar3 & 0x7f;
    *param_4 = *param_4 + 1;
    puVar7 = *param_4;
  } while (uVar4 != 0);
  return;
}

// EndEncodeOp @ 141a7e5a0

void __cdecl FStatsTraceInternal::EndEncodeOp(FThreadState *param_1,uchar *param_2)

{
  param_1->BufferSize = ((short)param_2 - (short)param_1) - 10;
  return;
}

// FlushThreadBuffer @ 141a801d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FStatsTraceInternal::FlushThreadBuffer(FThreadState *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  TLogScope<1> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < StatsChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FStatsEventBatch2Fields>(&local_28);
    UE::Trace::Private::Field_WriteAuxData(0,param_1->Buffer,(uint)param_1->BufferSize);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar2;
    if (lVar1 != local_28._8_8_) {
      *(longlong *)(lVar1 + 0x28) = lVar2;
    }
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  param_1->LastCycle = 0;
  param_1->BufferSize = 0;
  return;
}

// InitThreadState @ 141a83330

FThreadState * __cdecl FStatsTraceInternal::InitThreadState(void)

{
  wchar_t wVar1;
  longlong lVar2;
  FThreadState *pFVar3;
  undefined8 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  wchar_t *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  puVar9 = (undefined8 *)0x0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uVar10 = 0;
    pwVar7 = L"Trace/Stats";
    puVar4 = puVar9;
    do {
      pwVar6 = pwVar7;
      pwVar7 = pwVar6 + 1;
      uVar8 = (uint)puVar4 | uVar10;
      puVar4 = (undefined8 *)(ulonglong)uVar8;
      wVar1 = *pwVar7;
      uVar10 = (uint)(ushort)wVar1;
    } while (wVar1 != L'\0');
    iVar5 = (int)((longlong)(pwVar6 + -0xa836d5d7) >> 1);
    _iStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(uVar8 & 0xffffff80) != 0),iVar5);
    local_18 = L"Trace/Stats";
    if (iVar5 == 0) {
      LLMScope_Name71.ComparisonIndex.Value = 0;
      LLMScope_Name71.Number = 0;
      _Init_thread_footer(&::_TSS0);
    }
    else {
      UE::Core::Private::ParseNumberFromName<wchar_t>(L"Trace/Stats",&iStack_10);
      FNameHelper::MakeWithNumber
                ((FWideStringViewWithWidth *)&LLMScope_Name71,(EFindName)&local_18,1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name71,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name71,true);
  puVar4 = ::operator_new(0x210);
  if (puVar4 != (undefined8 *)0x0) {
    memset(puVar4 + 1,0,0x208);
    puVar9 = puVar4;
  }
  *(undefined8 **)(lVar2 + 0xbc0) = puVar9;
  *puVar9 = 0;
  *(undefined2 *)(*(longlong *)(lVar2 + 0xbc0) + 8) = 0;
  pFVar3 = *(FThreadState **)(lVar2 + 0xbc0);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar3;
}

