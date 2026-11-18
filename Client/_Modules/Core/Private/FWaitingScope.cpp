// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FWaitingScope @ 14147f6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FWaitingScope * __thiscall
TaskTrace::FWaitingScope::FWaitingScope
          (FWaitingScope *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  FLogScope local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) && (-1 < TaskChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingStartedFields>
              ((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *(LARGE_INTEGER *)local_20.Ptr = local_28;
    UE::Trace::Private::Field_WriteAuxData
              (1,(uchar *)(param_1->AllocatorInstance).Data,(param_1->ArrayNum & 0xffffU) << 3);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_20,&local_20);
  }
  return this;
}

// FWaitingScope @ 14147f790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FWaitingScope * __thiscall
TaskTrace::FWaitingScope::FWaitingScope(FWaitingScope *this,ulong64 param_1)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulong64 local_30;
  FLogScope local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) && (-1 < TaskChannel->Enabled)) {
    local_30 = param_1;
    UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingStartedFields>
              ((TLogScope<1> *)&local_28);
    QueryPerformanceCounter(&local_38);
    *(LARGE_INTEGER *)local_28.Ptr = local_38;
    UE::Trace::Private::Field_WriteAuxData(1,(uchar *)&local_30,8);
    UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_28,&local_28);
  }
  return this;
}

// ~FWaitingScope @ 141481df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall TaskTrace::FWaitingScope::~FWaitingScope(FWaitingScope *this)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) && (-1 < TaskChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingFinishedFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

