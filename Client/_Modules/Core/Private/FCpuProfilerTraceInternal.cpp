// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// CreateThreadBuffer @ 141932210

FThreadBuffer * __cdecl FCpuProfilerTraceInternal::CreateThreadBuffer(void)

{
  longlong lVar1;
  FThreadBuffer *pFVar2;
  FTlsAutoCleanup *pFVar3;
  FTlsAutoCleanup *this;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name146,L"Trace/CpuProfiler");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name146,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name146,true);
  pFVar3 = ::operator_new(0x230);
  this = (FTlsAutoCleanup *)0x0;
  if (pFVar3 != (FTlsAutoCleanup *)0x0) {
    pFVar3[1] = (FTlsAutoCleanup)0x0;
    *pFVar3 = (FTlsAutoCleanup)&___7FThreadBuffer_FCpuProfilerTraceInternal__6B_;
    *(undefined2 *)(pFVar3 + 2) = 0;
    FMemStackBase::FMemStackBase((FMemStackBase *)(pFVar3 + 0x23),Small);
    pFVar3[0x28] = (FTlsAutoCleanup)0x0;
    pFVar3[0x29] = (FTlsAutoCleanup)0x0;
    pFVar3[0x2c] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar3 + 0x2d) = 0;
    *(undefined4 *)&pFVar3[0x2d].field_0x4 = 0x80;
    *(undefined4 *)(pFVar3 + 0x2e) = 0xffffffff;
    *(undefined4 *)&pFVar3[0x2e].field_0x4 = 0;
    pFVar3[0x30] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar3 + 0x31) = 0;
    pFVar3[0x32] = (FTlsAutoCleanup)0x0;
    pFVar3[0x33] = (FTlsAutoCleanup)0x0;
    pFVar3[0x36] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar3 + 0x37) = 0;
    *(undefined4 *)&pFVar3[0x37].field_0x4 = 0x80;
    *(undefined4 *)(pFVar3 + 0x38) = 0xffffffff;
    *(undefined4 *)&pFVar3[0x38].field_0x4 = 0;
    pFVar3[0x3a] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar3 + 0x3b) = 0;
    pFVar3[0x3c] = (FTlsAutoCleanup)0x0;
    pFVar3[0x3d] = (FTlsAutoCleanup)0x0;
    pFVar3[0x40] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar3 + 0x41) = 0;
    *(undefined4 *)&pFVar3[0x41].field_0x4 = 0x80;
    *(undefined4 *)(pFVar3 + 0x42) = 0xffffffff;
    *(undefined4 *)&pFVar3[0x42].field_0x4 = 0;
    pFVar3[0x44] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar3 + 0x45) = 0;
    this = pFVar3;
  }
  *(FTlsAutoCleanup **)(lVar1 + 0xb60) = this;
  FTlsAutoCleanup::Register(this);
  pFVar2 = *(FThreadBuffer **)(lVar1 + 0xb60);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar2;
}

// FlushThreadBuffer @ 14193f9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FCpuProfilerTraceInternal::FlushThreadBuffer(FThreadBuffer *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  TLogScope<1> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  UE::Trace::Private::FLogScope::Enter<FCpuProfilerEventBatchV3Fields>(&local_28);
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
  param_1->BufferSize = 0;
  param_1->LastCycle = 0;
  return;
}

// GetNextMetadataId @ 1419489c0

uint __cdecl FCpuProfilerTraceInternal::GetNextMetadataId(void)

{
  TAtomic<unsigned_int> TVar1;
  
  TVar1 = NextMetadataId;
  LOCK();
  NextMetadataId = (TAtomic<unsigned_int>)((int)NextMetadataId + 1);
  UNLOCK();
  return (int)TVar1 + 1;
}

// GetNextSpecId @ 1419489e0

uint __cdecl FCpuProfilerTraceInternal::GetNextSpecId(void)

{
  TAtomic<unsigned_int> TVar1;
  
  TVar1 = NextSpecId;
  LOCK();
  NextSpecId = (TAtomic<unsigned_int>)((int)NextSpecId + 1);
  UNLOCK();
  return (int)TVar1 + 1;
}

