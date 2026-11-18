// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Add @ 14862cdc0

void __thiscall
FCountersTrace::TCounter<__int64,0,std::atomic<__int64>,0>::Add
          (TCounter<__int64,0,std::atomic<__int64>,0> *this,long64 param_1)

{
  ushort uVar1;
  atomic<unsigned_int> aVar2;
  
  if (param_1 != 0) {
    LOCK();
    this->Value = (atomic<__int64>)((longlong)this->Value + param_1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
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
      OutputSetValue(SUB42(this->CounterId,0),(long64)this->Value);
    }
  }
  return;
}

