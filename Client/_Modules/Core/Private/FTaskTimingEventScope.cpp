// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FTaskTimingEventScope @ 14147f230

FTaskTimingEventScope * __thiscall
TaskTrace::FTaskTimingEventScope::FTaskTimingEventScope(FTaskTimingEventScope *this,ulong64 param_1)

{
  bool bVar1;
  
  this->bIsActive = false;
  this->TaskId = param_1;
  Started(param_1);
  if ((-1 < TaskChannel->Enabled) && (-1 < CpuChannel->Enabled)) {
    bVar1 = IsInRenderingThread();
    if (!bVar1) {
      if (ExecuteTaskSpecId == (atomic<unsigned_int>)0x0) {
        ExecuteTaskSpecId =
             (atomic<unsigned_int>)
             FCpuProfilerTrace::OutputEventType
                       ("ExecuteTask",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                        ,0x132);
        LOCK();
        UNLOCK();
      }
      FCpuProfilerTrace::OutputBeginEvent((uint)ExecuteTaskSpecId);
      this->bIsActive = true;
    }
  }
  return this;
}

// ~FTaskTimingEventScope @ 141481ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TaskTrace::FTaskTimingEventScope::~FTaskTimingEventScope(FTaskTimingEventScope *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (this->bIsActive != false) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar1 = this->TaskId;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized != false)) {
    if (uVar1 == 0xffffffffffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskId != InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                         ,0xce,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceFinishedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].QuadPart = uVar1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

