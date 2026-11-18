// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Increment @ 14149b1d0

void __thiscall
FCountersTrace::TCounter<__int64,0,__int64,0>::Increment(TCounter<__int64,0,__int64,0> *this)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  
  this->Value = this->Value + 1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if (this->CounterId == (atomic<unsigned_int>)0x0) {
    uVar1 = OutputInitCounter(this->CounterName,TraceCounterType_Int,this->CounterFlags & 0xf);
    LOCK();
    if (this->CounterId == (atomic<unsigned_int>)0x0) {
      aVar2._2_2_ = 0;
      aVar2._0_2_ = uVar1;
      this->CounterId = aVar2;
    }
    UNLOCK();
  }
  OutputSetValue(SUB42(this->CounterId,0),this->Value);
  return;
}

// Set @ 14196a580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCountersTrace::TCounter<__int64,0,__int64,0>::Set
          (TCounter<__int64,0,__int64,0> *this,long64 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  short sVar5;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((this->Value != param_1) && (this->Value = param_1, -1 < CountersChannel->Enabled)) {
    if (this->CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = OutputInitCounter(this->CounterName,TraceCounterType_Int,this->CounterFlags & 0xf);
      LOCK();
      if (this->CounterId == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar3;
        this->CounterId = aVar4;
      }
      UNLOCK();
    }
    uVar1 = *(undefined4 *)&this->Value;
    uVar2 = *(undefined4 *)((longlong)&this->Value + 4);
    sVar5 = SUB42(this->CounterId,0);
    if ((sVar5 != 0) && (-1 < CountersChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FCountersSetValueIntFields>((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      *(DWORD *)(local_20 + 1) = uVar1;
      *(undefined4 *)((longlong)(local_20 + 1) + 4) = uVar2;
      *(short *)(local_20 + 2) = sVar5;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

